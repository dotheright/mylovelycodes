#!/usr/bin/env python

def cheese_and_crackers(cheese_count,boxes_of_crackers):
    print "You have %d cheeses ! " %cheese_count;
    print "you have %i boxes of  crackers " % boxes_of_crackers
    print "that  enought for party!"
    print "Get  a  backet\n"

print "we  can  just give  the  function number directly"
cheese_and_crackers(20,30)

amount_of_cheeses =10
amount_of_cracker =20

cheese_and_crackers(amount_of_cheeses,amount_of_cracker)

cheese_and_crackers(amount_of_cheeses+1,amount_of_cracker)