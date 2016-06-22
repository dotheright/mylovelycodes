#!/usr/bin/python

def add(a, b):
	print "you are adding a+b =%d" % (a+b)
	return a+b

def sub(a, b):
	print "you are substracting a-b =%d" % (a-b)
	return a-b
def  mutiply(a, b):
	print "you are mutipling a*b =%d" % (a*b)
	return a*b
def  devide(a, b):
	print "you are dividing a/b =%d" % (a/b)
	return a/b

c=20
d=4
ad = add(c,d)
su =sub(c,d)
su2=sub(d,c)
mu =mutiply(c,d)
de =devide(c,d)
print "add =",ad," sub1=",su," sub2=",su2," mutiply=",mu,"devide=",de