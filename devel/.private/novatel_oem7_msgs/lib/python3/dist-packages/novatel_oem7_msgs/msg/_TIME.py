# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from novatel_oem7_msgs/TIME.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import novatel_oem7_msgs.msg
import std_msgs.msg

class TIME(genpy.Message):
  _md5sum = "54034bfc54ecd3d2e80c9b8665eb700c"
  _type = "novatel_oem7_msgs/TIME"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header           header
Oem7Header       nov_header
uint32           clock_status
float64          offset
float64          offset_std
float64          utc_offset
uint32           utc_year
uint8            utc_month
uint8            utc_day
uint8            utc_hour
uint8            utc_min
uint32           utc_msec
uint32           utc_status
           



================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: novatel_oem7_msgs/Oem7Header
uint16 OEM7MSGTYPE_LOG =  0


string message_name
uint16 message_id
uint8  message_type
uint32 sequence_number
uint8  time_status
uint16 gps_week_number
uint32 gps_week_milliseconds

"""
  __slots__ = ['header','nov_header','clock_status','offset','offset_std','utc_offset','utc_year','utc_month','utc_day','utc_hour','utc_min','utc_msec','utc_status']
  _slot_types = ['std_msgs/Header','novatel_oem7_msgs/Oem7Header','uint32','float64','float64','float64','uint32','uint8','uint8','uint8','uint8','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,nov_header,clock_status,offset,offset_std,utc_offset,utc_year,utc_month,utc_day,utc_hour,utc_min,utc_msec,utc_status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TIME, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.nov_header is None:
        self.nov_header = novatel_oem7_msgs.msg.Oem7Header()
      if self.clock_status is None:
        self.clock_status = 0
      if self.offset is None:
        self.offset = 0.
      if self.offset_std is None:
        self.offset_std = 0.
      if self.utc_offset is None:
        self.utc_offset = 0.
      if self.utc_year is None:
        self.utc_year = 0
      if self.utc_month is None:
        self.utc_month = 0
      if self.utc_day is None:
        self.utc_day = 0
      if self.utc_hour is None:
        self.utc_hour = 0
      if self.utc_min is None:
        self.utc_min = 0
      if self.utc_msec is None:
        self.utc_msec = 0
      if self.utc_status is None:
        self.utc_status = 0
    else:
      self.header = std_msgs.msg.Header()
      self.nov_header = novatel_oem7_msgs.msg.Oem7Header()
      self.clock_status = 0
      self.offset = 0.
      self.offset_std = 0.
      self.utc_offset = 0.
      self.utc_year = 0
      self.utc_month = 0
      self.utc_day = 0
      self.utc_hour = 0
      self.utc_min = 0
      self.utc_msec = 0
      self.utc_status = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.nov_header.message_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_HBIBH2I3dI4B2I().pack(_x.nov_header.message_id, _x.nov_header.message_type, _x.nov_header.sequence_number, _x.nov_header.time_status, _x.nov_header.gps_week_number, _x.nov_header.gps_week_milliseconds, _x.clock_status, _x.offset, _x.offset_std, _x.utc_offset, _x.utc_year, _x.utc_month, _x.utc_day, _x.utc_hour, _x.utc_min, _x.utc_msec, _x.utc_status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.nov_header is None:
        self.nov_header = novatel_oem7_msgs.msg.Oem7Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.nov_header.message_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.nov_header.message_name = str[start:end]
      _x = self
      start = end
      end += 58
      (_x.nov_header.message_id, _x.nov_header.message_type, _x.nov_header.sequence_number, _x.nov_header.time_status, _x.nov_header.gps_week_number, _x.nov_header.gps_week_milliseconds, _x.clock_status, _x.offset, _x.offset_std, _x.utc_offset, _x.utc_year, _x.utc_month, _x.utc_day, _x.utc_hour, _x.utc_min, _x.utc_msec, _x.utc_status,) = _get_struct_HBIBH2I3dI4B2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.nov_header.message_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_HBIBH2I3dI4B2I().pack(_x.nov_header.message_id, _x.nov_header.message_type, _x.nov_header.sequence_number, _x.nov_header.time_status, _x.nov_header.gps_week_number, _x.nov_header.gps_week_milliseconds, _x.clock_status, _x.offset, _x.offset_std, _x.utc_offset, _x.utc_year, _x.utc_month, _x.utc_day, _x.utc_hour, _x.utc_min, _x.utc_msec, _x.utc_status))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.nov_header is None:
        self.nov_header = novatel_oem7_msgs.msg.Oem7Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.nov_header.message_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.nov_header.message_name = str[start:end]
      _x = self
      start = end
      end += 58
      (_x.nov_header.message_id, _x.nov_header.message_type, _x.nov_header.sequence_number, _x.nov_header.time_status, _x.nov_header.gps_week_number, _x.nov_header.gps_week_milliseconds, _x.clock_status, _x.offset, _x.offset_std, _x.utc_offset, _x.utc_year, _x.utc_month, _x.utc_day, _x.utc_hour, _x.utc_min, _x.utc_msec, _x.utc_status,) = _get_struct_HBIBH2I3dI4B2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_HBIBH2I3dI4B2I = None
def _get_struct_HBIBH2I3dI4B2I():
    global _struct_HBIBH2I3dI4B2I
    if _struct_HBIBH2I3dI4B2I is None:
        _struct_HBIBH2I3dI4B2I = struct.Struct("<HBIBH2I3dI4B2I")
    return _struct_HBIBH2I3dI4B2I