// Generated by gencpp from file scheduling_msgs/ClearPlannerPathRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_CLEARPLANNERPATHREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_CLEARPLANNERPATHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace scheduling_msgs
{
template <class ContainerAllocator>
struct ClearPlannerPathRequest_
{
  typedef ClearPlannerPathRequest_<ContainerAllocator> Type;

  ClearPlannerPathRequest_()
    : pathID(0)  {
    }
  ClearPlannerPathRequest_(const ContainerAllocator& _alloc)
    : pathID(0)  {
  (void)_alloc;
    }



   typedef int32_t _pathID_type;
  _pathID_type pathID;




  typedef boost::shared_ptr< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ClearPlannerPathRequest_

typedef ::scheduling_msgs::ClearPlannerPathRequest_<std::allocator<void> > ClearPlannerPathRequest;

typedef boost::shared_ptr< ::scheduling_msgs::ClearPlannerPathRequest > ClearPlannerPathRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::ClearPlannerPathRequest const> ClearPlannerPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c72426aa1796b38503302d839d5e11c9";
  }

  static const char* value(const ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc72426aa1796b385ULL;
  static const uint64_t static_value2 = 0x03302d839d5e11c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/ClearPlannerPathRequest";
  }

  static const char* value(const ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 pathID\n\
";
  }

  static const char* value(const ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pathID);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClearPlannerPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::ClearPlannerPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "pathID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pathID);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_CLEARPLANNERPATHREQUEST_H
