// Generated by gencpp from file scheduling_msgs/ShelvesStatus.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MSGS_MESSAGE_SHELVESSTATUS_H
#define SCHEDULING_MSGS_MESSAGE_SHELVESSTATUS_H


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
struct ShelvesStatus_
{
  typedef ShelvesStatus_<ContainerAllocator> Type;

  ShelvesStatus_()
    : agv_shelves()
    , station_shelves()  {
    }
  ShelvesStatus_(const ContainerAllocator& _alloc)
    : agv_shelves(_alloc)
    , station_shelves(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _agv_shelves_type;
  _agv_shelves_type agv_shelves;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _station_shelves_type;
  _station_shelves_type station_shelves;




  typedef boost::shared_ptr< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ShelvesStatus_

typedef ::scheduling_msgs::ShelvesStatus_<std::allocator<void> > ShelvesStatus;

typedef boost::shared_ptr< ::scheduling_msgs::ShelvesStatus > ShelvesStatusPtr;
typedef boost::shared_ptr< ::scheduling_msgs::ShelvesStatus const> ShelvesStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'scheduling_msgs': ['/home/ouiyeah/catkin_ws/src/scheduling_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "545d9e51b088123e4a1f5ca7c806306b";
  }

  static const char* value(const ::scheduling_msgs::ShelvesStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x545d9e51b088123eULL;
  static const uint64_t static_value2 = 0x4a1f5ca7c806306bULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling_msgs/ShelvesStatus";
  }

  static const char* value(const ::scheduling_msgs::ShelvesStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] agv_shelves\n\
int32[] station_shelves\n\
";
  }

  static const char* value(const ::scheduling_msgs::ShelvesStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.agv_shelves);
      stream.next(m.station_shelves);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ShelvesStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling_msgs::ShelvesStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling_msgs::ShelvesStatus_<ContainerAllocator>& v)
  {
    s << indent << "agv_shelves[]" << std::endl;
    for (size_t i = 0; i < v.agv_shelves.size(); ++i)
    {
      s << indent << "  agv_shelves[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.agv_shelves[i]);
    }
    s << indent << "station_shelves[]" << std::endl;
    for (size_t i = 0; i < v.station_shelves.size(); ++i)
    {
      s << indent << "  station_shelves[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.station_shelves[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MSGS_MESSAGE_SHELVESSTATUS_H