#!/usr/bin/python
def apples_and_oranges(apples, oranges):
	print "You like %d apples?" % apples
	print "You like %d oranges?\n" % oranges
apples_and_oranges(15, 20)
print "How many apples or oranges do you want?"
huiche =raw_input("do you want continue ,hit RETURN ,or hit CTRL+C abort?")
print "aaaa %r \n" % huiche
apples = raw_input("apples:")
oranges = raw_input("oranges:")
apples_and_oranges(int(apples),int(oranges))
