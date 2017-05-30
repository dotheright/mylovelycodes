from bs4 import BeautifulSoup
import requests
import time
import re
import os
header = {"User-Agent":"Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/56.0.2924.87 Safari/537.36"}
weixin = "alice"
url = 'http://weixin.sogou.com/weixin?type=1&s_from=input&query={}&ie=utf8'.format(weixin)
html = requests.get(url,headers=header).text
soup = BeautifulSoup(html,'html.parser')
index = soup.find_all(uigs="account_name_0")[0]['href']
htm = requests.get(index,headers=header).text
patten = re.compile('\"author":"\S+","content":"","content_url":"/s?\S+"')
url = re.findall(patten,htm)
os.mkdir('/home/dotheright/mylovelycodes/python/network/'+weixin)
for i in url:
    author = i.split(",")[0][10:-1]
    txt_url = 'http://mp.weixin.qq.com'+i.split(",")[2][15:-1].replace('amp;','')
    html = requests.get(txt_url).text
    soup = BeautifulSoup(html,'html.parser')
    with open('/home/dotheright/mylovelycodes/python/network/{0}/{1}.txt'.format(weixin,soup.title.string), 'a+') as file:
        for p in soup.find_all('p'):
            try:
                file.write(p.string+'\n')
                print('ok')
            except:
                print('fail')
    file.close()
time.sleep(1)