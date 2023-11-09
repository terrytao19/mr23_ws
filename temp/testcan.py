#!/usr/bin/env python

"""
This example shows how sending a single message works.
"""

import can
import time
import os
import cantools

# Fix any existing error frames
os.system("sudo ip link set can0 down")
os.system("sudo ip link set can0 up type can bitrate 500000 restart-ms 100")
os.system("sudo ip link set can0 up type can bitrate 500000")

db = cantools.database.load_file('powertrain_AS.dbc')

bus = can.interface.Bus(interface='socketcan', channel='can0', bitrate=500000)

msg_trq = db.get_message_by_name('AS_Setpt_trq')



def send_one():
    """Sends a single message."""

    # bus = can.Bus(interface='pcan', channel='PCAN_USBBUS1', bitrate=250000)
    # bus = can.Bus(interface='ixxat', channel=0, bitrate=250000)
    # bus = can.Bus(interface='vector', app_name='CANalyzer', channel=0, bitrate=250000)
    # ...
    
    data = msg_trq.encode({'AS_trq_fl': 1,
                            'AS_trq_fr': 1,
                            'AS_trq_bl': 0,
                            'AS_trq_br': 0
                            })


    while(True):
        try:
            message = can.Message(arbitration_id=0x0, data=data, dlc=8, is_extended_id=False, channel='can0', is_rx=False)
            print(message)
            bus.send(message)
            print(f"Message sent on {bus.channel_info}")
        except can.CanError:
            print("Message NOT sent")
        time.sleep(.1)


if __name__ == "__main__":
    send_one()
        