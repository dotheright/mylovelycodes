#!/usr/bin/env python
#-*-coding:utf-8-*-

import urllib2
from bs4 import BeautifulSoup

def savefile(url,filename):
	wenjian = open(filename,"w")
	#url = r"http://kankandou.com"
	try:
		content= urllib2.urlopen(url.encode('utf-8'),timeout=500)
	except urllib2.HTTPError, e:  
		print e.getcode()  
		print e.reason  
		print e.geturl()
		return ""
	wenjian.write(content.read())
	wenjian.close()

def procnext(sonUrl):
	try :
		content= urllib2.urlopen(sonUrl.encode('utf-8'),timeout=500)
	except urllib2.HTTPError, e:  
		print e.getcode()  
		print e.reason	  
		print e.geturl()
		return ""
	html_doc = content.read()
	soup = BeautifulSoup(html_doc,'html.parser')
	for tag in soup.find_all("a",target="_blank"):
		if  None != tag["href"]:
			text = tag.get_text()
			if "KB" in text or "MB" in text:
				after_replace = text.strip()
				list_test=after_replace.split("\t")
				savefile(tag["href"],list_test[0])



for i in range(1,14019):
	sonUrl =r"http://kankandou.com/book/view/%d.html"%i
	procnext(sonUrl)

# topurl = r"http://kankandou.com"
# content= urllib2.urlopen(topurl.encode('utf-8'),timeout=200)
# html_doc = content.read()
# soup = BeautifulSoup(html_doc, 'html.parser')
# for tag in soup.find_all("a",target="_blank"):
# 	if  None != tag["href"]:
# 		print tag["href"]
