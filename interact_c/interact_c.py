#!/usr/bin/env python
import os;
pid = os.getpid();

basetype = {"int":r"%d","char":r"%d","short":r"%d","unsiged int":r"%u","unsiged":r"%u","float":r"%f","double":r"%f"};

def isDef(theInput):
    for key in basetype:
        if theInput.lstrip().split(" ")[0] == key :
            return key;
    return False;

def isAlreadDef(theInput):
    return True;

def isPrintf(theInput):
    return True;
def isFunction(theInput):
    return True;

def isLoop(theInput):
    return True;
def isInclude(theInput):
    return True;

def isInclude(theInput):
    return True;

while True:
    initBaseProgram();
    theInput =raw_input("#>")
    if key=isDef(theInput) :
        print def;
        recode varname;
    elif isAlreadDef(theInput):
        print def;
    elif isPrintf(theInput):
        pass;
    elif isFunction(theInput):
        move above main;
    elif isLoop(theInput):
        pass;
    elif #de:
        move blow head;
    else:
        pass;