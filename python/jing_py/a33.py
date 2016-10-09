#!/usr/bin/env python

numbers = []
def opW(pennies):
	i = 0
	while i < pennies:
		print  "at the top i is %d" % i 
		numbers.append(i)

		i = i +1
		print "numbers now: ",numbers
		print "at the bottom i is %d" % i 
		print "the number:"



def opQ(apples):
	for x in range(apples):
		print "at"
opQ(3)