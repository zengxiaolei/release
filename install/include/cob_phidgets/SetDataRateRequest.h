// Generated by gencpp from file cob_phidgets/SetDataRateRequest.msg
// DO NOT EDIT!


#ifndef COB_PHIDGETS_MESSAGE_SETDATARATEREQUEST_H
#define COB_PHIDGETS_MESSAGE_SETDATARATEREQUEST_H


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
struct SetDataRateRequest_
{
  typedef SetDataRateRequest_<ContainerAllocator> Type;

  SetDataRateRequest_()
    : index(0)
    , data_rate(0)  {
    }
  SetDataRateRequest_(const ContainerAllocator& _alloc)
    : index(0)
    , data_rate(0)  {
  (void)_alloc;
    }



   typedef int8_t _index_type;
  _index_type index;

   typedef uint16_t _data_rate_type;
  _data_rate_type data_rate;




  typedef boost::shared_ptr< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetDataRateRequest_

typedef ::cob_phidgets::SetDataRateRequest_<std::allocator<void> > SetDataRateRequest;

typedef boost::shared_ptr< ::cob_phidgets::SetDataRateRequest > SetDataRateRequestPtr;
typedef boost::shared_ptr< ::cob_phidgets::SetDataRateRequest const> SetDataRateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_phidgets

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'cob_phidgets': ['/home/ouiyeah/catkin_ws/src/cob_driver/cob_phidgets/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2fe4d4dafc6b478c7e506a02543a3197";
  }

  static const char* value(const ::cob_phidgets::SetDataRateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2fe4d4dafc6b478cULL;
  static const uint64_t static_value2 = 0x7e506a02543a3197ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_phidgets/SetDataRateRequest";
  }

  static const char* value(const ::cob_phidgets::SetDataRateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 index\n\
uint16 data_rate\n\
\n\
";
  }

  static const char* value(const ::cob_phidgets::SetDataRateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.data_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDataRateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_phidgets::SetDataRateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_phidgets::SetDataRateRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int8_t>::stream(s, indent + "  ", v.index);
    s << indent << "data_rate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.data_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_PHIDGETS_MESSAGE_SETDATARATEREQUEST_H
