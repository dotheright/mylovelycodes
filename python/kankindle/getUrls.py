#!/usr/bin/env python
#coding  = utf-8

import urllib2
from bs4 import BeautifulSoup

urlPool=[];

def has_target_and_title(tag):
    return tag.has_attr('target') and tag.has_attr('title')

def setAPageUrlseed(html_doc):        
    soup = BeautifulSoup(html_doc, 'html.parser')    
    links = soup.find_all("a",target="_blank")    
    for li in links:
        line = BeautifulSoup('%s'%li)
        tag = line.a
        if(r"13602.html" in tag["href"]):
            pass
        elif(r"3349.html" in tag["href"]):
            pass
        elif(r"kankindle" in tag["href"] ):
            if (True == has_target_and_title(tag) ):
                urlPool.append(tag["href"])
                pass
        else:
           pass            
            
for i in range(6,9):
    url= r'http://kankindle.com/simple/page/'+str(i)
    print url
    response = urllib2.urlopen(url.encode('utf-8'))
    html_doc=response.read()
    setAPageUrlseed(html_doc)
    
#response = urllib2.urlopen(url)
#html_doc =response.read() 

