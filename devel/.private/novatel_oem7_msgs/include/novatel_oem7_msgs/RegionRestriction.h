// Generated by gencpp from file novatel_oem7_msgs/RegionRestriction.msg
// DO NOT EDIT!


#ifndef NOVATEL_OEM7_MSGS_MESSAGE_REGIONRESTRICTION_H
#define NOVATEL_OEM7_MSGS_MESSAGE_REGIONRESTRICTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace novatel_oem7_msgs
{
template <class ContainerAllocator>
struct RegionRestriction_
{
  typedef RegionRestriction_<ContainerAllocator> Type;

  RegionRestriction_()
    : restriction(0)  {
    }
  RegionRestriction_(const ContainerAllocator& _alloc)
    : restriction(0)  {
  (void)_alloc;
    }



   typedef uint32_t _restriction_type;
  _restriction_type restriction;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(GEOGATED)
  #undef GEOGATED
#endif
#if defined(_WIN32) && defined(LOCAL_AREA)
  #undef LOCAL_AREA
#endif
#if defined(_WIN32) && defined(NEARSHORE)
  #undef NEARSHORE
#endif

  enum {
    NONE = 0u,
    GEOGATED = 1u,
    LOCAL_AREA = 2u,
    NEARSHORE = 3u,
  };


  typedef boost::shared_ptr< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> const> ConstPtr;

}; // struct RegionRestriction_

typedef ::novatel_oem7_msgs::RegionRestriction_<std::allocator<void> > RegionRestriction;

typedef boost::shared_ptr< ::novatel_oem7_msgs::RegionRestriction > RegionRestrictionPtr;
typedef boost::shared_ptr< ::novatel_oem7_msgs::RegionRestriction const> RegionRestrictionConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator2> & rhs)
{
  return lhs.restriction == rhs.restriction;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_oem7_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc52a4c0bcedd7ab1d738d78f19f61b0";
  }

  static const char* value(const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc52a4c0bcedd7abULL;
  static const uint64_t static_value2 = 0x1d738d78f19f61b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_oem7_msgs/RegionRestriction";
  }

  static const char* value(const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 NONE           = 0\n"
"uint32 GEOGATED       = 1\n"
"uint32 LOCAL_AREA     = 2\n"
"uint32 NEARSHORE      = 3\n"
"\n"
"uint32 restriction\n"
;
  }

  static const char* value(const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.restriction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RegionRestriction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_oem7_msgs::RegionRestriction_<ContainerAllocator>& v)
  {
    s << indent << "restriction: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.restriction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_OEM7_MSGS_MESSAGE_REGIONRESTRICTION_H