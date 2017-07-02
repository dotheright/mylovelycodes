#!/usr/bin/env python
def foo():
    print "call foo() ..."
    bar =200;
    print "in  foo bar=%d"% bar;
bar =100;
print "in __main__ bar=%d"% bar

foo()

foo.bar =300;
foo();

foo.new=400;
print locals()

