#!/usr/bin/env python

import socket
import binascii

ipset=["127.0.0.1","192.168.0.1"]

def convert_IP():
    for ip_addr in ipset:
        paket_ip =socket.inet_aton(ip_addr);
        unpacket_ip = socket.inet_ntoa(paket_ip);
        print  binascii.hexlify(paket_ip),unpacket_ip;

if __name__ =='__main__':
    convert_IP()