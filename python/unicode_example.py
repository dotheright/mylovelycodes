#!/usr/bin/env python

'''
using  unicode deal write the utf-8 file and  read utf-8 file
'''
CODEC="utf-8"
FILE = "unicode.txt"

hello_out = u"this is  what I have been written  20min  before!"
bye_out = hello_out.encode(CODEC);
fileWrite = open(FILE,"w+");
fileWrite.write(bye_out);
fileWrite.close()

fileRead=open(FILE,"r")
bye_in =fileRead.read()
fileRead.close()
hello_in=bye_in.decode(CODEC);

print hello_in
