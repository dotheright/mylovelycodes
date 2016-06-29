#!/usr/bin/env python

import socket

def print_machine_info():
    host_name="www.baidu.com" 
    #socket.gethostname();
    ip = socket.gethostbyname(host_name);
    print "host name is %s ,ip is %s" %(host_name,ip)

if __name__ =='__main__':
    print_machine_info()