// Generated by gencpp from file cob_light/SetLightModeFeedback.msg
// DO NOT EDIT!


#ifndef COB_LIGHT_MESSAGE_SETLIGHTMODEFEEDBACK_H
#define COB_LIGHT_MESSAGE_SETLIGHTMODEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_light
{
template <class ContainerAllocator>
struct SetLightModeFeedback_
{
  typedef SetLightModeFeedback_<ContainerAllocator> Type;

  SetLightModeFeedback_()
    : active_mode(0)
    , active_priority(0)  {
    }
  SetLightModeFeedback_(const ContainerAllocator& _alloc)
    : active_mode(0)
    , active_priority(0)  {
  (void)_alloc;
    }



   typedef uint8_t _active_mode_type;
  _active_mode_type active_mode;

   typedef uint8_t _active_priority_type;
  _active_priority_type active_priority;




  typedef boost::shared_ptr< ::cob_light::SetLightModeFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_light::SetLightModeFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct SetLightModeFeedback_

typedef ::cob_light::SetLightModeFeedback_<std::allocator<void> > SetLightModeFeedback;

typedef boost::shared_ptr< ::cob_light::SetLightModeFeedback > SetLightModeFeedbackPtr;
typedef boost::shared_ptr< ::cob_light::SetLightModeFeedback const> SetLightModeFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_light::SetLightModeFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_light

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'cob_light': ['/home/ouiyeah/catkin_ws/src/cob_driver/cob_light/msg', '/home/ouiyeah/catkin_ws/devel/share/cob_light/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_light::SetLightModeFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_light::SetLightModeFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_light::SetLightModeFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18daff0db423efd323f68cd039226daa";
  }

  static const char* value(const ::cob_light::SetLightModeFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18daff0db423efd3ULL;
  static const uint64_t static_value2 = 0x23f68cd039226daaULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_light/SetLightModeFeedback";
  }

  static const char* value(const ::cob_light::SetLightModeFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The feedback\n\
uint8 active_mode\n\
uint8 active_priority\n\
\n\
";
  }

  static const char* value(const ::cob_light::SetLightModeFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.active_mode);
      stream.next(m.active_priority);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLightModeFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_light::SetLightModeFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_light::SetLightModeFeedback_<ContainerAllocator>& v)
  {
    s << indent << "active_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_mode);
    s << indent << "active_priority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_priority);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_LIGHT_MESSAGE_SETLIGHTMODEFEEDBACK_H