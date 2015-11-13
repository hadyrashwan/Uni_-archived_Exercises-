# -*- coding: utf-8 -*-
"""
Created on Fri May 24 22:31:39 2013

@author: hady
"""

import socket

HOST="localhost"
PORT= 2020
s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
s.bind((HOST,PORT))
print s.recv(30)