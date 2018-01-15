#!/usr/bin/env python 
#coding=utf-8

import  numpy as  np;
from  sklearn import  preprocessing

data = np.array([[3,-1.5,2,-5.4],
                [0, 4,-0.3,2.1],
                [1,3.3,-1.9,-4.3]])
                
print "--------data_scaler------------"
processhandle = preprocessing.MinMaxScaler(feature_range=(0,1))
data_scaler = processhandle.fit_transform(data)
print  data_scaler

print "--------data_binarizer----------"
data_binarizer = preprocessing.Binarizer(threshold=1.4).transform(data)
print  data_binarizer

print "--------data_nomal----------"
data_nomal = preprocessing.normalize(data,norm="l1")
print  data_nomal

print "--------data_std------------"
data_std = preprocessing.scale(data)
print  data_std 

print data_std.mean(axis =0)
print data_std.std(axis =0)
