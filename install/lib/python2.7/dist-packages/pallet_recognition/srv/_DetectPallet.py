# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pallet_recognition/DetectPalletRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class DetectPalletRequest(genpy.Message):
  _md5sum = "266e5da8acaf3bd8f5513beef61c55a2"
  _type = "pallet_recognition/DetectPalletRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/PoseWithCovarianceStamped raw_pose
int32 retry_times

================================================================================
MSG: geometry_msgs/PoseWithCovarianceStamped
# This expresses an estimated pose with a reference coordinate frame and timestamp

Header header
PoseWithCovariance pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['raw_pose','retry_times']
  _slot_types = ['geometry_msgs/PoseWithCovarianceStamped','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       raw_pose,retry_times

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DetectPalletRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.raw_pose is None:
        self.raw_pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      if self.retry_times is None:
        self.retry_times = 0
    else:
      self.raw_pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      self.retry_times = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.raw_pose.header.seq, _x.raw_pose.header.stamp.secs, _x.raw_pose.header.stamp.nsecs))
      _x = self.raw_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.raw_pose.pose.pose.position.x, _x.raw_pose.pose.pose.position.y, _x.raw_pose.pose.pose.position.z, _x.raw_pose.pose.pose.orientation.x, _x.raw_pose.pose.pose.orientation.y, _x.raw_pose.pose.pose.orientation.z, _x.raw_pose.pose.pose.orientation.w))
      buff.write(_struct_36d.pack(*self.raw_pose.pose.covariance))
      buff.write(_struct_i.pack(self.retry_times))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.raw_pose is None:
        self.raw_pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.raw_pose.header.seq, _x.raw_pose.header.stamp.secs, _x.raw_pose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.raw_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.raw_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.raw_pose.pose.pose.position.x, _x.raw_pose.pose.pose.position.y, _x.raw_pose.pose.pose.position.z, _x.raw_pose.pose.pose.orientation.x, _x.raw_pose.pose.pose.orientation.y, _x.raw_pose.pose.pose.orientation.z, _x.raw_pose.pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      start = end
      end += 288
      self.raw_pose.pose.covariance = _struct_36d.unpack(str[start:end])
      start = end
      end += 4
      (self.retry_times,) = _struct_i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.raw_pose.header.seq, _x.raw_pose.header.stamp.secs, _x.raw_pose.header.stamp.nsecs))
      _x = self.raw_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.raw_pose.pose.pose.position.x, _x.raw_pose.pose.pose.position.y, _x.raw_pose.pose.pose.position.z, _x.raw_pose.pose.pose.orientation.x, _x.raw_pose.pose.pose.orientation.y, _x.raw_pose.pose.pose.orientation.z, _x.raw_pose.pose.pose.orientation.w))
      buff.write(self.raw_pose.pose.covariance.tostring())
      buff.write(_struct_i.pack(self.retry_times))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.raw_pose is None:
        self.raw_pose = geometry_msgs.msg.PoseWithCovarianceStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.raw_pose.header.seq, _x.raw_pose.header.stamp.secs, _x.raw_pose.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.raw_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.raw_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.raw_pose.pose.pose.position.x, _x.raw_pose.pose.pose.position.y, _x.raw_pose.pose.pose.position.z, _x.raw_pose.pose.pose.orientation.x, _x.raw_pose.pose.pose.orientation.y, _x.raw_pose.pose.pose.orientation.z, _x.raw_pose.pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      start = end
      end += 288
      self.raw_pose.pose.covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=36)
      start = end
      end += 4
      (self.retry_times,) = _struct_i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_i = struct.Struct("<i")
_struct_3I = struct.Struct("<3I")
_struct_7d = struct.Struct("<7d")
_struct_36d = struct.Struct("<36d")
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pallet_recognition/DetectPalletResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class DetectPalletResponse(genpy.Message):
  _md5sum = "32441af2b9a33f4eeb9a152357f9425b"
  _type = "pallet_recognition/DetectPalletResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool success
geometry_msgs/PoseStamped fine_pose


================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of postion and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['success','fine_pose']
  _slot_types = ['bool','geometry_msgs/PoseStamped']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success,fine_pose

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DetectPalletResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
      if self.fine_pose is None:
        self.fine_pose = geometry_msgs.msg.PoseStamped()
    else:
      self.success = False
      self.fine_pose = geometry_msgs.msg.PoseStamped()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_B3I.pack(_x.success, _x.fine_pose.header.seq, _x.fine_pose.header.stamp.secs, _x.fine_pose.header.stamp.nsecs))
      _x = self.fine_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.fine_pose.pose.position.x, _x.fine_pose.pose.position.y, _x.fine_pose.pose.position.z, _x.fine_pose.pose.orientation.x, _x.fine_pose.pose.orientation.y, _x.fine_pose.pose.orientation.z, _x.fine_pose.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.fine_pose is None:
        self.fine_pose = geometry_msgs.msg.PoseStamped()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.success, _x.fine_pose.header.seq, _x.fine_pose.header.stamp.secs, _x.fine_pose.header.stamp.nsecs,) = _struct_B3I.unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.fine_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.fine_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.fine_pose.pose.position.x, _x.fine_pose.pose.position.y, _x.fine_pose.pose.position.z, _x.fine_pose.pose.orientation.x, _x.fine_pose.pose.orientation.y, _x.fine_pose.pose.orientation.z, _x.fine_pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_B3I.pack(_x.success, _x.fine_pose.header.seq, _x.fine_pose.header.stamp.secs, _x.fine_pose.header.stamp.nsecs))
      _x = self.fine_pose.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7d.pack(_x.fine_pose.pose.position.x, _x.fine_pose.pose.position.y, _x.fine_pose.pose.position.z, _x.fine_pose.pose.orientation.x, _x.fine_pose.pose.orientation.y, _x.fine_pose.pose.orientation.z, _x.fine_pose.pose.orientation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.fine_pose is None:
        self.fine_pose = geometry_msgs.msg.PoseStamped()
      end = 0
      _x = self
      start = end
      end += 13
      (_x.success, _x.fine_pose.header.seq, _x.fine_pose.header.stamp.secs, _x.fine_pose.header.stamp.nsecs,) = _struct_B3I.unpack(str[start:end])
      self.success = bool(self.success)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.fine_pose.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.fine_pose.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.fine_pose.pose.position.x, _x.fine_pose.pose.position.y, _x.fine_pose.pose.position.z, _x.fine_pose.pose.orientation.x, _x.fine_pose.pose.orientation.y, _x.fine_pose.pose.orientation.z, _x.fine_pose.pose.orientation.w,) = _struct_7d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7d = struct.Struct("<7d")
_struct_B3I = struct.Struct("<B3I")
class DetectPallet(object):
  _type          = 'pallet_recognition/DetectPallet'
  _md5sum = 'be52264672531f790ba66789a9749d0c'
  _request_class  = DetectPalletRequest
  _response_class = DetectPalletResponse