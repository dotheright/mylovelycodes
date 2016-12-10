#!/usr/bin/env python

import socket
from binascii import hexlify

for ip_addr in ["192.168.1.1","192.168.100.1"]:
    packet_ip_addr=socket.inet_aton(ip_addr); #packet_ip_addr binary data 
    #hexlify() Return the hexadecimal representation of the binary data. The "0x" is not include.
    print hexlify(packet_ip_addr); 