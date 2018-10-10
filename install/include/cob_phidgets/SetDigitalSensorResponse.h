// Generated by gencpp from file cob_phidgets/SetDigitalSensorResponse.msg
// DO NOT EDIT!


#ifndef COB_PHIDGETS_MESSAGE_SETDIGITALSENSORRESPONSE_H
#define COB_PHIDGETS_MESSAGE_SETDIGITALSENSORRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_phidgets
{
template <class ContainerAllocator>
struct SetDigitalSensorResponse_
{
  typedef SetDigitalSensorResponse_<ContainerAllocator> Type;

  SetDigitalSensorResponse_()
    : uri()
    , state(0)  {
    }
  SetDigitalSensorResponse_(const ContainerAllocator& _alloc)
    : uri(_alloc)
    , state(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uri_type;
  _uri_type uri;

   typedef int8_t _state_type;
  _state_type state;




  typedef boost::shared_ptr< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetDigitalSensorResponse_

typedef ::cob_phidgets::SetDigitalSensorResponse_<std::allocator<void> > SetDigitalSensorResponse;

typedef boost::shared_ptr< ::cob_phidgets::SetDigitalSensorResponse > SetDigitalSensorResponsePtr;
typedef boost::shared_ptr< ::cob_phidgets::SetDigitalSensorResponse const> SetDigitalSensorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_phidgets

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'cob_phidgets': ['/home/ouiyeah/catkin_ws/src/cob_driver/cob_phidgets/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "96cc93c2442fee91eb711a986476a959";
  }

  static const char* value(const ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x96cc93c2442fee91ULL;
  static const uint64_t static_value2 = 0xeb711a986476a959ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_phidgets/SetDigitalSensorResponse";
  }

  static const char* value(const ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string uri\n\
int8 state\n\
";
  }

  static const char* value(const ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uri);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDigitalSensorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_phidgets::SetDigitalSensorResponse_<ContainerAllocator>& v)
  {
    s << indent << "uri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uri);
    s << indent << "state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PHIDGETS_MESSAGE_SETDIGITALSENSORRESPONSE_H
