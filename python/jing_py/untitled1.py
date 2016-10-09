#!/usr/bin/env python
# -*- coding:utf-8-*-
import urllib2
url=r"http://baike.baidu.com/view/68700.htm"
response = urllib2.urlopen(url.encode('utf-8'),timeout=200)
html_doc=response.read()
print html_doc