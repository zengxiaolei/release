// Generated by gencpp from file cob_light/SetLightModeRequest.msg
// DO NOT EDIT!


#ifndef COB_LIGHT_MESSAGE_SETLIGHTMODEREQUEST_H
#define COB_LIGHT_MESSAGE_SETLIGHTMODEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cob_light/LightMode.h>

namespace cob_light
{
template <class ContainerAllocator>
struct SetLightModeRequest_
{
  typedef SetLightModeRequest_<ContainerAllocator> Type;

  SetLightModeRequest_()
    : mode()  {
    }
  SetLightModeRequest_(const ContainerAllocator& _alloc)
    : mode(_alloc)  {
  (void)_alloc;
    }



   typedef  ::cob_light::LightMode_<ContainerAllocator>  _mode_type;
  _mode_type mode;




  typedef boost::shared_ptr< ::cob_light::SetLightModeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_light::SetLightModeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetLightModeRequest_

typedef ::cob_light::SetLightModeRequest_<std::allocator<void> > SetLightModeRequest;

typedef boost::shared_ptr< ::cob_light::SetLightModeRequest > SetLightModeRequestPtr;
typedef boost::shared_ptr< ::cob_light::SetLightModeRequest const> SetLightModeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_light::SetLightModeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_light::SetLightModeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_light

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'cob_light': ['/home/ouiyeah/catkin_ws/src/cob_driver/cob_light/msg', '/home/ouiyeah/catkin_ws/devel/share/cob_light/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_light::SetLightModeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_light::SetLightModeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_light::SetLightModeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf64533ba011e7f531cecce5a35c9b83";
  }

  static const char* value(const ::cob_light::SetLightModeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf64533ba011e7f5ULL;
  static const uint64_t static_value2 = 0x31cecce5a35c9b83ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_light/SetLightModeRequest";
  }

  static const char* value(const ::cob_light::SetLightModeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_light/LightMode mode\n\
\n\
================================================================================\n\
MSG: cob_light/LightMode\n\
uint8 mode                         # mode to switch on\n\
\n\
float32                frequency   # in Hz\n\
float32                timeout     # in s, requested mode will be executed for max timeout s.\n\
                                   # default is 0 and means no timeout.\n\
int32                  pulses      # specifies the amount of pulses which will be executed.\n\
                                   # eg: mode = flash, pulses = 2. Means the light will flash two times\n\
int8                   priority    # priority [-20,20] default = 0. Modes with same or higher priorities will\n\
                                   # be executed.\n\
std_msgs/ColorRGBA[]   colors      # array of colors.\n\
                                   # size > 1: each color represent one led (size should match the amount of leds)\n\
                                   # size = 1: one color for all leds or color for specific mode\n\
                                   # size = 0: undefined\n\
cob_light/Sequence[]   sequences   # an array of sequence definitions, used only if mode is set to SEQ\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
================================================================================\n\
MSG: cob_light/Sequence\n\
std_msgs/ColorRGBA   color       #sequence color\n\
float32              hold_time   #time how long the color should be hold [s]\n\
float32              cross_time  #time how long it take to fade to this color [s]\n\
";
  }

  static const char* value(const ::cob_light::SetLightModeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLightModeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_light::SetLightModeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_light::SetLightModeRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    s << std::endl;
    Printer< ::cob_light::LightMode_<ContainerAllocator> >::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_LIGHT_MESSAGE_SETLIGHTMODEREQUEST_H
