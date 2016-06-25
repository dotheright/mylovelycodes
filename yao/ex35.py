#!/usr/bin/env python

form sys import exit

dead()

def gold_room():
    print  "This room is  full of gold  how much do you take?"
    next= raw_input(">")
    if "0" in next or  "1" in next :
        how_much=int(next)
    else:        
        print  "man ,learn to  type a number!"
    if how_much <50:
        print "Nice  you  are not greedy .You Win"
    else:
        print "Your greedy bastard!"
        exit(0)

def  bear_room():
    print "There is a bear here."
    print "The bear has a bunch of honey."
    print "The fat bear is in front of an­other door."
    print "How are you going to move the bear?"
    bear_moved = False

    while True:
        next =raw_input(">")
