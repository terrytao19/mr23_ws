// Generated by gencpp from file novatel_oem7_msgs/RotationalOffset.msg
// DO NOT EDIT!


#ifndef NOVATEL_OEM7_MSGS_MESSAGE_ROTATIONALOFFSET_H
#define NOVATEL_OEM7_MSGS_MESSAGE_ROTATIONALOFFSET_H


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
struct RotationalOffset_
{
  typedef RotationalOffset_<ContainerAllocator> Type;

  RotationalOffset_()
    : offset(0)  {
    }
  RotationalOffset_(const ContainerAllocator& _alloc)
    : offset(0)  {
  (void)_alloc;
    }



   typedef uint32_t _offset_type;
  _offset_type offset;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(USER)
  #undef USER
#endif
#if defined(_WIN32) && defined(MARK1)
  #undef MARK1
#endif
#if defined(_WIN32) && defined(MARK2)
  #undef MARK2
#endif
#if defined(_WIN32) && defined(ALIGN)
  #undef ALIGN
#endif
#if defined(_WIN32) && defined(MARK3)
  #undef MARK3
#endif
#if defined(_WIN32) && defined(MARK4)
  #undef MARK4
#endif
#if defined(_WIN32) && defined(RBV)
  #undef RBV
#endif
#if defined(_WIN32) && defined(RBM)
  #undef RBM
#endif

  enum {
    USER = 4u,
    MARK1 = 5u,
    MARK2 = 6u,
    ALIGN = 8u,
    MARK3 = 9u,
    MARK4 = 10u,
    RBV = 11u,
    RBM = 12u,
  };


  typedef boost::shared_ptr< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> const> ConstPtr;

}; // struct RotationalOffset_

typedef ::novatel_oem7_msgs::RotationalOffset_<std::allocator<void> > RotationalOffset;

typedef boost::shared_ptr< ::novatel_oem7_msgs::RotationalOffset > RotationalOffsetPtr;
typedef boost::shared_ptr< ::novatel_oem7_msgs::RotationalOffset const> RotationalOffsetConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator2> & rhs)
{
  return lhs.offset == rhs.offset;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_oem7_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccccd7594e72283b7e2e4c415b737dd5";
  }

  static const char* value(const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xccccd7594e72283bULL;
  static const uint64_t static_value2 = 0x7e2e4c415b737dd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_oem7_msgs/RotationalOffset";
  }

  static const char* value(const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 USER 	=  4\n"
"uint32 MARK1 	=  5\n"
"uint32 MARK2    =  6\n"
"uint32 ALIGN    =  8\n"
"uint32 MARK3    =  9\n"
"uint32 MARK4    = 10\n"
"uint32 RBV      = 11\n"
"uint32 RBM      = 12\n"
"\n"
"uint32 offset\n"
;
  }

  static const char* value(const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.offset);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RotationalOffset_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_oem7_msgs::RotationalOffset_<ContainerAllocator>& v)
  {
    s << indent << "offset: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.offset);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_OEM7_MSGS_MESSAGE_ROTATIONALOFFSET_H
