#!/usr/bin/env python
import random
from urllib import urlopen
import sys

word_url="http://www.baidu.com"
words =[]


class TheThing(object):
	def __init__(self):
		self.number =0
	def some_function(self):
		print "I got  called"
	def  add_me_up(self,more):
		self.number +=more;
		return self.number

a = TheThing()
b =TheThing()
