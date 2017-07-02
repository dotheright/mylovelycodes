#!/usr/bin/env python
# -*- coding: UTF-8 -*-

from operator import add,sub
from random import randint,choice

ops={"+":add,"-":sub}
MAX_TRIES = 2


for  j in range(5):
    op = choice("+-")
    nums = [randint(1,100) for i in range(2)]
    ans =ops[op](*nums);
    print nums,op,ans

def doProc():
    op =choice("+-");
    nums =[randint(1,100) for  i  in  range(2)];
    ans=ops[op](*nums) # ops is  a dict ; here like add(*nums) ;nums is a list or Tuple,
    pr ="%d %s %d = "%(nums[0],op,nums[1])
    oops =0;
    while True:
        try:
            if int(raw_input(pr)) == ans: #here pr is output string
                print "correct! "
                break;
            if oops == MAX_TRIES:
                print "answer is:\n %s%d "%(pr,ans)
            else:
                print "incorrect ... try again!"
                oops +=1;
        except(KeyboardInterrupt,EOFError,ValueError):
            print "invalid input ... try again"

def main():
    while True:
        doProc()
        try:
            opt= raw_input("angain?[Y]").lower()
            if opt and opt[0] =='n':
                break
        except (KeyboardInterrupt,EOFError):
            break


if __name__ == '__main__' :
    main()