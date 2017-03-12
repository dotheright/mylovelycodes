#!/usr/bin/env python
 
import os
import sys

ifa = os.popen('ifconfig  | grep mon0 | cut -d " " -f 1')
ifb = ifa.read()
if ifb != 'mon0\n':
    print 'start listening mode \n'
    f = os.popen('airmon-ng start wlan0')
    f.read()
    print f
    f.close
if ifb == 'mon0\n':
    pass
ifa.close()
