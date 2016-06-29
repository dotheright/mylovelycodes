#!/usr/bin/env python
#coding=utf-8
import urllib

def getHtml(url):
    page = urllib.urlopen(url)
    html = page.read()
    return html

html = getHtml("http://vdisk.weibo.com/search/?type=public&keyword=mobi")

print html
