#!/usr/bin/python
#this one is like your scyipts with argv
def print_two(*args):
	arg1, arg2 = args
	print "arg1: %r, arg2: %r" % (arg1, arg2)
def print_two_again(arg1, arg2):
	arg1="123"
	print "arg1: %r, arg2: %r" % (arg1, arg2)
def print_one(arg1):
	print "arg1: %r" % arg1
def ___():
	print "I got nothin'."

a1="zed"
a2="shaw"

print_two(a1,a2 )
print "after two",a1,a2

a1="zed"
a2="shaw"
print_two_again(a1, a2)
print "after two again",a1,a2
#("frist!")
___()


  
