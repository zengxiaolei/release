// Generated by gencpp from file scheduling_msgs/TaskQueryPathRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_TASKQUERYPATHREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_TASKQUERYPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct TaskQueryPathRequest_
{
  typedef TaskQueryPathRequest_<ContainerAllocator> Type;

  TaskQueryPathRequest_()
    : header()
    , agvID(0)
    , agvName()
    , agvPos()
    , goalPos()  {
    }
  TaskQueryPathRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , agvID(0)
    , agvName(_alloc)
    , agvPos(_alloc)
    , goalPos(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _agvID_type;
  _agvID_type agvID;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _agvName_type;
  _agvName_type agvName;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _agvPos_type;
  _agvPos_type agvPos;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _goalPos_type;
  _goalPos_type goalPos;




  typedef boost::shared_ptr< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TaskQueryPathRequest_

typedef ::scheduling_msgs::TaskQueryPathRequest_<std::allocator<void> > TaskQueryPathRequest;

typedef boost::shared_ptr< ::scheduling_msgs::TaskQueryPathRequest > TaskQueryPathRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::TaskQueryPathRequest const> TaskQueryPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be441230fa3ef5d48dbb932d19f7a2e3";
  }

  static const char* value(const ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe441230fa3ef5d4ULL;
  static const uint64_t static_value2 = 0x8dbb932d19f7a2e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/TaskQueryPathRequest";
  }

  static const char* value(const ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 agvID\n\
string agvName\n\
geometry_msgs/PoseStamped agvPos\n\
geometry_msgs/PoseStamped goalPos\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.agvID);
      stream.next(m.agvName);
      stream.next(m.agvPos);
      stream.next(m.goalPos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskQueryPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::TaskQueryPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "agvID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.agvID);
    s << indent << "agvName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.agvName);
    s << indent << "agvPos: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.agvPos);
    s << indent << "goalPos: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.goalPos);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_TASKQUERYPATHREQUEST_H
