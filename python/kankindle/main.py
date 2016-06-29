#!/usr/bin/env python
#coding  = utf-8

import urllib2
import getAlgorithm

#url_algorithm_index= r'http://www.cnblogs.com/huangxincheng/category/340148.html'
#getAlgorithm.slef_call()

for uu in getAlgorithm.data_dict:
    #print uu,getAlgorithm.data_dict[uu]
    response = urllib2.urlopen(getAlgorithm.data_dict[uu])
    #print response.read()
    file_object = open(uu+r".html","a")
    file_object.write(response.read());
    file_object.close()


