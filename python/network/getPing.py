#!/usr/bin/env python

import os

command = "ping -c 3  www.163.com"
run = os.popen(command)

info =run.readlines()

for line  in  info:
    line =line.strip("\n")
    print line
