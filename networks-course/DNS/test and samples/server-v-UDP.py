# -*- coding: utf-8 -*-
"""
Spyder Editor

This temporary script file is located here:
/home/hady/.spyder2/.temp.py
"""

import socket
import time

HOST="192.168.1.4"
PORT= 5454
data="Just some text  h2h"
s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

while 1:
    s.sendto(data,(HOST,PORT))
    print "sent : "+data
    time.sleep(1)

