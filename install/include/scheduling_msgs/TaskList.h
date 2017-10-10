// Generated by gencpp from file scheduling_msgs/TaskList.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_TASKLIST_H
#define SCHEDULING_MSGS_MESSAGE_TASKLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <scheduling_msgs/Task.h>

namespace scheduling_msgs
{
template <class ContainerAllocator>
struct TaskList_
{
  typedef TaskList_<ContainerAllocator> Type;

  TaskList_()
    : header()
    , tasks()  {
    }
  TaskList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tasks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::scheduling_msgs::Task_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::scheduling_msgs::Task_<ContainerAllocator> >::other >  _tasks_type;
  _tasks_type tasks;




  typedef boost::shared_ptr< ::scheduling_msgs::TaskList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::TaskList_<ContainerAllocator> const> ConstPtr;

}; // struct TaskList_

typedef ::scheduling_msgs::TaskList_<std::allocator<void> > TaskList;

typedef boost::shared_ptr< ::scheduling_msgs::TaskList > TaskListPtr;
typedef boost::shared_ptr< ::scheduling_msgs::TaskList const> TaskListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::TaskList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::TaskList_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::scheduling_msgs::TaskList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::TaskList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::TaskList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::TaskList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::TaskList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::TaskList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::TaskList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85d5dd90f9abc2b2d77b21caa7befb40";
  }

  static const char* value(const ::scheduling_msgs::TaskList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85d5dd90f9abc2b2ULL;
  static const uint64_t static_value2 = 0xd77b21caa7befb40ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::TaskList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/TaskList";
  }

  static const char* value(const ::scheduling_msgs::TaskList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::TaskList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Task[] tasks\n\
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
MSG: scheduling_msgs/Task\n\
Header header\n\
int32 taskID\n\
int32 agvID\n\
string agvName\n\
string stationID\n\
int32 workType #0: Idle, 1: navigation without load, 2: navigation with load, 3: loading, 4: unloading\n\
int32 workStatus #0: completed, 1: executing, 2: waiting\n\
";
  }

  static const char* value(const ::scheduling_msgs::TaskList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::TaskList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tasks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::TaskList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::TaskList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tasks[]" << std::endl;
    for (size_t i = 0; i < v.tasks.size(); ++i)
    {
      s << indent << "  tasks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::scheduling_msgs::Task_<ContainerAllocator> >::stream(s, indent + "    ", v.tasks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_TASKLIST_H
