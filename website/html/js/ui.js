"use strict";function getWaypointDom(e,t){var t=t;return NAV.WaypointPrefix.hasOwnProperty(t)||(t=void 0),{wpList:'<div data-role="none" class="waypoint_list" id="waypoint_'+e+'">\n\t\t\t                    <span class="sidebar_site_type_logo" onclick=\'dispWaypointDetail(this)\'>\n\t\t\t                    \t<img src="image/'+t+'.png" width="100%"/>\n\t\t\t                    </span>\n\t\t\t                    <span class="waypoint_name" onclick=\'exeWaypoint(this)\'>\n\t\t\t                    \t'+e+'\n\t\t\t                    </span>\n\t\t\t                    <span class="sidebar_site_type_confirm" onclick=\'delWaypoint(this)\'>\n\t\t\t                    \t<img src="image/delete.png" width="100%"/>\n\t\t\t                    </span>\n                  \t\t</div>',wpForTrajAdd:'<option class="wpsInTrajAdd" value="'+e+'">'+e+"</option>"}}function getWaypointSelectedDom(e){var t=getWpInfoByName(e);{if(t){var a=JSON.parse(t.header.frame_id).type;return NAV.WaypointPrefix.hasOwnProperty(a)||(a=void 0),'<li style="height: 60px" id="'+e+'" class="selectedWp">\n                    \t<span class="sidebar_site_type_logo">\n                            <img src="image/'+a+'.png" width="100%"/>\n                        </span>\n                        <span class="waypoint_name">\n                            '+e+'\n                        </span>\n                        <span class="del_waypoint_selected" onclick=\'delWaypointSelected(this)\'>\n                            <img src="image/delete.png" width="100%"/>\n                        </span>\n                   </li>'}console.warn("[WARN]Can not find waypoint "+e)}}function getTrajDom(e){var t="trajectory",a=e;return"dock"===e.split("_")[0]&&(t="dock",a=e.split("_").slice(1).join("_")),'<div data-role="none" class="trajectory_list" id="traj_'+e+'">\n                    <span class="traj_icon" onclick=\'dispTrajDetail(this)\'>\n                    \t<img src="image/'+t+'.png" width="100%"/>\n                    </span>\n                    <span class="traj_name" onclick=\'exeTraj(this)\'>\n                    \t'+a+'\n                    </span>\n                    <span class="traj_delete" onclick=\'delTraj(this)\'>\n                    \t<img src="image/delete.png" width="100%"/>\n                    </span>\n                  </div>'}function getMapDom(e){var t="delete";return"master"===e&&(t="ban_delete"),"<li class='otherMap' id='"+e+"'>\n\t\t\t\t\t<span class='mapName' onclick='changeScene(this)'>\n\t\t\t\t\t\t"+e+"\n\t\t\t\t\t</span>\n\t\t\t\t    <span class='mapDelIcon' onclick='delScene(this)'><img src=\"image/"+t+'.png" width="100%"/>\n\t\t\t\t    </span>\n\t\t\t\t   </li>'}function getDiagnosticsDom(e){var t="background: #ffffff",a="color: #3b6dde";switch(e.level){case PARAMS.DiagnosticsLevel.Warn:t="background: #fffde7",a="color: #000000";break;case PARAMS.DiagnosticsLevel.Error:t="background: #ffebee",a="color: #000000";break;case PARAMS.DiagnosticsLevel.Stale:t="background: #fafafa",a="color: #000000"}var o=e.name.indexOf("/",1),n=e.name.substr(o);return'<div class="errors" id=\''+e.name+"' onclick='dispDiagnosticsDetail(this)' style=\""+t+'">\n                \t<span class="errors_left" style="'+a+'">'+n+'</span>\n                \t<span class="errors_right" style="'+a+'">'+e.message+"</span>\n            \t   </div>"}function changeScene(e){clickFeedback($(e).parent());var t=$(e).parent().attr("id");NAV.manipulateScene(NAV.CmdEnum.MapUpdate,t,!0),console.log("[INFO]switching to map: "+t),DATA.loading="切换中"}function delScene(e){clickFeedback($(e).parent());var t=$(e).parent().attr("id");"master"!==t?(NAV.manipulateScene(NAV.CmdEnum.MapDelete,t,!0),console.log("[INFO]deleting map: "+t)):ALERT.warn({title:"删除警告",text:"不允许删除master版本地图"})}function dispWaypointDetail(e){clickFeedback($(e).parent());var t=$(e).next().text().trim(),a=getWpInfoByName(t),o=JSON.parse(a.header.frame_id);a?(console.log("[INFO]waypoint:\n-type: "+o.type+";\n-name: "+o.name+"."),updateWaypointDetailPage(a),$("#site_details").popup("open")):console.warn("[WARN]Can not find waypoint "+t)}function exeWaypoint(e){clickFeedback($(e).parent());var t=$(e).text().trim();NAV.navCtrl(t,1)}function delWaypoint(e){if(clickFeedback($(e).parent()),DATA.navCtrlStatus.status===PARAMS.NavCtrlStatus.idling){var t=$(e).prevAll(),a=$(t[0]).text().trim();NAV.delWaypoint(a)}else ALERT.warn({title:"导航中",text:"请停止当前任务后再删除该站点"})}function delWaypointSelected(e){var t=$(e).parent().attr("id"),a=DATA.selectedWaypoints.indexOf(t);DATA.selectedWaypoints.splice(a,1),UI.dispSelectedWaypoints()}function dispTrajDetail(e){clickFeedback($(e).parent());var t=getTrajInfo(e);console.log("[INFO]trajectory:\n-type: "+t.type+";\n-name: "+t.name+"."),updateTrajDetailPage(getTrajectoryByName(t.name)),$("#line_details").popup("open")}function exeTraj(e){clickFeedback($(e).parent());var t=getTrajInfo(e);if(t.name===NAV.DockingEndTrajName){if(DATA.chargeStatus===PARAMS.ChargeStatus.uncontact)return void ALERT.warn({title:"充电已结束",text:"结束充电命令将忽略"})}else if(t.name===NAV.DockingBeginTrajName&&DATA.chargeStatus!==PARAMS.ChargeStatus.uncontact)return void ALERT.warn({title:"正在充电",text:"开始充电命令将忽略"});NAV.navCtrl(t.name,1)}function delTraj(e){if(clickFeedback($(e).parent(),{duration:500}),DATA.navCtrlStatus.status===PARAMS.NavCtrlStatus.idling){var t=getTrajInfo(e);NAV.delTrajectory(t.name)}else ALERT.warn({title:"导航中",text:"请停止当前任务后再删除该路线"})}function getTrajInfo(e){var t=$(e).parent().attr("id").substring(5),a="customer";return t.startsWith("dock")&&(a="dock"),{name:t,type:a}}function getWpInfoByName(e){console.log(DATA.waypointsMsg);for(var t=0;t<DATA.waypointsMsg.waypoints.length;t++){var a=DATA.waypointsMsg.waypoints[t];if(a.name===e)return a}return!1}function updateWaypointDetailPage(e){var t=JSON.parse(e.header.frame_id);console.log(t),t.close_enough=parseFloat(t.close_enough),t.goal_timeout=parseFloat(t.goal_timeout),$("#wp_detail_name").text(e.name),$("#wp_detail_frame_id").text(t.type),$("#wp_detail_failure_mode").text(t.failure_mode),$("#wp_detail_close_enough").text(t.close_enough.toFixed(3)),$("#wp_detail_goal_timeout").text(t.goal_timeout.toFixed(3)),$("#wp_detail_pose_posX").text(e.pose.position.x.toFixed(3)),$("#wp_detail_pose_posY").text(e.pose.position.y.toFixed(3)),$("#wp_detail_pose_posZ").text(e.pose.position.z.toFixed(3)),$("#wp_detail_pose_oriX").text(e.pose.orientation.x.toFixed(3)),$("#wp_detail_pose_oriY").text(e.pose.orientation.y.toFixed(3)),$("#wp_detail_pose_oriZ").text(e.pose.orientation.z.toFixed(3)),$("#wp_detail_pose_oriW").text(e.pose.orientation.w.toFixed(3));var a=TF.quaternionToYaw(e.pose.orientation),o=a/Math.PI*180;$("#wp_detail_pose_yaw").text(a.toFixed(3)+" RAD / "+o.toFixed(3)+" DEG")}function updateTrajDetailPage(e){var t=$(".line_details_ul");t.children().remove();for(var a="",o=0;o<e.waypoints.length;o++)a+='<li>\n                    \t\t<span class="line_details_ul_left">'+o+'：</span>\n                    \t\t<span class="line_details_ul_right">'+e.waypoints[o].name+"</span>\n                \t\t\t</li>";t.append(a)}function dispDiagnosticsDetail(e){}function clickFeedback(e,t){var a="#e8eaf6",o="transparent",n=200;t&&(a=t.colorClicked||"#e8eaf6",o=t.colorAfter||"transparent",n=t.duration||200),e.css("backgroundColor",a),setTimeout(function(){e.css("backgroundColor",o)},n)}function undispWpMenu(){var e=$("#bomb_boxs");e.css("opacity","0"),e.css("left",-125),e.css("top",-125);for(var t=0;t<8;t++){var a="#bomb_boxs_"+(t+1);$(a).css("opacity","0")}UI.wpMenuDisp=!1}function undispWpBombbox4(){swal({title:"确定删除吗？",text:"您将无法恢复这个文件！",imageUrl:"image/executes.png",showCancelButton:!0,confirmButtonColor:"#3b6dde",cancelButtonText:"否",confirmButtonText:"是",closeOnConfirm:!1},function(){swal("Deleted!","已删除","success")})}var _typeof="function"==typeof Symbol&&"symbol"==typeof Symbol.iterator?function(e){return typeof e}:function(e){return e&&"function"==typeof Symbol&&e.constructor===Symbol&&e!==Symbol.prototype?"symbol":typeof e},UI=UI||{toolBar:["move","zoomIn","zoomOut","pencilTool","rubber","undo","redo","confirm","point","line","circle","rect"],display:function(e){if(e.hasOwnProperty("property")){var t=e.property+"Topic",a=e.property+"Stage",o=DATA.topic[t],n=DATA[a];if(e.value){var s=e.property+"Msg";if("mapMsg"===s)return void DATA.stage.stage.addChild(n);o.subscribe(function(e){DATA[s]=e})}else{if("waypointsStage"===a){o.unsubscribe();for(var i in n)if(DATA.waypointsStage.hasOwnProperty(i))for(var r=DATA.waypointsStage[i],l=0;l<r.length;l++)DATA.stage.stage.removeChild(r[l]);return}if("mapStage"===a)return void DATA.stage.stage.removeChild(n);o.unsubscribe(),DATA.stage.stage.removeChild(n)}}},dispMap:function(e){DATA.mapStage&&(DATA.stage.stage.removeAllChildren(),DATA.robotStage=null);var t=document.createElement("canvas"),a=t.getContext("2d");if(t.width=e.info.width,t.height=e.info.height,DATA.useBase64)c=new createjs.Bitmap(e.data);else{for(var o=a.createImageData(e.info.width,e.info.height),n=0;n<e.info.height;n++)for(var s=0;s<e.info.width;s++){var i=s+(e.info.height-n-1)*e.info.width,r=e.data[i],l=4*(s+n*e.info.width);100===r?(o.data[l]=40,o.data[++l]=53,o.data[++l]=147,o.data[++l]=255):0===r?(o.data[l]=232,o.data[++l]=234,o.data[++l]=246,o.data[++l]=63):(o.data[l]=245,o.data[++l]=245,o.data[++l]=245,o.data[++l]=5)}a.putImageData(o,0,0);var c=new createjs.Bitmap(t)}var p=e.info.width/e.info.height,A=DATA.stage.width,g=DATA.stage.height;DATA.stage.width>DATA.stage.height?(A=DATA.stage.height*p,g=DATA.stage.height):(A=DATA.stage.width,g=DATA.stage.width/p);var d={x:A/DATA.stage.width||1,y:g/DATA.stage.height||1};c.scaleX=DATA.stage.width/e.info.width*d.x,c.scaleY=DATA.stage.height/e.info.height*d.y,c.regX=(A-DATA.stage.width)/2||0,c.regY=(g-DATA.stage.height)/2||0,DATA.mapScaleStage={x:c.scaleX,y:c.scaleY},DATA.mapStage=c,DATA.stage.stage.addChild(DATA.mapStage),DATA.loading&&(DATA.loading=!1)},dispWaypoints:function(e){if(DATA.waypointsStage)for(var t in DATA.waypointsStage)if(DATA.waypointsStage.hasOwnProperty(t))for(var a=DATA.waypointsStage[t],o=0;o<a.length;o++)DATA.stage.stage.removeChild(a[o]);if(DATA.rosMode!==NAV.RosMode.Gmapping&&DATA.rosMode!==NAV.RosMode.Converting){for(var n={goal:[]},s="",i="",o=0;o<e.waypoints.length;o++){var r=e.waypoints[o],l=JSON.parse(r.header.frame_id).type,c=getWaypointDom(r.name,l);s+=c.wpList,i+=c.wpForTrajAdd;var p=TF.rosToPx(r.pose.position);if("goal"===l){new createjs.Graphics;var A=ICON[l]({});A.x=p.x,A.y=p.y,A.rotation=TF.quaternionToTheta(r.pose.orientation),A.name=r.name,DATA.stage.stage.addChild(A),n[l].push(A),A.on("click",UI.wpClickHandle)}}DATA.waypointsStage=n,$(".waypoint_list").remove(),$(".sidebar_site").append(s),$(".wpsInTrajAdd").remove(),$("#waypointTrajAdd").append(i);var g=$(".sidebar_site"),d=g.css("height");isEqual(d,60)||(d=60*(e.waypoints.length+2),g.css("height",d))}},dispTrajectories:function(e){for(var t="",a=!1,o=0;o<e.trajectories.length;o++){var n=e.trajectories[o];t+=getTrajDom(n.name),n.name===NAV.DockingEndTrajName&&(a=!0)}$(".trajectory_list").remove(),$(".sidebar_route").append(t);var s=$(".sidebar_route");$("#sidebar_route_span");if(!isEqual(s.css("height"),60)){var i=60*(DATA.trajectoriesMsg.trajectories.length+2);s.css("height",i)}a&&"addDock"===DATA.loading.key&&(DATA.loading=!1)},dispRobot:function(e){var t=TF.rosToPx({x:e.position.x,y:e.position.y});if(t){var a=TF.quaternionToTheta(e.orientation);DATA.robotPoseStage?(DATA.stage.stage.contains(DATA.robotPoseStage),DATA.stage.stage.addChild(DATA.robotPoseStage)):(DATA.robotPoseStage=ICON.robot({}),DATA.stage.stage.addChild(DATA.robotPoseStage)),DATA.robotPoseStage.x=t.x,DATA.robotPoseStage.y=t.y,DATA.robotPoseStage.rotation=a}},dispGlobalPlan:function(e){DATA.globalPlanStage&&DATA.stage.stage.removeChild(DATA.globalPlanStage),DATA.globalPlanStage=ICON.globalPlan(e,{}),DATA.stage.stage.addChild(DATA.globalPlanStage)},dispLocalPlan:function(e){DATA.localPlanStage&&DATA.stage.stage.removeChild(DATA.localPlanStage);var t=TF.localPlanOdomToMap(e);DATA.localPlanStage=ICON.localPlan(t,{strokeColor:"#e91e63"}),DATA.stage.stage.addChild(DATA.localPlanStage)},dispFootprint:function(e){if(DATA.footprintStage&&DATA.stage.stage.removeChild(DATA.footprintStage),"/move_base/local_costmap/footprint"===DATA.topic.footprintTopic.name)t=TF.footprintOdomToMap(e);else var t=e;DATA.footprintStage=ICON.footprint(t,{strokeColor:"#8bc34a"}),DATA.stage.stage.addChild(DATA.footprintStage)},dispLaserScan:function(e){DATA.laserScanStage&&DATA.stage.stage.removeChild(DATA.laserScanStage);var t=TF.laserScanBase_laserToMap(e);DATA.laserScanStage=ICON.laserScan(t,{fillColor:"#ff9800"}),DATA.stage.stage.addChild(DATA.laserScanStage)},updateMapList:function(e){if(DATA.rosMode===NAV.RosMode.Navigation){$(".otherMap").remove();for(var t=e[0],a=1;a<e.length;a++){var o=getMapDom(e[a]);$("#mapList").append(o)}$("#currentMapName").text(t),$("#mapping_div_input").val(t),DATA.loading&&"init"!==DATA.loading.key&&(DATA.loading=!1)}},rosModeHandle:function(e){if(e===NAV.RosMode.Gmapping){t=$(".map_nav");isEqual(t.css("height"),35)||t.css("height",35),$("#currentMapName").text("保存地图")}else if(e===NAV.CmdEnum.SaveMap){var t=$(".map_nav");isEqual(t.css("height"),35)||t.css("height",35),$("#currentMapName").text("保存修改"),$("#footer_button").css("left",0),DATA.loading&&(DATA.loading=!1)}else if(e===NAV.RosMode.Converting)$("#currentMapName").text("切换中");else if(e===NAV.RosMode.Navigation){if(!DATA.mapList)return;UI.updateMapList(DATA.mapList),$("#footer_button").css("left","-100%"),DATA.loading||(DATA.loading=!1)}},navCtrlStatusHandle:function(e){if(e.status===PARAMS.NavCtrlStatus.idling)$(".waypoint_list").css("backgroundColor","transparent");else if(e.status===PARAMS.NavCtrlStatus.running)for(var t="waypoint_"+e.waypoint_name,a=$(".waypoint_list"),o=0;o<a.length;o++)$(a[o]).attr("id")===t?$(a[o]).css("backgroundColor","#e8eaf6"):$(a[o]).css("backgroundColor","transparent")},zoomIn:function(e){if(DATA.mapStage.scaleX>2*DATA.mapScaleStage.x||DATA.mapStage.scaleY>2*DATA.mapScaleStage.y)console.log("[INFO]Max scale");else{DATA.mapStage.scaleX*=e,DATA.mapStage.scaleY*=e;var t=DATA.mapStage.scaleX*DATA.mapStage.image.width,a=DATA.mapStage.scaleY*DATA.mapStage.image.height;DATA.mapStage.regX=Math.round(.5*(t-DATA.mapStage.image.width*DATA.mapScaleStage.x)),DATA.mapStage.regY=Math.round(.5*(a-DATA.mapStage.image.height*DATA.mapScaleStage.y));for(var o=0;o<DATA.mapEditStageList.length;o++){var n=DATA.mapEditStageList[o];"mapEdit"===n.name&&(n.scaleX*=e,n.scaleY*=e,console.log(n))}}},zoomOut:function(){DATA.mapStage.regX=0,DATA.mapStage.regY=0,DATA.mapStage.scaleX=DATA.mapScaleStage.x,DATA.mapStage.scaleY=DATA.mapScaleStage.y},brushStatusHandle:function(e){for(s=0;s<UI.toolBar.length;s++)if(UI.toolBar[s]!==e){var t="#"+UI.toolBar[s];$(t).css("backgroundColor","transparent"),DATA.stage.stage.removeEventListener("pressmove",PAINT[UI.toolBar[s]]),DATA.stage.stage.removeEventListener("click",PAINT[UI.toolBar[s]]),DATA.stage.stage.removeEventListener("pressup",PAINT.pressupHandle)}var a=$("#"+e),o=!0;switch("transparent"===a.css("backgroundColor")||"rgba(0, 0, 0, 0)"===a.css("backgroundColor")?a.css("backgroundColor","#e8eaf6"):(a.css("backgroundColor","transparent"),o=!1),e){case"move":return;case"zoomIn":case"zoomOut":a.css("backgroundColor","#e8eaf6");break;case"pencilTool":o?$("#pencilTool_content").css("height",240):$("#pencilTool_content").css("height",0);break;case"rubber":o?(DATA.stage.stage.addEventListener("pressmove",PAINT.rubber),DATA.stage.stage.addEventListener("pressup",PAINT.pressupHandle)):(DATA.stage.stage.removeEventListener("pressmove",PAINT.rubber),DATA.stage.stage.removeEventListener("pressup",PAINT.pressupHandle));break;case"undo":var n=DATA.mapEditStageList.pop();if(DATA.mapEditObstacleList.pop(),!n)break;DATA.stage.stage.removeChild(n);break;case"redo":break;case"confirm":console.log("[INFO]Confirm map_edit"),$("#currentMapName").text("保存中"),DATA.loading="保存中";for(var s=0;s<DATA.mapEditObstacleList.length;s++){console.log("publishing obstacle");var i=DATA.mapEditObstacleList[s];NAV.pubMapEditObstacle(i)}DATA.mapEditStageList=[],DATA.mapEditObstacleList=[],setTimeout(function(){NAV.pubCmdString("save_map_edit",!0)},500);break;default:$("#pencilTool_content").css("height",0);var r="url(../image/"+e+".png)";switch($("#pencilTool").css("background-color","#e8eaf6"),$("#pencilTool").css("background-image",r),e){case"point":o?(DATA.stage.stage.addEventListener("pressmove",PAINT.point),DATA.stage.stage.addEventListener("pressup",PAINT.pressupHandle)):(DATA.stage.stage.removeEventListener("pressmove",PAINT.point),DATA.stage.stage.removeEventListener("pressup",PAINT.pressupHandle));break;case"line":o?DATA.stage.stage.addEventListener("click",PAINT.line):DATA.stage.stage.removeEventListener("click",PAINT.line);break;case"circle":o?DATA.stage.stage.addEventListener("click",PAINT.circle):DATA.stage.stage.removeEventListener("click",PAINT.circle);break;case"rect":o?DATA.stage.stage.addEventListener("click",PAINT.rect):DATA.stage.stage.removeEventListener("click",PAINT.rect)}}},poseEstimate:function(){DATA.stage.stage.addEventListener("click",PAINT.pose)},undispBrushTool:function(){DATA.mapStage.contains(DATA.brushToolStage)&&DATA.mapStage.removeChild(DATA.brushToolStage)},dispSelectedWaypoints:function(){$(".selectedWp").remove();for(var e="",t=0;t<DATA.selectedWaypoints.length;t++)e+=getWaypointSelectedDom(DATA.selectedWaypoints[t]);$("#selected_wps_div").append(e)},updatePowerStatus:function(e){e=parseFloat(e);var t=$(".battery_display");t.css("height",100*e),DATA.chargeStatus!==PARAMS.ChargeStatus.charging&&(e<PARAMS.PowerWarnThreshold?DATA.powerAlarm||(DATA.powerAlarm=!0,t.css("background-color","#ff0000"),ALERT.warn({title:"电量低",text:"当前电量"+(100*e).toFixed()+"%, 请及时充电"})):t.css("background-color","#3f51b5"))},updateChargeStatus:function(e){e=parseInt(e),console.log("[INFO]charge status "+e);var t=$(".battery_display");switch(e){case PARAMS.ChargeStatus.uncontact:t.css("background-color","#3f51b5");break;case PARAMS.ChargeStatus.contact:t.css("background-color","#00ff00");break;case PARAMS.ChargeStatus.volAbnormal:t.css("background-color","#ffff00"),ALERT.error({title:"充电异常",text:"充电桩电压异常,请检查充电桩"});break;case PARAMS.ChargeStatus.charging:t.css("background-color","#00ff00"),ALERT.info({title:"正在充电",text:"充电状态正常"})}},diagnosticsMsgHandle:function(e){for(var t=["","","",""],a=0;a<e.length;a++)t[e[a].level+1]+=getDiagnosticsDom(e[a]);$(".errors").remove();for(var o=!0,a=t.length-1;a>0;a--)o=o&&""===t[a],$("#diagnosis").append(t[a]);if(o){$("#diagnosis").append('<div class="errors">\n\t\t\t\t\t            \t<span class="errors_left">未检测到错误</span>\n\t\t\t\t\t            \t<span class="errors_right"></span>\n\t\t\t\t\t        \t</div>')}},loading:function(e){if(e){var t=e;return"object"===(void 0===e?"undefined":_typeof(e))&&e.hasOwnProperty("key")&&(t=e.info),$("#loading_info").text(t),void $("#loading").css("display","block")}$("#loading").css("display","none")},robotModelHandle:function(e){if(-1!==PARAMS.Extensions.indexOf(e))switch(e){case"ster":case"ster2":$("#extensions_title").text("汽化过氧化氢消毒机器人"),$("#login").css("display","block");break;case"tofflon":$("#login").css("display","block")}else $("#extensions").hide()},softwareVersionHandle:function(e){},namespaceHandle:function(e){},browserInfoHandle:function(e){},wpClickHandle:function(e){var t=e.currentTarget.name;ALERT.confirm({title:"站点"+t,text:"确定要导航至站点"+t+"?",callback:function(){NAV.navCtrl(t,1)}})},mapClickHandle:function(e){console.log("change page"),$.mobile.changePage("#myPage","slideup")}};