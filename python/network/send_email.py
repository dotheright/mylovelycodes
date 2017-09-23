#!/usr/bin/env python
# -*- coding: UTF-8 -*-
import smtplib
import mimetypes
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
from email.mime.image import MIMEImage

def AutoSendMail():
    msg = MIMEMultipart()
    msg['From'] = "stepbystepto@163.com"
    msg['To'] = "stepbystepto@163.com"
    msg['Subject'] = "hello world"
    
    txt = MIMEText("这是中文的邮件内容哦",'plain','utf-8')     
    msg.attach(txt)
    
    server = smtplib.SMTP()
    server.connect('smtp.163.com')
    server.login('stepbystepto@163.com','dotheright')
    server.sendmail(msg['From'],msg['To'],msg.as_string())
    server.quit()
    
if __name__ == "__main__":
    AutoSendMail()
    
# -*- coding: UTF-8 -*-
'''
发送txt文本邮件
小五义：http://www.cnblogs.com/xiaowuyi
'''
import smtplib  
from email.mime.text import MIMEText  
mailto_list=["stepbystepto@163.com"] 
mail_host="smtp.163.com"  #设置服务器
mail_user="stepbystepto"    #用户名
mail_pass="dotheright"   #口令 
mail_postfix="163.com"  #发件箱的后缀
  
def send_mail(to_list,sub,content):  
    me="hello"+"<"+mail_user+"@"+mail_postfix+">"  
    msg = MIMEText(content,_subtype='plain',_charset='gb2312')  
    msg['Subject'] = sub  
    msg['From'] = me  
    msg['To'] = ";".join(to_list)  
    try:  
        server = smtplib.SMTP()  
        server.connect(mail_host)  
        server.login(mail_user,mail_pass)  
        server.sendmail(me, to_list, msg.as_string())  
        server.close()  
        return True  
    except Exception, e:  
        print str(e)  
        return False  
if __name__ == '__main__':  
    if send_mail(mailto_list,"hello","hello world！"):  
        print "发送成功"  
    else:  
        print "发送失败"
