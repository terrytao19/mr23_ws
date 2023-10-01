// Generated by gencpp from file novatel_oem7_msgs/HEADING2.msg
// DO NOT EDIT!


#ifndef NOVATEL_OEM7_MSGS_MESSAGE_HEADING2_H
#define NOVATEL_OEM7_MSGS_MESSAGE_HEADING2_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <novatel_oem7_msgs/Oem7Header.h>
#include <novatel_oem7_msgs/SolutionStatus.h>
#include <novatel_oem7_msgs/PositionOrVelocityType.h>
#include <novatel_oem7_msgs/SolutionSource.h>
#include <novatel_oem7_msgs/BestExtendedSolutionStatus.h>

namespace novatel_oem7_msgs
{
template <class ContainerAllocator>
struct HEADING2_
{
  typedef HEADING2_<ContainerAllocator> Type;

  HEADING2_()
    : header()
    , nov_header()
    , sol_status()
    , pos_type()
    , length(0.0)
    , heading(0.0)
    , pitch(0.0)
    , reserved(0.0)
    , heading_stdev(0.0)
    , pitch_stdev(0.0)
    , rover_stn_id()
    , master_stn_id()
    , num_sv_tracked(0)
    , num_sv_in_sol(0)
    , num_sv_obs(0)
    , num_sv_multi(0)
    , sol_source()
    , ext_sol_status()
    , galileo_beidou_sig_mask(0)
    , gps_glonass_sig_mask(0)  {
    }
  HEADING2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , nov_header(_alloc)
    , sol_status(_alloc)
    , pos_type(_alloc)
    , length(0.0)
    , heading(0.0)
    , pitch(0.0)
    , reserved(0.0)
    , heading_stdev(0.0)
    , pitch_stdev(0.0)
    , rover_stn_id(_alloc)
    , master_stn_id(_alloc)
    , num_sv_tracked(0)
    , num_sv_in_sol(0)
    , num_sv_obs(0)
    , num_sv_multi(0)
    , sol_source(_alloc)
    , ext_sol_status(_alloc)
    , galileo_beidou_sig_mask(0)
    , gps_glonass_sig_mask(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::novatel_oem7_msgs::Oem7Header_<ContainerAllocator>  _nov_header_type;
  _nov_header_type nov_header;

   typedef  ::novatel_oem7_msgs::SolutionStatus_<ContainerAllocator>  _sol_status_type;
  _sol_status_type sol_status;

   typedef  ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator>  _pos_type_type;
  _pos_type_type pos_type;

   typedef float _length_type;
  _length_type length;

   typedef float _heading_type;
  _heading_type heading;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _reserved_type;
  _reserved_type reserved;

   typedef float _heading_stdev_type;
  _heading_stdev_type heading_stdev;

   typedef float _pitch_stdev_type;
  _pitch_stdev_type pitch_stdev;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _rover_stn_id_type;
  _rover_stn_id_type rover_stn_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _master_stn_id_type;
  _master_stn_id_type master_stn_id;

   typedef uint8_t _num_sv_tracked_type;
  _num_sv_tracked_type num_sv_tracked;

   typedef uint8_t _num_sv_in_sol_type;
  _num_sv_in_sol_type num_sv_in_sol;

   typedef uint8_t _num_sv_obs_type;
  _num_sv_obs_type num_sv_obs;

   typedef uint8_t _num_sv_multi_type;
  _num_sv_multi_type num_sv_multi;

   typedef  ::novatel_oem7_msgs::SolutionSource_<ContainerAllocator>  _sol_source_type;
  _sol_source_type sol_source;

   typedef  ::novatel_oem7_msgs::BestExtendedSolutionStatus_<ContainerAllocator>  _ext_sol_status_type;
  _ext_sol_status_type ext_sol_status;

   typedef uint8_t _galileo_beidou_sig_mask_type;
  _galileo_beidou_sig_mask_type galileo_beidou_sig_mask;

   typedef uint8_t _gps_glonass_sig_mask_type;
  _gps_glonass_sig_mask_type gps_glonass_sig_mask;





  typedef boost::shared_ptr< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> const> ConstPtr;

}; // struct HEADING2_

typedef ::novatel_oem7_msgs::HEADING2_<std::allocator<void> > HEADING2;

typedef boost::shared_ptr< ::novatel_oem7_msgs::HEADING2 > HEADING2Ptr;
typedef boost::shared_ptr< ::novatel_oem7_msgs::HEADING2 const> HEADING2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.nov_header == rhs.nov_header &&
    lhs.sol_status == rhs.sol_status &&
    lhs.pos_type == rhs.pos_type &&
    lhs.length == rhs.length &&
    lhs.heading == rhs.heading &&
    lhs.pitch == rhs.pitch &&
    lhs.reserved == rhs.reserved &&
    lhs.heading_stdev == rhs.heading_stdev &&
    lhs.pitch_stdev == rhs.pitch_stdev &&
    lhs.rover_stn_id == rhs.rover_stn_id &&
    lhs.master_stn_id == rhs.master_stn_id &&
    lhs.num_sv_tracked == rhs.num_sv_tracked &&
    lhs.num_sv_in_sol == rhs.num_sv_in_sol &&
    lhs.num_sv_obs == rhs.num_sv_obs &&
    lhs.num_sv_multi == rhs.num_sv_multi &&
    lhs.sol_source == rhs.sol_source &&
    lhs.ext_sol_status == rhs.ext_sol_status &&
    lhs.galileo_beidou_sig_mask == rhs.galileo_beidou_sig_mask &&
    lhs.gps_glonass_sig_mask == rhs.gps_glonass_sig_mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator1> & lhs, const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace novatel_oem7_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "122511c4b985ce1811a5f28a3179643e";
  }

  static const char* value(const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x122511c4b985ce18ULL;
  static const uint64_t static_value2 = 0x11a5f28a3179643eULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_oem7_msgs/HEADING2";
  }

  static const char* value(const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header                      header\n"
"Oem7Header                  nov_header\n"
"SolutionStatus              sol_status\n"
"PositionOrVelocityType      pos_type\n"
"float32                     length\n"
"float32                     heading\n"
"float32                     pitch\n"
"float32                     reserved\n"
"float32                     heading_stdev\n"
"float32                     pitch_stdev\n"
"string                      rover_stn_id\n"
"string                      master_stn_id\n"
"uint8                       num_sv_tracked\n"
"uint8                       num_sv_in_sol\n"
"uint8                       num_sv_obs\n"
"uint8                       num_sv_multi\n"
"SolutionSource              sol_source\n"
"BestExtendedSolutionStatus  ext_sol_status\n"
"uint8                       galileo_beidou_sig_mask\n"
"uint8                       gps_glonass_sig_mask\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: novatel_oem7_msgs/Oem7Header\n"
"uint16 OEM7MSGTYPE_LOG =  0\n"
"\n"
"\n"
"string message_name\n"
"uint16 message_id\n"
"uint8  message_type\n"
"uint32 sequence_number\n"
"uint8  time_status\n"
"uint16 gps_week_number\n"
"uint32 gps_week_milliseconds\n"
"\n"
"\n"
"================================================================================\n"
"MSG: novatel_oem7_msgs/SolutionStatus\n"
"uint32 SOL_COMPUTED             = 0\n"
"uint32 INSUFFICIENT_OBS         = 1\n"
"uint32 NO_CONVERGENCE            = 2\n"
"uint32 SINGULARITY              = 3\n"
"uint32 COV_TRACE                = 4\n"
"uint32 TEST_DIST                = 5\n"
"uint32 COLD_START               = 6\n"
"uint32 V_H_LIMIT                = 7\n"
"uint32 VARIANCE                 = 8\n"
"uint32 RESIDUALS                = 9\n"
"uint32 INTEGRITY_WARNING        = 13\n"
"uint32 PENDING                  = 18\n"
"uint32 INVALID_FIX              = 19\n"
"uint32 UNAUTHORIZED             = 20\n"
"uint32 INVALID_RATE             = 22\n"
"\n"
"uint32 status\n"
"\n"
"================================================================================\n"
"MSG: novatel_oem7_msgs/PositionOrVelocityType\n"
"uint32 NONE                     = 0\n"
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
"================================================================================\n"
"MSG: novatel_oem7_msgs/SolutionSource\n"
"uint8 RESERVED1           = 3 # 0x3\n"
"\n"
"uint8 SOURCE_ANTENNA_MASK = 12 # 0xC\n"
"uint8 PRIMARY_ANTENNA     = 0\n"
"uint8 SECONDARY_ANTENNA   = 0 \n"
"\n"
"uint8 RESERVED2           = 240 # 0xF0\n"
"\n"
"uint8 source\n"
"================================================================================\n"
"MSG: novatel_oem7_msgs/BestExtendedSolutionStatus\n"
"# Bit 0\n"
"uint8 RTK_SOLUTION_VERIFIED = 1\n"
"uint8 PDP_SOLUTION_IS_GLIDE = 1\n"
"\n"
"# Bits 1-3, mask 0xE\n"
"uint8 KLOBUCHAR_BROADCAST                =  2 # 0x2 \n"
"uint8 SBAS_BROADCAST                     =  4 # 0x4 \n"
"uint8 MULTI_FREQUENCY_COMPUTED           =  6 # 0x6\n"
"uint8 PSRDIFF_CORRECTION                 =  8 # 0x8\n"
"uint8 NOVATEL_BLENDED_IONO_VALUE         = 10 #0xA\n"
"\n"
"# Bit 4\n"
"uint8 RTK_ASSIST_ACTIVE = 16 # 0x10\n"
"\n"
"# Bit 5\n"
"uint8 ANTENNA_INFORMATION_IS_MISSING = 32 # 0x20\n"
"\n"
"# Bit 6 reserved\n"
"uint8 RESERVED = 64 # 0x40\n"
"\n"
"# Bit 7\n"
"uint8 POSITION_INCLUDES_TERRAIN_COMPENSATION_CORRECTIONS = 128 # 0x80\n"
"\n"
"\n"
"\n"
"uint8 status\n"
;
  }

  static const char* value(const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.nov_header);
      stream.next(m.sol_status);
      stream.next(m.pos_type);
      stream.next(m.length);
      stream.next(m.heading);
      stream.next(m.pitch);
      stream.next(m.reserved);
      stream.next(m.heading_stdev);
      stream.next(m.pitch_stdev);
      stream.next(m.rover_stn_id);
      stream.next(m.master_stn_id);
      stream.next(m.num_sv_tracked);
      stream.next(m.num_sv_in_sol);
      stream.next(m.num_sv_obs);
      stream.next(m.num_sv_multi);
      stream.next(m.sol_source);
      stream.next(m.ext_sol_status);
      stream.next(m.galileo_beidou_sig_mask);
      stream.next(m.gps_glonass_sig_mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HEADING2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_oem7_msgs::HEADING2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_oem7_msgs::HEADING2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "nov_header: ";
    s << std::endl;
    Printer< ::novatel_oem7_msgs::Oem7Header_<ContainerAllocator> >::stream(s, indent + "  ", v.nov_header);
    s << indent << "sol_status: ";
    s << std::endl;
    Printer< ::novatel_oem7_msgs::SolutionStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.sol_status);
    s << indent << "pos_type: ";
    s << std::endl;
    Printer< ::novatel_oem7_msgs::PositionOrVelocityType_<ContainerAllocator> >::stream(s, indent + "  ", v.pos_type);
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
    s << indent << "heading: ";
    Printer<float>::stream(s, indent + "  ", v.heading);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "reserved: ";
    Printer<float>::stream(s, indent + "  ", v.reserved);
    s << indent << "heading_stdev: ";
    Printer<float>::stream(s, indent + "  ", v.heading_stdev);
    s << indent << "pitch_stdev: ";
    Printer<float>::stream(s, indent + "  ", v.pitch_stdev);
    s << indent << "rover_stn_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.rover_stn_id);
    s << indent << "master_stn_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.master_stn_id);
    s << indent << "num_sv_tracked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_sv_tracked);
    s << indent << "num_sv_in_sol: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_sv_in_sol);
    s << indent << "num_sv_obs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_sv_obs);
    s << indent << "num_sv_multi: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_sv_multi);
    s << indent << "sol_source: ";
    s << std::endl;
    Printer< ::novatel_oem7_msgs::SolutionSource_<ContainerAllocator> >::stream(s, indent + "  ", v.sol_source);
    s << indent << "ext_sol_status: ";
    s << std::endl;
    Printer< ::novatel_oem7_msgs::BestExtendedSolutionStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.ext_sol_status);
    s << indent << "galileo_beidou_sig_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.galileo_beidou_sig_mask);
    s << indent << "gps_glonass_sig_mask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_glonass_sig_mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_OEM7_MSGS_MESSAGE_HEADING2_H
