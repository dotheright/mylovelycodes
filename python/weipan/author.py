 #!/usr/bin/env python

# coding=utf-8
import urllib,urllib2
import codecs
import webbrowser
import json

appkey = '.你的key...'
appsecret = '..你的app_secret.'
redirect_uri = '.你的回调地址..'
display = 'popup'

class Token():
        """请用户授权，获取Token"""

        def __init__(self, appkey, appsecret, redirect_uri, display):
                self.appkey = appkey
                self.appsecret = appsecret
                self.redirect_uri = redirect_uri
                self.display = display

        def getToken(self):
                url = ('https://auth.sina.com.cn/oauth2/authorize?client_id=%s&redirect_uri=%s&display=%s')%(self.appkey, self.redirect_uri, self.display)
                webbrowser.open(url)

        def getAccessToken(self):
                self.getToken()
                self.code = raw_input()
                url = 'https://auth.sina.com.cn/oauth2/access_token'
                params = {'client_id':self.appkey, 'client_secret':self.appsecret, 'grant_type':'authorization_code','code':self.code, 'redirect_uri':self.redirect_uri}
                data = urllib.urlencode(params)
                request = urllib2.Request(url, data)
                response = urllib2.urlopen(request)
                result = response.read()
                print result
                m_json = json.loads(result)
                access_token = m_json['access_token']
                print access_token
                return access_token

a = Token(appkey, appsecret, redirect_uri, display)
a.getAccessToken()

