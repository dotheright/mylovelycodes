#!/usr/bin/env python
# -*- coding: utf-8 -*- 

#########################################################################
# File Name: dict_param.py
# Author: guoqingyao
# mail: stepbystepto@163.com
# Created Time: 2017年09月24日 星期日 22时17分15秒
#########################################################################


def check_book(**dictParam):
    if  dictParam.has_key("Price"):
        price = int(dictParam["Price"])
        if price >100 :
            print "*** I want buy this book !"
    print ""
    for  key  in  dictParam.keys():
        print key,":",dictParam[key]
    print ""

if  __name__ =='__main__':
    check_book(author="James",Title ="Economics Introduction")
    check_book(author="James",Title ="Economics Introduction",Price =300)