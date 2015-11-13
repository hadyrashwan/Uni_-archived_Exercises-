# -*- coding: utf-8 -*-
"""
Created on Sat May 25 16:09:18 2013

@author: hady
"""

import socket
import time


while 1:
    
    DNStable= {'www.google.com': '173.194.35.4', 'www.gmail.com' : '173.194.35.22','www.facebook.com': '173.252.110.27'}
    HOST1="localhost"
    PORT= 5454
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    s.bind((HOST1,PORT))
    print "the server is up and ready to answer the requests "
    data=s.recv(30)    
    print "IP request for " + data + " has been recv" 
    
    HOST2='localhost'
    PORT2= 2020
    data =DNStable[data]
    time.sleep(3)
    s.sendto(data,(HOST2,PORT2))
    print "sent the requested  IP which is  "+data
    #for later use option under development
    #HOST="localhost"
    #PORT= 5454
    #HOST2='localhost'
    #PORT2= 2020
    
    

