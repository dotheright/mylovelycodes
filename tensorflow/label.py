1#!/usr/bin/env python 
#coding=utf-8

import  numpy as  np;
from  sklearn import  preprocessing

data = np.array([[3,-1.5,2,-5.4],
                [0, 4,-0.3,2.1],
                [1,3.3,-1.9,-4.3]])
                
label_encoder = preprocessing.LabelEncoder()
input_classes =['audi','ford','audi','toyota','ford','bmw']

label_encoder.fit(input_classes)

print "class mapping"
for  i ,item in enumerate(label_encoder.classes_):
    print item,"--->",i
    
labels = ['toyota','ford','audi']
encoded_labels = label_encoder.transform(labels);
print  encoded_labels;
print  "---------"
encode_test = [1,2,3,0]
decode_test = label_encoder.inverse_transform(encode_test)
print  decode_test

print  "end"