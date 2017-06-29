#!/usr/bin/env python

import  re;

sentence = "you should then try to narrow your topic by adding other keywords.For instance ,if  you typed 'preventing road rage',you would get a list of over fifty thousand articles and sites.";

line = re.split("[^a-zA-Z0-9]",sentence)  #[^a-zA-Z0-9] not letters or number

new_line = filter(None ,line);
print new_line # delete "" in line

print new_line.count("you");