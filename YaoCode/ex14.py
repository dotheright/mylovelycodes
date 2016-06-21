#!/usr/bin/env python

#sys :systerm
#argv :argument variable
from sys import argv

script,uname =argv
prompt =">"

print "Hi %s ,I am the %s script "%(uname,script)
print "Do you like me %s ?",uname
likes = raw_input(prompt);
print "likes=%s",likes

print "where do  you live %s ?",uname
lives =raw_input(prompt)

print "what kind of computer do  you have ?",uname
computer  = raw_input(prompt)

print """
Alright .so  you said  %r about linking me.
You live  in %r .Not sure where that is  .
And you have a %r computer .Nice
""" % (likes,lives,computer)