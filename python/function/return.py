#!/usr/bin/env python
# -*- coding: UTF-8 -*-

def hello():
    print  "hello world !"

ret = hello()
print ret ,type(ret)

def foo():
    return  [124,"xyz",-9.8]  

def noo():
    return  123,"awe",6.5 #this is  a Tuple type

print foo()
print noo()