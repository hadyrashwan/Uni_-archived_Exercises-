# -*- coding: utf-8 -*-
"""
Created on Sat May 25 17:07:18 2013

@author: hady
"""

import socket

HOST="localhost"
PORT= 5454
data=raw_input("the hostname you want to search for")
s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
s.sendto(data,(HOST,PORT))
print "requesting the IP of " + data


PORT2= 2020
s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
s.bind((HOST,PORT2))
print "your requested IP is  " + s.recv(30)