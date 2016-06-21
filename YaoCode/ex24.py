#!/usr/bin/env python
print "Let's  practicce everything ."
print "you\'d need to know \'bout esapes with \\ that  do  \n newlines and  \t  tabs"

poem="""
\t The lovely world
with  logic so firmly planted
cannot  discern \n the needs of love
nor comprehend passion from intuition
and requires an explanation
\n\t\t where there is none
"""
print "-------------------------------"
print poem
print "-------------------------------"

five =10-2+3-6
print "this should be five :%s" % five

def secret_formula(started):
    jelly_bean =started*500
    jars =jelly_bean/1000
    crates = jars/100
    return jelly_bean,jars ,crates

start_point = 10000

beans,jars,crates=secret_formula(start_point)

print "with a starting  of  %d " % start_point