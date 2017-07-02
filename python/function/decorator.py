#!/usr/bin/env python
# -*- coding: UTF-8 -*-
import  logging

def use_logging(func):
    def wrapper(*args,**kwargs):
        logging.warn("%s is running"% func.__name__)
        return func(*args)
    return wrapper

def foo():
    print  "call foo()"


@use_logging
def bar():
    print "call bar()"

foo()
bar()
#foo=use_logging(foo);
#bar=use_logging(bar);
#foo()
#bar()
