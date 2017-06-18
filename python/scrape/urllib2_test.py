#!/usr/bin/env python
#coding  = utf-8

import urllib2
from bs4 import BeautifulSoup

url="http://www.baidu.com/" 
try:
    response = urllib2.urlopen(url)
except HTTPError as e:
    print(e)
else :
    #print("not http error!\r\n ");
    content = response.read();
    soup = BeautifulSoup(content);
    
    urllist = soup.findAll("href");
    for url in urllist:
        print url
