#!/usr/bin/env python
# -*- coding: gbk -*-

import urllib2
from bs4 import BeautifulSoup

urlList=[];

#201101-201612
def getUrlSet():
    for year in range(2011,2017):
        for month in range(1,13):
            oneUrl = "http://lishi.tianqi.com/wuhan/"+str(year)+str(month).zfill(2)+".html"
            #print oneUrl
            urlList.append(oneUrl)
getUrlSet()
#print urlList

url ="http://lishi.tianqi.com/wuhan/201101.html"
for url in urlList:
    response = urllib2.urlopen(url.encode('gbk'));
    html_doc = response.read()

    css_soup = BeautifulSoup(html_doc, 'html.parser') 
    table_tag = css_soup.find("div", class_="tqtongji2");
    print table_tag;


#for  u in table_tag:    
#    for l in u:
#        print l



#table_soup= BeautifulSoup()
#print table_soup.ul.contens();


#for url in urlList:
#    response = urllib2.urlopen(url.encode('utf-8'));
#    html_doc = response.read() 


