// Generated by gencpp from file scheduling_msgs/AddOrModifyForkliftTaskResponse.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASKRESPONSE_H
#define SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASKRESPONSE_H


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
struct AddOrModifyForkliftTaskResponse_
{
  typedef AddOrModifyForkliftTaskResponse_<ContainerAllocator> Type;

  AddOrModifyForkliftTaskResponse_()
    : feedback(0)  {
    }
  AddOrModifyForkliftTaskResponse_(const ContainerAllocator& _alloc)
    : feedback(0)  {
  (void)_alloc;
    }



   typedef int32_t _feedback_type;
  _feedback_type feedback;




  typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AddOrModifyForkliftTaskResponse_

typedef ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<std::allocator<void> > AddOrModifyForkliftTaskResponse;

typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskResponse > AddOrModifyForkliftTaskResponsePtr;
typedef boost::shared_ptr< ::scheduling_msgs::AddOrModifyForkliftTaskResponse const> AddOrModifyForkliftTaskResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49ceb5b32ea3af22073ede4a0328249e";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49ceb5b32ea3af22ULL;
  static const uint64_t static_value2 = 0x073ede4a0328249eULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/AddOrModifyForkliftTaskResponse";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 feedback\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddOrModifyForkliftTaskResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::AddOrModifyForkliftTaskResponse_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    Printer<int32_t>::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_ADDORMODIFYFORKLIFTTASKRESPONSE_H
