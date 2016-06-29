#!/usr/bin/env python

# coding=utf-8
import urllib2



def loadrul(url):
    try :
        conn =urllib2.urlopen(url,timeout=5)
        html =conn.read()
        return  html
    except urllib2.URLError:
        errorReport.errorLoadUrl(url)
        return ""
    except Exception:
        print ("unkown exception")
        return  ""