#!/usr/bin/env python
people = 20
cats = 30
dogs = 15

if people < cats:
	print "too many cats! the world is doomed!"

if people > cats:
	print "not many cats! the world is saved!"

if people < dogs:
	print "the world is drooled on"

if people > dogs:
	print "the world is dry!"

dogs += 5

if people >= dogs:
	print "not many dogs!"

if people <=dogs:
	print "too many dogs!"

if people == dogs:
	print "people are dogs."
	