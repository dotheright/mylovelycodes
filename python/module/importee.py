#!/usr/bin/env python

foo = "abc"

def show():
    print  "in importee foo =  ",foo
    # globals()返回的是字典类型所以有  
    print  "in importee globals().keys()",globals().keys(); 
    print  "in importee locals().keys()",locals().keys();


