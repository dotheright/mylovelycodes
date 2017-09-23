#!/usr/bin/env python
# -*- coding: utf-8 -*- 

#########################################################################
# File Name: wsgi_server.py
# Author: guoqingyao
# mail: stepbystepto@163.com
# Created Time: 2017年09月23日 星期六 12时53分55秒
#########################################################################

from wsgiref.simple_server import make_server

from webapp import application

server = make_server("",8080,application)

server.serve_forever()
