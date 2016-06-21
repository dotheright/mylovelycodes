#!/usr/bin/python

from sys import argv

filename = argv[1]
fileopt =open(filename);
print fileopt.read()


filename_argain = raw_input("please input a file name \n >")
fileopt =open(filename_argain);
print fileopt.read() 