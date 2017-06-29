#!/usr/bin/env python

fibs = [0,1]

def get_fibs_list(num):
    'get Fibonacci sequence'
    for  i  in range(num-2):
        fibs.append(fibs[-1]+fibs[-2])
    print fibs

get_fibs_list(11)
print get_fibs_list.__doc__
print  help(get_fibs_list)