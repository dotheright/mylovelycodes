# -*- coding: utf-8 -*-
"""
Created on Sun Jun 19 16:22:23 2016

@author: dotheright
"""

import socket
import sys
import argparse

def main():
    #set argment parsing
    parser =argparse.ArgumentParser(description="Argment")
    parser.add_argument("--host",action="store",dest ="host",required =False)
    