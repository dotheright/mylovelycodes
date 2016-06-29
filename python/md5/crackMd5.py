#!/usr/bin/env python
#-*-coding:utf-8-*-

import hashlib   

src ="justdoit"
aa = input("Input:")
print aa,type(aa)
m2 = hashlib.md5()   
m2.update(src)   
print m2.hexdigest()   
