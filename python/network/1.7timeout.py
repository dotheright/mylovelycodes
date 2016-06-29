#!/usr/bin/python

import socket

def test_socket_timeout():
    sock=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    print "Default socket  timeout=%s" % sock.gettimeout()
    sock.settimeout(100)
    print "current socket timeout =%s" % sock.gettimeout()
    

if __name__ == '__main__':
    test_socket_timeout()
