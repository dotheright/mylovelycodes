#!/usr/bin/env python
# -*- coding: UTF-8 -*-

def foo():
    def bar():
        print "call bar()"
    print  "call foo()"
    bar()

foo()