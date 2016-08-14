#!/usr/bin/env python
#-*-coding:utf-8-*-
"""
Created on Sun Jun 26 20:16:33 2016

@author: dotheright
"""

fileOpt=open("te","r")

for line in fileOpt.readlines():
    #print line.decode("utf-8")
    print  '\"'+line.replace("\n","\""),","
fileOpt.close()