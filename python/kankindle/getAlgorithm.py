#!/usr/bin/env python
#-*-coding:utf-8-*-

import urllib2
from HTMLParser import HTMLParser


url_list =[]
data_list =[]
data_dict = {}


class myHtmlParser(HTMLParser):
    def __init__(self):
        HTMLParser.__init__(self)
        self.flag=None
   #redefine handle_starttag
    def handle_starttag(self,tag,attrs):
        if tag=='a':
            self.flag='a'
            for href,link in attrs:
                if href=='href' :
                    if( "html" not  in  link):
                        pass
                    if( "archive" not  in  link):
                        pass
                    elif ("#" in link):
                        pass
                    else:
                        if(link not in url_list ):
                            url_list.append(link)
                        else:
                            pass
                        

                        #print attrs
                    #use_link=link

    def handle_data(self,data):
        if self.flag=='a':
            if sss.encode('utf-8') in data:
                da = data.decode('utf-8')
                parts =da.split(" ")
                if(len(parts[1]) <4):
                    pass
                else:
                    data_list.append(parts[1])
                    pass


def slef_call():
    top_url='http://kankindle.com/simple/page/1'
    response = urllib2.urlopen(top_url)
    feedin =response.read() 
    m=myHtmlParser()
    m.feed(feedin)
    m.close() 
    lenght =len(url_list) 
    for i  in range(lenght) :
        data_dict[ data_list[i] ] =url_list[i]

slef_call();
#print data_list