#!/usr/bin/env python

# -*- coding: utf-8 -*-   

import telnetlib 
    
def do_telnet(Host, username, password, finish, commands):  
    tn = telnetlib.Telnet(Host, port=23, timeout=10)  
    tn.set_debuglevel(2)  
    
    tn.read_until('login: ')  
    tn.write(username + '\n')  
    
    tn.read_until('Password: ')  
    tn.write(password + '\n')  
    
    tn.read_until(finish)    
    tn.write('ls\n');  
    
    tn.read_until(finish)  
    tn.close() # tn.write('exit\n')  
    
if __name__=='__main__':
    Host = '127.0.0.1'
    username = 'dotheright'
    password = 'stepbystep'
    finish = ':~$ '
    commands = ['ls',"ls -l"]  
    do_telnet(Host, username, password, finish, commands)  