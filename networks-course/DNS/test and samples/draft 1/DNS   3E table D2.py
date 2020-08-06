# -*- coding: utf-8 -*-
"""
Created on Sat May 25 22:02:21 2013

@author: hady
"""
import socket
import time
while 1:
    
    DNStable= {'www.google.com': '173.194.35.4', 'www.gmail.com' : '173.194.35.22','www.facebook.com': '173.252.110.27'}
    #HOST1="192.168.1.4"
    PORT= 5454
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    s.bind(("",PORT))
    print "the server is up and ready to answer the requests "
    #data=s.recv(30) 
    data, sender_addr = s.recvfrom(30)
    print "IP request for " + data + " has been recv" 
    Shost=sender_addr[0]
    
    #HOST2='739'
    PORT2= 2020
    dataC=DNStable.has_key(data)
    if dataC== True :
        data =DNStable[data]
    else :
        try :
            data=socket.gethostbyname(data)
        except :
            print 'the requested IP of' + data + 'was not found 404 msg will be sent'
            data= "404 not found"
    time.sleep(1)
    s.sendto(data,(Shost,PORT2))
    print "sent the requested  IP which is  "+data
    #for later use option under development
    #HOST="localhost"
    #PORT= 5454
    #HOST2='localhost'
    #PORT2= 2020