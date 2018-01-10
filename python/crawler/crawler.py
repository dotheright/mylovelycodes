#!/usr/bin/env python
#-*-coding:utf-8-*-

import urllib2
from bs4 import BeautifulSoup
#import threading
from sys import argv

script,start,end=argv

iStart = int(start)
iEnd = int(end)

def has_target_and_title(tag):
    return tag.has_attr('target') and tag.has_attr('title')

def getAPageUrl(html_doc):    
    soup = BeautifulSoup(html_doc, 'html.parser')    
    links = soup.find_all("a",target="_blank") 
    for tag in links:
        if(r"kankindle.com/simple/down" in tag["href"]):
            return tag["href"]
        #elif(r"pan.baidu.com" in tag["href"] ):
        #    return tag["href"]

def downLoad(url):
    response = urllib2.urlopen(url.encode('utf-8'))
    html_doc =response.read() 
    for bookName in html_doc.split('\n'):
        if bookName.find("书籍名称") > -1:
            fileNameAndBr=bookName.split('：')
            fileNameList=fileNameAndBr[1].split('<')
            wfileName = fileNameList[0].replace("/","_")   
    
    downUrl=getAPageUrl(html_doc)
    if None== downUrl:
        pass
    else:
        print "start downloading",wfileName
        wfileOpt = open(r"book/"+wfileName,"w")
        content= urllib2.urlopen(downUrl.encode('utf-8'),timeout=300) 
        wfileOpt.write(content.read())
        wfileOpt.close()

def procAPageUrlseed(html_doc):        
    soup = BeautifulSoup(html_doc, 'html.parser')    
    links = soup.find_all("a",target="_blank")    
    for tag in links:
        if None == tag["href"]:
            continue
        if(r"13602.html" in tag["href"]):
            pass
        elif(r"3349.html" in tag["href"]):
            pass
        elif(r"kankindle" in tag["href"] ):
            if (True == has_target_and_title(tag) ):
                downLoad(tag["href"])
                pass
        else:
           pass            
            
for i in range(iStart,iEnd):
    url= r'http://kankindle.com/simple/page/'+str(i)
    print url
    response = urllib2.urlopen(url.encode('utf-8'),timeout=20)
    html_doc=response.read()
    procAPageUrlseed(html_doc)