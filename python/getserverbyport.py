#!/usr/bin/env python

import socket

portset=[13,80,53]

def get_server_by_port():
    for port in portset:
        print "port =%d  server =%s" % ( port ,socket.getservbyport(int(port) , 'tcp') )
    
if __name__ =='__main__':
    get_server_by_port()