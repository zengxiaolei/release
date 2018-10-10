// Generated by gencpp from file cob_base_drive_chain/ElmoRecorderConfigRequest.msg
// DO NOT EDIT!


#ifndef COB_BASE_DRIVE_CHAIN_MESSAGE_ELMORECORDERCONFIGREQUEST_H
#define COB_BASE_DRIVE_CHAIN_MESSAGE_ELMORECORDERCONFIGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cob_base_drive_chain
{
template <class ContainerAllocator>
struct ElmoRecorderConfigRequest_
{
  typedef ElmoRecorderConfigRequest_<ContainerAllocator> Type;

  ElmoRecorderConfigRequest_()
    : recordinggap(0)  {
    }
  ElmoRecorderConfigRequest_(const ContainerAllocator& _alloc)
    : recordinggap(0)  {
  (void)_alloc;
    }



   typedef int64_t _recordinggap_type;
  _recordinggap_type recordinggap;




  typedef boost::shared_ptr< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ElmoRecorderConfigRequest_

typedef ::cob_base_drive_chain::ElmoRecorderConfigRequest_<std::allocator<void> > ElmoRecorderConfigRequest;

typedef boost::shared_ptr< ::cob_base_drive_chain::ElmoRecorderConfigRequest > ElmoRecorderConfigRequestPtr;
typedef boost::shared_ptr< ::cob_base_drive_chain::ElmoRecorderConfigRequest const> ElmoRecorderConfigRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cob_base_drive_chain

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1ce3cece03ba225e8f3c4cf2e9ad968";
  }

  static const char* value(const ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1ce3cece03ba225ULL;
  static const uint64_t static_value2 = 0xe8f3c4cf2e9ad968ULL;
};

template<class ContainerAllocator>
struct DataType< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cob_base_drive_chain/ElmoRecorderConfigRequest";
  }

  static const char* value(const ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
int64 recordinggap\n\
\n\
";
  }

  static const char* value(const ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.recordinggap);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ElmoRecorderConfigRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cob_base_drive_chain::ElmoRecorderConfigRequest_<ContainerAllocator>& v)
  {
    s << indent << "recordinggap: ";
    Printer<int64_t>::stream(s, indent + "  ", v.recordinggap);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COB_BASE_DRIVE_CHAIN_MESSAGE_ELMORECORDERCONFIGREQUEST_H
