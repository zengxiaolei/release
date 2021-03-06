// Generated by gencpp from file scheduling_msgs/ReportNavigationControlStatusRequest.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_REPORTNAVIGATIONCONTROLSTATUSREQUEST_H
#define SCHEDULING_MSGS_MESSAGE_REPORTNAVIGATIONCONTROLSTATUSREQUEST_H


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
struct ReportNavigationControlStatusRequest_
{
  typedef ReportNavigationControlStatusRequest_<ContainerAllocator> Type;

  ReportNavigationControlStatusRequest_()
    : status(0)
    , waypoint_name()  {
    }
  ReportNavigationControlStatusRequest_(const ContainerAllocator& _alloc)
    : status(0)
    , waypoint_name(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _waypoint_name_type;
  _waypoint_name_type waypoint_name;


    enum { ERROR = -1 };
     enum { IDLING = 0 };
     enum { RUNNING = 1 };
     enum { PAUSED = 2 };
     enum { COMPLETED = 3 };
     enum { CANCELLED = 4 };
     enum { SUB_CANCELLED = 5 };
 

  typedef boost::shared_ptr< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReportNavigationControlStatusRequest_

typedef ::scheduling_msgs::ReportNavigationControlStatusRequest_<std::allocator<void> > ReportNavigationControlStatusRequest;

typedef boost::shared_ptr< ::scheduling_msgs::ReportNavigationControlStatusRequest > ReportNavigationControlStatusRequestPtr;
typedef boost::shared_ptr< ::scheduling_msgs::ReportNavigationControlStatusRequest const> ReportNavigationControlStatusRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/hitrobot/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6239cc06c91ccec851b482a8d9ddf48f";
  }

  static const char* value(const ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6239cc06c91ccec8ULL;
  static const uint64_t static_value2 = 0x51b482a8d9ddf48fULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/ReportNavigationControlStatusRequest";
  }

  static const char* value(const ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 status\n\
\n\
int8 ERROR     = -1\n\
int8 IDLING    = 0\n\
int8 RUNNING   = 1\n\
int8 PAUSED    = 2\n\
int8 COMPLETED = 3\n\
int8 CANCELLED = 4\n\
int8 SUB_CANCELLED = 5\n\
\n\
\n\
string waypoint_name\n\
";
  }

  static const char* value(const ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.waypoint_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReportNavigationControlStatusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::ReportNavigationControlStatusRequest_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
    s << indent << "waypoint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.waypoint_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_REPORTNAVIGATIONCONTROLSTATUSREQUEST_H
