# -*- coding: utf-8 -*-
"""
Created on Sat Jun 25 23:03:42 2016

@author: dotheright
"""

class people(object):
    height = 0
    weight = 0
    __money = 0
    
    def doSomething(self):
        print "do something"
    
    def __init__(self,height,weight,money):
        self.height  = height
        self.weight  = weight
        self.__money = money
        
    def show(self):
        print 'height ',self.height
        print 'weight ',self.weight
        print '__money ',self.__money
        

zhangsan=people(180,80,1000)
zhangsan.height =170
zhangsan.__money =200
zhangsan.show()
zhangsan.doSomething()

print ""

class student(people):
    grade =8
    school ="honggang"

    def doSomething(self):
        print "go to school"

xiaoming = student (150,50,100)
xiaoming.show()
xiaoming.doSomething()
       
