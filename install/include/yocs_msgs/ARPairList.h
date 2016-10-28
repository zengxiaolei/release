// Generated by gencpp from file yocs_msgs/ARPairList.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_ARPAIRLIST_H
#define YOCS_MSGS_MESSAGE_ARPAIRLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <yocs_msgs/ARPair.h>

namespace yocs_msgs
{
template <class ContainerAllocator>
struct ARPairList_
{
  typedef ARPairList_<ContainerAllocator> Type;

  ARPairList_()
    : pairs()  {
    }
  ARPairList_(const ContainerAllocator& _alloc)
    : pairs(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::yocs_msgs::ARPair_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::yocs_msgs::ARPair_<ContainerAllocator> >::other >  _pairs_type;
  _pairs_type pairs;




  typedef boost::shared_ptr< ::yocs_msgs::ARPairList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yocs_msgs::ARPairList_<ContainerAllocator> const> ConstPtr;

}; // struct ARPairList_

typedef ::yocs_msgs::ARPairList_<std::allocator<void> > ARPairList;

typedef boost::shared_ptr< ::yocs_msgs::ARPairList > ARPairListPtr;
typedef boost::shared_ptr< ::yocs_msgs::ARPairList const> ARPairListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yocs_msgs::ARPairList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yocs_msgs::ARPairList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yocs_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'yocs_msgs': ['/home/ouiyeah/catkin_ws/src/yocs_msgs-devel/msg', '/home/ouiyeah/catkin_ws/devel/share/yocs_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::ARPairList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::ARPairList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::ARPairList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::ARPairList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::ARPairList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::ARPairList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yocs_msgs::ARPairList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0d0cfdee6418b6b3edd41c0abc93d76f";
  }

  static const char* value(const ::yocs_msgs::ARPairList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0d0cfdee6418b6b3ULL;
  static const uint64_t static_value2 = 0xedd41c0abc93d76fULL;
};

template<class ContainerAllocator>
struct DataType< ::yocs_msgs::ARPairList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yocs_msgs/ARPairList";
  }

  static const char* value(const ::yocs_msgs::ARPairList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yocs_msgs::ARPairList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ARPair[] pairs\n\
\n\
================================================================================\n\
MSG: yocs_msgs/ARPair\n\
int16  left_id\n\
int16  right_id\n\
float32 baseline\n\
float32 target_offset\n\
string  target_frame\n\
";
  }

  static const char* value(const ::yocs_msgs::ARPairList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yocs_msgs::ARPairList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pairs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ARPairList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yocs_msgs::ARPairList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yocs_msgs::ARPairList_<ContainerAllocator>& v)
  {
    s << indent << "pairs[]" << std::endl;
    for (size_t i = 0; i < v.pairs.size(); ++i)
    {
      s << indent << "  pairs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::yocs_msgs::ARPair_<ContainerAllocator> >::stream(s, indent + "    ", v.pairs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_ARPAIRLIST_H
