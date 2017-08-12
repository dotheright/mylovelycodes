#!/usr/bin/env python

import socket

SEND_BUF_SIZE=4096
RECV_BUF_SIZE=4096

def modify_buff_size():
    sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
	bufsize = sock.getsockopt(socket.SO_SOCKET,socket.SO_SNDBUF)
	print buffer
	
	
if __name__=='__name__'
modify_buff_size()
    
