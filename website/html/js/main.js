"use strict";function getRobotModel(e){var e="http://"+e+":8808/api/model";$.ajax({type:"get",url:e,async:!0,success:function(e){DATA.robotModel=e.model,console.log("[INFO]robot model: "+e.model)},dataType:"json"})}function getVersion(e){var e="http://"+e+":8808/api/version";$.ajax({type:"get",url:e,async:!0,success:function(e){DATA.softwareVersion=e.version,console.log("[INFO]software version: "+e.version)},dataType:"json"})}function getNamespace(e){var e="http://"+e+":8808/api/namespace";$.ajax({type:"get",url:e,async:!1,success:function(e){DATA.namespace=e.namespace,console.log("[INFO]ROS namespace: "+e.namespace)},dataType:"json"})}function getBrowserInfo(){var e=navigator.userAgent.toLowerCase(),t=(e.match(/firefox|chrome|safari|opera/g)||"other")[0];(e.match(/msie|trident/g)||[])[0]&&(t="msie");var o="",a="",i="";switch(o="ontouchstart"in window||-1!==e.indexOf("touch")||-1!==e.indexOf("mobile")?-1!==e.indexOf("ipad")?"pad":-1!==e.indexOf("mobile")?"mobile":-1!==e.indexOf("android")?"androidPad":"pc":"pc",t){case"chrome":case"safari":case"mobile":a="webkit";break;case"msie":a="ms";break;case"firefox":a="Moz";break;case"opera":a="O";break;default:a="webkit"}i=e.indexOf("android")>0?"android":navigator.platform.toLowerCase();var n={version:(e.match(/[\s\S]+(?:rv|it|ra|ie)[\/: ]([\d.]+)/)||[])[1],plat:i,type:t,pc:o,prefix:a,isMobile:"pc"!=o};DATA.browserInfo=n}function initStage(e,t){var t=t||25,o=window.innerWidth||document.body.clientWidth||document.documentElement.clientWidth,a=window.innerHeight||document.body.clientHeight||document.documentElement.clientHeight,i=(e=e||{width:o,height:a}).width/e.height,n=o,r=a;o>a?(n=a*i,r=a):(n=o,r=o/i);var s=document.createElement("canvas");s.width=n,s.height=r,$("#mapNavDiv").append(s);var l=new createjs.Stage(s);DATA.register("stage",{stage:l,width:n,height:r},{}),createjs.Touch.enable(l),createjs.Ticker.setFPS(t),createjs.Ticker.addEventListener("tick",function(){l.update()})}function checkStr(e){return/^[^@\/\'\\\"\‘\’#$%&\^\*]+$/.test(e)}function isEqual(e,t){var o=e.substr(0,e.length-2);return o=parseInt(o),Math.abs(o-t)<2}function main(){DATA.register("robotModel",null,{fnSet:UI.robotModelHandle}),DATA.register("softwareVersion",null,{fnSet:UI.softwareVersionHandle}),DATA.register("namespace",null,{fnSet:UI.namespaceHandle}),DATA.register("browserInfo",null,{fnSet:UI.browserInfoHandle}),DATA.register("ros",null,{}),DATA.register("topic",{},{}),DATA.register("mapMsg",null,{fnSet:UI.dispMap}),DATA.register("mapStage",null,{}),DATA.register("mapScaleStage",null,{}),DATA.register("waypointsMsg",null,{fnSet:UI.dispWaypoints}),DATA.register("waypointsStage",null,{}),DATA.register("trajectoriesMsg",null,{fnSet:UI.dispTrajectories}),DATA.register("robotPoseMsg",null,{fnSet:UI.dispRobot}),DATA.register("robotPoseStage",null,{}),DATA.register("globalPlanMsg",null,{fnSet:UI.dispGlobalPlan}),DATA.register("globalPlanStage",null,{}),DATA.register("localPlanMsg",null,{fnSet:UI.dispLocalPlan}),DATA.register("localPlanStage",null,{}),DATA.register("footprintMsg",null,{fnSet:UI.dispFootprint}),DATA.register("footprintStage",null,{}),DATA.register("tfMsg",{},{}),DATA.register("laserScanMsg",null,{fnSet:UI.dispLaserScan}),DATA.register("laserScanStage",null,{}),DATA.register("display",null,{fnSet:UI.display}),DATA.register("mapList",null,{fnSet:UI.updateMapList}),DATA.register("rosMode",null,{fnSet:UI.rosModeHandle}),DATA.register("mappingStatus",null,{}),DATA.register("brushStatus",null,{fnSet:UI.brushStatusHandle}),DATA.register("mapEditStageList",[],{}),DATA.register("mapEditObstacleList",[],{}),DATA.register("navCtrlStatus",null,{fnSet:UI.navCtrlStatusHandle}),DATA.register("selectedWaypoints",[],{}),DATA.register("dockInitPoseName",null,{}),DATA.register("powerStatus",null,{fnSet:UI.updatePowerStatus}),DATA.register("chargeStatus",null,{fnSet:UI.updateChargeStatus}),DATA.register("loading",null,{fnSet:UI.loading}),DATA.register("lastNetworkSetting",null,{fnSet:NET.lastNetworkSettingHandle}),DATA.register("powerAlarm",null,{}),DATA.register("plcStatus",null,{fnSet:EXT.plcStatusHandle}),DATA.register("diagnosticsMsg",null,{fnSet:UI.diagnosticsMsgHandle});var e=window.location.hostname,t="ws://"+e+":9090";getNamespace(e),getBrowserInfo(),getRobotModel(e),getVersion(e),initStage(),DATA.loading={key:"init",info:"载入中"},NAV.init(t),DEBUG.init(t),NAV.getRobotStatus(),NAV.subShellFeedbackFromNodejs(),setTimeout(function(){console.log("publish map select"),NAV.pubCmdString(NAV.CmdEnum.MapSelect,!0)},500),NAV.listenTf(),NAV.dispMapAndWps("/map",!0),NAV.dispTrajectories(),NAV.dispRobot(),NAV.dispGlobalPlan(),NAV.dispLocalPlan(),NAV.dispFootprint(),NAV.dispLaserScan(),NAV.subNavCtrlStatus(),NAV.subRobotStatus(),NAV.subLastNetworkSetting(),NAV.subWaypointUserSub()}$(function(){main();var e={disp_map:$("#disp-map").val(),disp_robotPose:$("#disp-robotPose").val(),disp_laserScan:$("#disp-laserScan").val(),disp_globalPlan:$("#disp-globalPlan").val(),disp_localPlan:$("#disp-localPlan").val(),disp_footprint:$("#disp-footprint").val()};for(var t in e){var o=t.split("_")[1],a="true"===e[t];DATA.display={property:o,value:a}}$("#disp-map").on("change",function(){DATA.display={property:"map",value:"true"===$("#disp-map").val()}}),$("#disp-robotPose").on("change",function(){DATA.display={property:"robotPose",value:"true"===$("#disp-robotPose").val()}}),$("#disp-footprint").on("change",function(){DATA.display={property:"footprint",value:"true"===$("#disp-footprint").val()}}),$("#disp-laserScan").on("change",function(){DATA.display={property:"laserScan",value:"true"===$("#disp-laserScan").val()}}),$("#disp-globalPlan").on("change",function(){DATA.display={property:"globalPlan",value:"true"===$("#disp-globalPlan").val()}}),$("#disp-localPlan").on("change",function(){DATA.display={property:"localPlan",value:"true"===$("#disp-localPlan").val()}}),$("#disp-waypoints").on("change",function(){DATA.display={property:"waypoints",value:"true"===$("#disp-waypoints").val()}}),$("#currentMapName").on("click",function(){var e=$(".map_nav");if(DATA.rosMode===NAV.RosMode.Navigation)if(isEqual(e.css("height"),35)){var t=35*(DATA.mapList.length+1);e.css("height",t)}else e.css("height","35px");else DATA.rosMode===NAV.RosMode.Gmapping&&(clickFeedback($("#currentMapName")),console.log("[INFO]Save map"),NAV.saveMap(),$("#currentMapName").text("保存中"),DATA.loading="保存中")}),$(".map_nav").mouseleave(function(){$(".map_nav").css("height","35px")}),$("#sidebar_site_span").on("click",function(){if(clickFeedback($("#sidebar_site_span")),DATA.waypointsMsg){var e=$(".sidebar_site"),t=e.css("height");isEqual(t,60)?(t=60*(DATA.waypointsMsg.waypoints.length+2),e.css("height",t),$("#sidebar_site_span").text("站点 ↑")):(e.css("height","60px"),$("#sidebar_site_span").text("站点 ↓"))}else ALERT.error({title:"站点错误",text:"站点不可用"})}),$("#sidebar_route_span").on("click",function(){if(clickFeedback($("#sidebar_route_span")),DATA.trajectoriesMsg){var e=$(".sidebar_route"),t=$("#sidebar_route_span");if(isEqual(e.css("height"),60)){var o=60*(DATA.trajectoriesMsg.trajectories.length+2);e.css("height",o),t.text("轨迹 ↑")}else e.css("height",60),t.text("轨迹 ↓")}else ALERT.error({title:"轨迹错误",text:"轨迹不可用"})}),$("#startMapping").on("click",function(){if(clickFeedback($("#startMapping")),DATA.rosMode===NAV.CmdEnum.Navigation){var e=$("#mapping_div_input").val();if(e===DATA.mapList[0])console.log("[INFO]Start mapping"),NAV.pubCmdString(NAV.CmdEnum.Gmapping,!0),DATA.loading="切换中";else{if(!checkStr(e))return void ALERT.warn({title:"参数错误",text:"无效的地图名称"});DATA.loading="新建中",NAV.manipulateScene(NAV.CmdEnum.MapInsert,e,!0)}}}),$("#zoomIn").on("click",function(){DATA.brushStatus="zoomIn"}),$("#zoomOut").on("click",function(){DATA.brushStatus="zoomOut"}),$("#move").on("click",function(){DATA.brushStatus="move"}),$("#pencilTool").on("click",function(){DATA.brushStatus="pencilTool"}),$("#point").on("click",function(){DATA.brushStatus="point"}),$("#line").on("click",function(){DATA.brushStatus="line"}),$("#circle").on("click",function(){DATA.brushStatus="circle"}),$("#rect").on("click",function(){DATA.brushStatus="rect"}),$("#rubber").on("click",function(){DATA.brushStatus="rubber"}),$("#undo").on("click",function(){DATA.brushStatus="undo"}),$("#redo").on("click",function(){DATA.brushStatus="redo"}),$("#confirm").on("click",function(){DATA.brushStatus="confirm"}),$("#pose_estimate").on("click",function(){UI.poseEstimate()}),$("#wpType").on("change click",function(){var e=$("#wpType").val();if("mark"==e){if(!DATA.robotPoseMsg)return console.error("[ERROR]Failed to get robot pose"),void ALERT.error({title:"站点添加错误",text:"无法获得当前机器人位姿"});$("#pos-x").val(DATA.robotPoseMsg.position.x.toFixed(5)),$("#pos-y").val(DATA.robotPoseMsg.position.y.toFixed(5)),$("#pos-z").val(DATA.robotPoseMsg.position.z.toFixed(5)),$("#ori-x").val(DATA.robotPoseMsg.orientation.x.toFixed(8)),$("#ori-y").val(DATA.robotPoseMsg.orientation.y.toFixed(8)),$("#ori-z").val(DATA.robotPoseMsg.orientation.z.toFixed(8)),$("#ori-w").val(DATA.robotPoseMsg.orientation.w.toFixed(8));var t=180*TF.quaternionToYaw(DATA.robotPoseMsg.orientation)/Math.PI;$("#ori-yaw").val(t)}var o='<option value="LOOP">多次</option>\n                        <option value="LOOP2">LOOP2</option>\n                        <option value="BACK">BACK</option>\n                        <option value="BACK2">BACK2</option>\n                        <option value="NONE">单次</option>',a={height:0,overflow:"hidden"},i={height:0,overflow:"hidden"};if("sound_play"===e)o='<option value="START">播放</option>\n                        <option value="STOP">停止</option>\n                        <option value="ONCE">播放一次</option>';else if("goto"===e){o="";for(r=0;r<DATA.waypointsMsg.waypoints.length;r++){var n=DATA.waypointsMsg.waypoints[r];o+='<option value="'+n.name+'">'+n.name+"</option>"}}else if("call"===e){o="";for(var r=0;r<DATA.trajectoriesMsg.trajectories.length;r++){var s=DATA.trajectoriesMsg.trajectories[r];o+='<option value="'+s.name+'">'+s.name+"</option>"}}else if("pubsuber"===e||"mark"===e||"goal"===e){var l;switch(e){case"pubsuber":l="发布-订阅器接收值:";break;case"mark":case"goal":l="mark类型:"}$("#pubsuber_expect_li p").text(l),a={height:75,overflow:"none"}}"goal"!==e&&"mark"!==e&&"initial_pose"!==e||(i={height:75,overflow:"none"}),"mark"===e?($(".position").css("display","block"),$(".orientation").css("display","block"),$(".orientation-yaw").css("display","block")):($(".position").css("display","none"),$(".orientation").css("display","none"),$(".orientation-yaw").css("display","none")),$("#wpMode").children().remove(),$("#wpMode").append(o),$("#pubsuber_expect_li").css("height",a.height),$("#pubsuber_expect_li").css("overflow",a.overflow),$("#frame_id_li").css("height",i.height),$("#frame_id_li").css("overflow",i.overflow)}),$("#ori-x, #ori-y, #ori-z, #ori-w").on("change click",function(){var e={x:parseFloat($("#ori-x").val()),y:parseFloat($("#ori-y").val()),z:parseFloat($("#ori-z").val()),w:parseFloat($("#ori-w").val())};if(TF.isQuaternionValid(e)){var t=180*TF.quaternionToYaw(e)/Math.PI;$("#ori-yaw").val(t.toFixed(5))}else $("#ori-yaw").val("四元数不合法")}),$("#ori-yaw").on("change click",function(){var e=parseFloat($("#ori-yaw").val()),t=TF.thetaToQuaternion(e/180*Math.PI);$("#ori-x").val(t.x.toFixed(8)),$("#ori-y").val(t.y.toFixed(8)),$("#ori-z").val(t.z.toFixed(8)),$("#ori-w").val(t.w.toFixed(8))}),$("#wp_add_submit").on("click",function(){var e=$("#wpType").val();if(""!==e){var t=$("#frame_id").val().trim();if(t||"initial_pose"!==e&&"goal"!==e&&"mark"!==e){var o=$("#close_enough").val();o=parseFloat(o);var a=$("#timeout").val();a=parseFloat(a);var i=$("#wpMode").val(),n=$("#pubsuber_expect").val().trim();if("pubsuber"===e)i=$("#pubsuber_expect").val();else if("mark"===e){if(""!==n&&-1===(r=["strip","pallet"]).indexOf(n))return void ALERT.error({title:"参数错误",text:"mark类型需为strip或pallet"})}else if("goal"===e&&""!==n){var r=["true","false"];if(-1===r.indexOf(n))return void ALERT.error({title:"参数错误",text:"mark类型需为true或false"})}var s=$("#wpName").val();if(checkStr(s))if(isNameUsed(s))ALERT.error({title:"参数错误",text:"该站点名称已存在"});else{var l=DATA.robotPoseMsg;if("mark"===e&&(l={position:{x:parseFloat($("#pos-x").val()),y:parseFloat($("#pos-y").val()),z:parseFloat($("#pos-z").val())},orientation:{x:parseFloat($("#ori-x").val()),y:parseFloat($("#ori-y").val()),z:parseFloat($("#ori-z").val()),w:parseFloat($("#ori-w").val())}}),!l)return console.error("[ERROR]Failed to get robot pose"),void ALERT.error({title:"站点添加错误",text:"无法获得当前机器人位姿"});var c={frame_id:t,close_enough:o,goal_timeout:a,failure_mode:i,type:e,name:s,mark:n,pose:l};NAV.addWaypoint(c),$("#pubsuber_expect").val(""),$("#frame_id").val("")}else ALERT.error({title:"参数错误",text:"站点名称不合法"})}else ALERT.error({title:"参数错误",text:"请输入frame_id"})}else ALERT.error({title:"参数错误",text:"请选择站点类型"})}),$("#dock").on("click",function(){var e=$("#dock").attr("checked");DATA.isDock=!1,"checked"===e&&(DATA.isDock=!0),console.log(DATA.isDock)}),$("#waypointTrajAdd").on("change",function(){var e=$("#waypointTrajAdd").val();""===e&&ALERT.error({title:"参数错误",text:"请至少选择一个站点"}),DATA.selectedWaypoints.push(e),UI.dispSelectedWaypoints(),$("#waypointTrajAdd").val("")}),$("#traj_add_submit").on("click",function(){var e=$("#trajName").val();checkStr(e)?isNameUsed(e)?ALERT.error({title:"参数错误",text:"该轨迹名称已存在"}):0!==DATA.selectedWaypoints.length?(DATA.isDock&&(e="dock_"+e),console.log(DATA.selectedWaypoints),NAV.addTrajectory(e,DATA.selectedWaypoints),$(".selectedWp").remove(),DATA.selectedWaypoints=[]):ALERT.error({title:"参数错误",text:"请选择站点"}):ALERT.error({title:"参数错误",text:"轨迹名称不合法"})}),$(".stop").on("click",function(){clickFeedback($(".stop")),NAV.navCtrl("",0)}),$(".direction_box_top").on("touchstart touchend click mouseleave",function(e){switch(e.type){case"touchstart":case"click":e.preventDefault(),$(".direction_box_top").css("background-image","url(../image/top_click.png)"),NAV.manualCtrl({linear:NAV.ManualCtrlVel.linear});break;case"touchend":case"mouseleave":$(".direction_box_top").css("background-image","url(../image/top.png)"),NAV.manualCtrl({})}}),$(".direction_box_bottom").on("touchstart touchend click mouseleave",function(e){switch(e.type){case"touchstart":case"click":e.preventDefault(),$(".direction_box_bottom").css("background-image","url(../image/bottom_click.png)"),NAV.manualCtrl({linear:-NAV.ManualCtrlVel.linear});break;case"touchend":case"mouseleave":$(".direction_box_bottom").css("background-image","url(../image/bottom.png)"),NAV.manualCtrl({})}}),$(".direction_box_left").on("touchstart touchend click mouseleave",function(e){switch(e.type){case"touchstart":case"click":e.preventDefault(),$(".direction_box_left").css("background-image","url(../image/left_click.png)"),NAV.manualCtrl({angular:NAV.ManualCtrlVel.angular});break;case"touchend":case"mouseleave":$(".direction_box_left").css("background-image","url(../image/left.png)"),NAV.manualCtrl({})}}),$(".direction_box_right").on("touchstart touchend click mouseleave",function(e){switch(e.type){case"touchstart":case"click":e.preventDefault(),$(".direction_box_right").css("background-image","url(../image/right_click.png)"),NAV.manualCtrl({angular:-NAV.ManualCtrlVel.angular});break;case"touchend":case"mouseleave":$(".direction_box_right").css("background-image","url(../image/right.png)"),NAV.manualCtrl({})}}),$(".direction_box_center").on("touchstart touchend click mouseleave",function(e){switch(e.type){case"touchstart":case"click":e.preventDefault(),$(".direction_box_center").css("background","#3b6dde"),NAV.manualCtrl({});break;case"touchend":case"mouseleave":$(".direction_box_center").css("background","#3b6dde")}})});