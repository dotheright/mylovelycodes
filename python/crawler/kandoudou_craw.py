#!/usr/bin/env python
#coding  = utf-8
import urllib2
from bs4 import BeautifulSoup
import threading
import os

def getAPagehref(html_doc):    
    soup = BeautifulSoup(html_doc, 'html.parser')    
    links = soup.find_all("a",target="_blank") 
    for element in links:
        if(r"kankandou.com/download/file" in element["href"]):
            text = element.get_text()
            if "KB" in text:
                return text.strip(),element["href"]
            elif "MB" in text:
                return text.strip(),element["href"]
            else:
                return None

def getFileName(txt):
    return txt.split("\t")[0]

def downPagefromto(start,end):
    for i  in  range(start,end):
        url="http://kankandou.com/book/view/%d.html"%i 
        try:
            html_doc = urllib2.urlopen(url)
        except Exception as e:
            print e
            break
        accept =getAPagehref(html_doc)
        if ( None == accept ):
            pass
        else:
            txt =accept[0]
            downUrl =accept[1]
            wfileName = getFileName(txt)
            #print  wfileName,downUrl
            print "start downloading",wfileName
            wfileOpt = open(r"books/"+wfileName,"w+")
            try:
                content= urllib2.urlopen(downUrl.encode('utf-8'),timeout=300) 
            except Exception as e:
                print e
                break
            wfileOpt.write(content.read())
            wfileOpt.close()

threads = []
for i  in range(1,14470,1000):
    start = i
    end = i+1000
    if end >14470 :
        end =14470
    t = threading.Thread(target=downPagefromto,args=(start,end))
    threads.append(t)

if __name__ == '__main__':
    os.mkdir("books")  
    for t in threads:
        t.setDaemon(True)
        t.start()
    
    t.join()
    print "down loading  over"