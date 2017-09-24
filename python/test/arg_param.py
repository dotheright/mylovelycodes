#!/usr/bin/env python
# -*- coding: utf-8 -*- 

#########################################################################
# File Name: arg_param.py
# Author: guoqingyao
# mail: stepbystepto@163.com
# Created Time: 2017年09月24日 星期日 22时11分22秒
#########################################################################

def show_message(message,*tupleName):
	for  name in tupleName:
		print message,", ",name

if __name__ == '__main__':
	show_message("Good morning","Jack","Event",850,"OK");
