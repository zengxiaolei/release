; Auto-generated. Do not edit!


(cl:in-package cob_light-msg)


;//! \htmlinclude SetLightModeFeedback.msg.html

(cl:defclass <SetLightModeFeedback> (roslisp-msg-protocol:ros-message)
  ((active_mode
    :reader active_mode
    :initarg :active_mode
    :type cl:fixnum
    :initform 0)
   (active_priority
    :reader active_priority
    :initarg :active_priority
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SetLightModeFeedback (<SetLightModeFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetLightModeFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetLightModeFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cob_light-msg:<SetLightModeFeedback> is deprecated: use cob_light-msg:SetLightModeFeedback instead.")))

(cl:ensure-generic-function 'active_mode-val :lambda-list '(m))
(cl:defmethod active_mode-val ((m <SetLightModeFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_light-msg:active_mode-val is deprecated.  Use cob_light-msg:active_mode instead.")
  (active_mode m))

(cl:ensure-generic-function 'active_priority-val :lambda-list '(m))
(cl:defmethod active_priority-val ((m <SetLightModeFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cob_light-msg:active_priority-val is deprecated.  Use cob_light-msg:active_priority instead.")
  (active_priority m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetLightModeFeedback>) ostream)
  "Serializes a message object of type '<SetLightModeFeedback>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_mode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_priority)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetLightModeFeedback>) istream)
  "Deserializes a message object of type '<SetLightModeFeedback>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_mode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_priority)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetLightModeFeedback>)))
  "Returns string type for a message object of type '<SetLightModeFeedback>"
  "cob_light/SetLightModeFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetLightModeFeedback)))
  "Returns string type for a message object of type 'SetLightModeFeedback"
  "cob_light/SetLightModeFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetLightModeFeedback>)))
  "Returns md5sum for a message object of type '<SetLightModeFeedback>"
  "18daff0db423efd323f68cd039226daa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetLightModeFeedback)))
  "Returns md5sum for a message object of type 'SetLightModeFeedback"
  "18daff0db423efd323f68cd039226daa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetLightModeFeedback>)))
  "Returns full string definition for message of type '<SetLightModeFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# The feedback~%uint8 active_mode~%uint8 active_priority~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetLightModeFeedback)))
  "Returns full string definition for message of type 'SetLightModeFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# The feedback~%uint8 active_mode~%uint8 active_priority~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetLightModeFeedback>))
  (cl:+ 0
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetLightModeFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'SetLightModeFeedback
    (cl:cons ':active_mode (active_mode msg))
    (cl:cons ':active_priority (active_priority msg))
))
