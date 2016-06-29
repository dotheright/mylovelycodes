#!/usr/bin/env python
# -*- coding:utf-8 -*-
def my_list_append(*list) :  # 声明一个可变长的参数的函数，只需要 "*"开头定义一个变量
    l=[]
    for i in list:
        l.extend(i)
    return  l

a=[1,2,3]
b=[4,5,6]
c=[7,8,9]

print my_list_append(a,b)
print my_list_append(a,b,c)


a=2
b=[3]
def change_value_test1(a):
    a=a**2

def change_value_test2(b):
    b[0]=b[0]**2


change_value_test1(a)
print a

change_value_test2(b)
print b
