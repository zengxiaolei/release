// Generated by gencpp from file scheduling_msgs/SetPlannerPathRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_SETPLANNERPATHREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_SETPLANNERPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose2D.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct SetPlannerPathRequest_
{
  typedef SetPlannerPathRequest_<ContainerAllocator> Type;

  SetPlannerPathRequest_()
    : header()
    , priority(0)
    , pathID(0)
    , poses()  {
    }
  SetPlannerPathRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , priority(0)
    , pathID(0)
    , poses(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _priority_type;
  _priority_type priority;

   typedef int32_t _pathID_type;
  _pathID_type pathID;

   typedef std::vector< ::geometry_msgs::Pose2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose2D_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;




  typedef boost::shared_ptr< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPlannerPathRequest_

typedef ::scheduling_msgs::SetPlannerPathRequest_<std::allocator<void> > SetPlannerPathRequest;

typedef boost::shared_ptr< ::scheduling_msgs::SetPlannerPathRequest > SetPlannerPathRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::SetPlannerPathRequest const> SetPlannerPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "acd997fdd051841fe7c6d32932ea5689";
  }

  static const char* value(const ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xacd997fdd051841fULL;
  static const uint64_t static_value2 = 0xe7c6d32932ea5689ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/SetPlannerPathRequest";
  }

  static const char* value(const ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 priority\n\
int32 pathID\n\
geometry_msgs/Pose2D[] poses\n\
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
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.priority);
      stream.next(m.pathID);
      stream.next(m.poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPlannerPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::SetPlannerPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "priority: ";
    Printer<int32_t>::stream(s, indent + "  ", v.priority);
    s << indent << "pathID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pathID);
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_SETPLANNERPATHREQUEST_H
