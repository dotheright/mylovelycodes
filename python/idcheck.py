#!/usr/bin/env python
# -*- coding:utf-8 -*-

import string

inputId= raw_input("please input a  IDstring:");
alphas = string.letters+'_'
numbers = string.digits
idSet = alphas+numbers
flag = 0;
if 0==len(inputId) :
    print "null string is not  a id"
elif inputId[0] in alphas :
    for element in inputId[1:] :
        if element not in idSet:
            print "error Id"
            flag=1
            break  
    if( 0== flag):
        print  "this is a right ID"
else:
    print "first letter of  the  id is error!"


import urllib2
def url_user_agent(url):
    # proxy = {'http':'27.24.158.155:84'}
    # proxy_support = urllib2.ProxyHandler(proxy)
    # # opener = urllib2.build_opener(proxy_support,urllib2.HTTPHandler(debuglevel=1))
    # opener = urllib2.build_opener(proxy_support)
    # urllib2.install_opener(opener)
    # i_headers = {'User-Agent':'Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US; rv:1.9.1.6) Gecko/20091201 Firefox/3.5.6'}
    #i_headers = {'User-Agent':'Mozilla/5.0 (Windows NT 6.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/31.0.1650.48'}
    i_headers = {'User-Agent':'VDiskMobile 3.4.4 123101110 (Android;x600;5.0.2;zh_CN) ChannelID/1'}
    req = urllib2.Request(url,headers=i_headers)
    html = urllib2.urlopen(req)
    if url == html.geturl():
        doc = html.read()
        return doc
    return

url = r'http://vdisk.weibo.com/s/ahLfbselke2yx'
doc = url_user_agent(url)
print doc
