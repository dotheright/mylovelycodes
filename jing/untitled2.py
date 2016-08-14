# -*- coding: utf-8 -*-
"""
Created on Mon Jun 27 11:38:17 2016

@author: dotheright
"""

#!/usr/bin/python
#
#list1, list2 = [123, 'xyz', 'zara', 'abc'], [456, 700, 200]
#
#print "Max value element : ", max(list1);
#print "Max value element : ", max(list2);
#
#
#
#print  sum(range(0,101,2))
#for i in sum(range(0,101,2)):
#    print i
#
#year = input("Please enter the year: ")
#if (year%4==0 and year%100!=0) or(year%400==0):
#    print(year,"is a leap year.") 
#else: 
#    print(year,"is not a leap year.")  
#    
#
#benjin = 10000
#years = 0
#while benjin<20000:
#    years +=1
#    benjin = benjin*(1+0.0325)
#    
#print(str(years)+"年以后，存款会翻番") 
#    

#score=int(input('请输入成绩(0~100):' )) 
#if  score > 100:
#    grade = "输入错误!"
#elif score > 90:
#    grade = 'A'
#elif score >= 80: 
#    grade = 'B' 
#elif score >= 70: 
#    grade = 'C' 
#elif score >= 60: 
#    grade = 'D' 
#elif score >= 0: 
#    grade = 'E' 
#else: 
#    grade = "输入错误!" 
#
#print(grade) 

#app = 6
#while True:
#    p = int(input('猜一猜(0~9):'))
#    if p == app:
#        print ("恭喜！你猜中了！")
#    elif p > app:
#        print ("太大")
#    else:
#        print ("太小")
#        

    #运用python的数学函数
#import math 
#
#n=int(input("请输入一个数:")) 
#x=int(math.sqrt(n)) 
#i,w=2,0 
#
#for i in range (2,x+1):
#    if n%i==0:
#        w=1 
#if w==1:
#    print(n,"不是素数。") 
#else:
#    print(n,"是素数。") 

#import math 
#n=int(input('请输入一个数：')) 
#i,w=2,0 
#while i <= int(math.sqrt(n)) and w==0:
#    if n%i == 0:
#        w=1 
#    else:
#        i+=1;
#if w==1:
#    print n,"不是素数。"
#else:
#    print n,"是素数。" 
   

#hour,minute,second=raw_input('请输入一个时间（h:m:s):').split(':') 
#hour=int(hour) 
#minute=int(minute) 
#second=int(second) 
#second+=30 
#if second >= 60:
#    second = second-60 
#    minute += 1 
#minute+=5 
#
#if minute >= 60: 
#    minute = minute-60 
#    hour += 1 
#if hour == 24: 
#    hour = 0 
#print('%d:%d:%d'%(hour,minute,second)) 

#for i in range(1,1000):
#    sum = 0
#    li=[]
#    for n in range(1,i):
#        if i%n == 0:
#            sum = sum + n
#            li.append(n)
#    if i == sum:
#        print(i,"n is ",li)
        
#nn = 1
#for  i  in range(9):
#    nn=(nn+1)*2
#print nn
#
#day =9
#x=1
#while( 0!=day):
#    x=(x+1)*2
#    day-=1
#print x

#opt=open("temp.txt","r")
#
#for line in opt.readlines():
#    print line,
#    ar=line.split(",")
#    print ar
#    print ar[1].replace("C"," ")
#    print ar[1].replace("C"," ").strip()
#
#opt.close()

#hai = open("temp.txt","r")
#
#for line in hai.readlines():
#    print line,
#    ar = line.split(",")
#    print ar
#    print ar[1].replace("C"," ")
#    print ar[1].replace("C"," ").strip()
#    
#hai.close()

#def pro(days,ts):
#    day=days;
#    t=ts ;    
#    max = -1000 # 最热时候的温度
#    wmax =0  #最热的那天
#    min = 1000 # 最冷时候的温度
#    wmin =0 #最冷的那天
#    for i in  day:
#        if t[i-1] >max:
#            max =t[i-1]
#            wmax =i
#        if t[i-1] <min:
#            min =t[i-1]
#            wmin =i
#    
#    print "day",wmax,"th hotest is",max
#    print "day",wmin,"th codest is",min
#    



#for line in txt.readline():
#    print line,
#    zx = line.split(",")
#    print zx
#    #print zx[1].replace("C"," ")
#    #print zx[1].replace("C"," ").strip()
    
#line =txt.readline()
#print line,type(line)
#zx = line.split('#')
#print zx,type(zx)
#qw = zx[-1].split('C')
#print qw,type(qw)
#qw[0] = int(qw[0])
#   
   

#txt = open("temp.txt","r")
#
#days = []
#ts = []
#
#for line in txt.readlines():
#    zx = line.split(',')
#    zx[1] = int( zx[1].replace("C"," ").strip())
#    zx[0] = int( zx[0].strip())
#    days.append(zx[0])
#    ts.append(zx[1])
#    
#print days,type(days)
#print ts
#pro(days,ts)
#
#print float(sum(ts))/len(ts)
#        
#
#txt.close()



#for a in range(1,5):
#    for b in range(1,a+1):
#        print a," ",b
#    print " "
    

#a = 1 ;
#while( a <5):
#    b = 1 ;
#    while(b<5):
#        print a,b
#        b+=1
#    a+=1;
#    print ""


#
#for a in range(1,5):
#    for b in range(1,a+1):
#        print b,a,"\t"
#    print " "


#for a in range(1,10):
#    for b in range(1,a+1):
#        print b,"*",a,"=",a*b,'\t',
#    print " "


#a = 22
#b = 1
#c = 3
#print a+b+c

#a,b,c = [22,1,3]
#n = a+b+c
#print n


#st=raw_input()
#ar=st.split(" ")
#lenght = len(ar)
#for i in range(lenght):
#    ar[i]=int(ar[i])
#
#print sum(ar)


#ax = raw_input()
#az = ax.split(" ")
#m=int(az[0])
#n=int(az[1])
#if(0==n):
#    print "NO"
#if m%n==0:
#    print "YES"
#else:
#    print "NO"
    



#ax = raw_input()
#az = ax.split(" ")
#hang=int(az[0])
#lie=int(az[1])
#zhuan =int(az[2])
#list_hang=[]
#list_lie =[]
#if 1==zhuan:
#    for i in range(hang):
#        list_hang.append(raw_input())
#    for j in range(-1,-hang-1,-1):
#        print list_hang[j]
#if 0==zhuan:
#    lielie=raw_input()
#    hanglie=lielie.split(" ")
#    for i in range(lielie):
#        list_lielie.append(raw_input()) 
#    
#    
#    for i in range(len(hanglie)):
#        hanglie[i]=int(hanglie[i])
#    for j in range(-1,-len(hanglie)-1,-1):
#        print hanglie[j],

#import math
#n = int(input("输入一个数字："))
#x = int(math.sqrt(n))
#e,r = 2,0
#for e in range(2,e+1):
#    if n%e==0:
#        r=1
#if r==1:
#    print "No"
#else:
#    print "Yes"
    

#import math
#n = int(input("输入一个数字："))
#x = int(math.sqrt(n))
#e,r = 2,0
#for e in range(2,e+1):
#    if n%e==0:
#        r=1
#if r==1:
#    print "No"
#else:
#    print "Yes"
#

#zx = raw_input()
#zc = zx.split(" ")
#zv = len(zc)
#for i in range(zv):
#    zc[i] = int(zc[i])
#    
#print sum(zc)
# 


i = int(raw_input())
#print sum(range(1,i+1))
sum= 0
for e in range(1,i+1):
    sum =sum+e;

print sum

  
 
    
    
























