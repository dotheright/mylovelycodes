#!/usr/bin/env python
# coding=utf-8
from auth import Token
from vdisk import Client

appkey = '你的key'
appsecret = '你的secret'
redirect_uri = '你的回调地址'
display = 'popup'

class client:
        def __init__(self, appkey, appsecret, redirect_uri, display):
                m_auth = Token(appkey, appsecret, redirect_uri, display)
                self.access_token = m_auth.getAccessToken()

        def getAccountInfo(self, v_client):
                """功能：获取用户信息"""
                print v_client.account_info(self.access_token).read()

        def getDelta(self, v_client):
                """获取用户文件和目录操作变化记录。列表每页固定为 2000 条。"""
                try:
                        result = v_client.delta(self.access_token)
                        print result.read()
                except:
                        print result

        def fileops_create_folder(self, v_client):
                """创建一个文件夹"""
                try:
                        print "请输入文件夹的路径".decode('utf-8')
                        path = raw_input()
                        result = v_client.fileops_create_folder(self.access_token, path)
                        print result.read()
                except Exception,e:
                        print Exception,":",e

        def files_put(self, v_client):
                """使用PUT方法向云盘传递文件"""
                try:
                        print "请输入上传的位置：".decode('utf-8')
                        cloudPath = raw_input()
                        print "请输入需要上传的文件的名称及本地路径".decode('utf-8')
                        localPath = raw_input()
                        with open(localPath, 'rb') as content:
                                result = v_client.files_put(self.access_token, cloudPath, content)
                                print result.read()
                except Exception,e:
                        print Exception,":",e

        def download_files(self, v_client):
                """下载文件"""
                try:
                        print "请输入云盘上文件存储的位置：".decode('utf-8')
                        path = raw_input()
                        data = v_client.files(self.access_token, path)
                        print "文件下载完毕，请输入文件的保存位置".decode('utf-8')
                        localPath = raw_input()
                        with open(localPath, 'wb') as f:
                                f.write(data.read())
                except Exception,e:
                        print Exception,":",e

        def run(self):
                v_client = Client()
                v_client.setRoot('sandbox')
                dic = {"1":self.getAccountInfo, "2":self.getDelta, 
                "4":self.fileops_create_folder, "5":self.files_put, "6":self.download_files}
                while 1:
                        print "请输入要做的操作：".decode('utf-8')
                        opt = raw_input()
                        dic.get(opt)(v_client)

m_client = client(appkey, appsecret, redirect_uri, display)
m_client.run()
