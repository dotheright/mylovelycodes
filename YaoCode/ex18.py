#!/usr/bin/env python

def print_two( *argc ):
    a1,a2=argc;
    print "they are",a1,a2;

def print_two_again(a1,a2):
    print "they are",a1,a2,"again"

def print_one (a1):
    print "one is ",a1

def print_none():
    print "none"

b1="yao"
b2="jing"
print_two(b1,b2);
print_two_again(b1,b2);
print_one(b1);
print_none();