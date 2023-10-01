// Generated by gencpp from file novatel_oem7_msgs/PositionOrVelocityType.msg
// DO NOT EDIT!


#ifndef NOVATEL_OEM7_MSGS_MESSAGE_POSITIONORVELOCITYTYPE_H
#define NOVATEL_OEM7_MSGS_MESSAGE_POSITIONORVELOCITYTYPE_H


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
struct PositionOrVelocityType_
{
  typedef PositionOrVelocityType_<ContainerAllocator> Type;

  PositionOrVelocityType_()
    : type(0)  {
    }
  PositionOrVelocityType_(const ContainerAllocator& _alloc)
    : type(0)  {
  (void)_alloc;
    }



   typedef uint32_t _type_type;
  _type_type type;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(FIXEDPOS)
  #undef FIXEDPOS
#endif
#if defined(_WIN32) && defined(FIXEDHEIGHT)
  #undef FIXEDHEIGHT
#endif
#if defined(_WIN32) && defined(DOPPLER_VELOCITY)
  #undef DOPPLER_VELOCITY
#endif
#if defined(_WIN32) && defined(SINGLE)
  #undef SINGLE
#endif
#if defined(_WIN32) && defined(PSRDIFF)
  #undef PSRDIFF
#endif
#if defined(_WIN32) && defined(WAAS)
  #undef WAAS
#endif
#if defined(_WIN32) && defined(PROPAGATED)
  #undef PROPAGATED
#endif
#if defined(_WIN32) && defined(L1_FLOAT)
  #undef L1_FLOAT
#endif
#if defined(_WIN32) && defined(NARROW_FLOAT)
  #undef NARROW_FLOAT
#endif
#if defined(_WIN32) && defined(L1_INT)
  #undef L1_INT
#endif
#if defined(_WIN32) && defined(WIDE_INT)
  #undef WIDE_INT
#endif
#if defined(_WIN32) && defined(NARROW_INT)
  #undef NARROW_INT
#endif
#if defined(_WIN32) && defined(RTK_DIRECT_INS)
  #undef RTK_DIRECT_INS
#endif
#if defined(_WIN32) && defined(INS_SBAS)
  #undef INS_SBAS
#endif
#if defined(_WIN32) && defined(INS_PSRSP)
  #undef INS_PSRSP
#endif
#if defined(_WIN32) && defined(INS_PSRDIFF)
  #undef INS_PSRDIFF
#endif
#if defined(_WIN32) && defined(INS_RTKFLOAT)
  #undef INS_RTKFLOAT
#endif
#if defined(_WIN32) && defined(INS_RTKFIXED)
  #undef INS_RTKFIXED
#endif
#if defined(_WIN32) && defined(PPP_CONVERGING)
  #undef PPP_CONVERGING
#endif
#if defined(_WIN32) && defined(PPP)
  #undef PPP
#endif
#if defined(_WIN32) && defined(OPERATIONAL)
  #undef OPERATIONAL
#endif
#if defined(_WIN32) && defined(WARNING)
  #undef WARNING
#endif
#if defined(_WIN32) && defined(OUT_OF_BOUNDS)
  #undef OUT_OF_BOUNDS
#endif
#if defined(_WIN32) && defined(INS_PPP_CONVERGING)
  #undef INS_PPP_CONVERGING
#endif
#if defined(_WIN32) && defined(INS_PPP)
  #undef INS_PPP
#endif
#if defined(_WIN32) && defined(PPP_BASIC_CONVERGING)
  #undef PPP_BASIC_CONVERGING
#endif
#if defined(_WIN32) && defined(PPP_BASIC)
  #undef PPP_BASIC
#endif
#if defined(_WIN32) && defined(INS_PPP_BASIC_CONVERGING)
  #undef INS_PPP_BASIC_CONVERGING
#endif
#if defined(_WIN32) && defined(INS_PPP_BASIC)
  #undef INS_PPP_BASIC
#endif

  enum {
    NONE = 0u,
    FIXEDPOS = 1u,
    FIXEDHEIGHT = 2u,
    DOPPLER_VELOCITY = 8u,
    SINGLE = 16u,
    PSRDIFF = 17u,
    WAAS = 18u,
    PROPAGATED = 19u,
    L1_FLOAT = 32u,
    NARROW_FLOAT = 34u,
    L1_INT = 48u,
    WIDE_INT = 49u,
    NARROW_INT = 50u,
    RTK_DIRECT_INS = 51u,
    INS_SBAS = 52u,
    INS_PSRSP = 53u,
    INS_PSRDIFF = 54u,
    INS_RTKFLOAT = 55u,
    INS_RTKFIXED = 56u,
    PPP_CONVERGING = 68u,
    PPP = 69u,
    OPERATIONAL = 70u,
    WARNING = 71u,
    OUT_OF_BOUNDS = 72u,
    INS_PPP_CONVERGING = 73u,
    INS_PPP = 74u,
    PPP_BASIC_CONVERGING = 77u,
    PPP_BASIC = 78u,
    INS_PPP_BASIC_CONVERGING = 79u,
    INS_PPP_BASIC = 80u,
  };


  typedef boost::shared_ptr< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> const> ConstPtr;

}; // struct PositionOrVelocityType_

typedef ::novatel_oem7_msgs::PositionOrVelocityType_<std::allocator<void> > PositionOrVelocityType;

typedef boost::shared_ptr< ::novatel_oem7_msgs::PositionOrVelocityType > PositionOrVelocityTypePtr;
typedef boost::shared_ptr< ::novatel_oem7_msgs::PositionOrVelocityType const> PositionOrVelocityTypeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_oem7_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "481c03d5946c8cdc20582529721ac9d4";
  }

  static const char* value(const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x481c03d5946c8cdcULL;
  static const uint64_t static_value2 = 0x20582529721ac9d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_oem7_msgs/PositionOrVelocityType";
  }

  static const char* value(const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 NONE                     = 0\n"
"uint32 FIXEDPOS                 = 1\n"
"uint32 FIXEDHEIGHT              = 2\n"
"uint32 DOPPLER_VELOCITY         = 8\n"
"uint32 SINGLE                   = 16\n"
"uint32 PSRDIFF                  = 17\n"
"uint32 WAAS                     = 18\n"
"uint32 PROPAGATED               = 19\n"
"uint32 L1_FLOAT                 = 32\n"
"uint32 NARROW_FLOAT             = 34\n"
"uint32 L1_INT                   = 48\n"
"uint32 WIDE_INT                 = 49\n"
"uint32 NARROW_INT               = 50\n"
"uint32 RTK_DIRECT_INS           = 51\n"
"uint32 INS_SBAS                 = 52\n"
"uint32 INS_PSRSP                = 53\n"
"uint32 INS_PSRDIFF              = 54\n"
"uint32 INS_RTKFLOAT             = 55\n"
"uint32 INS_RTKFIXED             = 56\n"
"uint32 PPP_CONVERGING           = 68\n"
"uint32 PPP                      = 69\n"
"uint32 OPERATIONAL              = 70\n"
"uint32 WARNING                  = 71\n"
"uint32 OUT_OF_BOUNDS            = 72\n"
"uint32 INS_PPP_CONVERGING       = 73\n"
"uint32 INS_PPP                  = 74\n"
"uint32 PPP_BASIC_CONVERGING     = 77\n"
"uint32 PPP_BASIC                = 78\n"
"uint32 INS_PPP_BASIC_CONVERGING = 79\n"
"uint32 INS_PPP_BASIC            = 80\n"
"\n"
"\n"
"uint32 type\n"
;
  }

  static const char* value(const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionOrVelocityType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_OEM7_MSGS_MESSAGE_POSITIONORVELOCITYTYPE_H