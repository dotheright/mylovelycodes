#!/usr/bin/env python

from sys import argv

script,file_number = argv

def print_all (f):
    print f.read()

def rewind (f):
    print f.seek(0)

def print_line(cur_line, f):
    print "line",cur_line,"::",f.readline()


current_file = open(file_number);

print_all(current_file)
rewind(current_file)

line = 1;
print "line one"
print_line(line,current_file)
print "line two"
print_line(line+1,current_file)