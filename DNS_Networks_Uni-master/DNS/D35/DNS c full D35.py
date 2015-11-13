# -*- coding: utf-8 -*-
"""
Created on Sat Jun 22 14:34:55 2013

@author: hady
"""

import socket
def sent(data,SHOST):
     s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
     s.sendto(data,(SHOST,5454))
     print "request has been sent waiting for the server.." 
def rcv(rcv,):
    PORT2=rcv
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    print "here is ur request"
    s.bind(("",PORT2))
    print "your requested ip :  " + s.recv(1000)
def simple():
        print 'the client is ready to recv your request '  #option destHOST destPORT ip comment timeout SHOST(added)
        ip=raw_input("the hostname you want to search for  ")
        comment=raw_input("do you want to sent a comment with the ip(n to skip) ??")
        if comment== "n" :        
            data=("nor,same,same,"+ip + ",none,none")
        else :
            data=("nor,same,same,"+ip + ","+comment +",none")
        return data
def av1():
        print "you have selected option 1"        
        print 'the client is ready to recv your request '  #option destHOST destPORT ip comment timeout SHOST(added)
        ip=raw_input("the hostname you want to search for  ")
        Dhost=raw_input("the ip of the dest host")
        Dhost=Dhost+","
        Dport=raw_input("the port of the dest")
        Dport=Dport+","
        comment=raw_input("do you want to sent a comment with the ip(n to skip) ??")
        if comment== "n" :
            data=("AV1,"+Dhost + Dport +ip +",none,none")
        else :
            data=("AV1,"+Dhost + Dport +ip +","+comment +",none") 
        return data
def av2():
        print "you have selected option 2"
        print 'the client is ready to recv your request '  #option destHOST destPORT ip comment timeout SHOST(added)
        ip=raw_input("the hostname you want to search for  ")
        time=raw_input("the time you want for the delay in secs")
        comment=raw_input("do you want to sent a comment with the ip(n to skip) ??")
        if comment== "n" :
            data=("AV2,same,same,"+ip + ",none,"+time)
        else :
            data=("AV2,same,same,"+ip + ","+comment+","+time)
        return data
def av3():
        print "you have selected option 3"        
        print 'the client is ready to recv your request '  #option destHOST destPORT ip comment timeout SHOST(added)
        ip=raw_input("the hostname you want to search for  ")
        Dhost=raw_input("the ip of the dest host")
        Dhost=Dhost+","
        Dport=raw_input("the port of the dest")
        Dport=Dport+","
        time=raw_input("the time you want for the delay in secs")
        comment=raw_input("do you want to sent a comment with the ip(n to skip) ??")
        if comment== "n" :
            data=("AV3,"+Dhost + Dport +ip +",none,"+time)
        else :
            data=("AV3,"+Dhost + Dport +ip +","+comment+","+time)
        return data
def av4():
          print "you have selected option 3"
          print "this option is under dev it will crash 3ala fekra "
          print 'the client is ready to recv your request '  #option destHOST destPORT ip comment timeout SHOST(added)
          rep=raw_input("how many requests you want ?")            
          delay=raw_input("do you want to send after n times ? (y to add n )")   
          
          #if delay=="y" :  en el user ye5osh fe wa7da mean doll 3ala 7asb el options bet3o we hatwdeh 3ala a3 a2 a1 nor functions ana mesh 3yz kol mara yo3 ya5od el ip wel port etc fa fakrt 23mel el loop ta7t we 27ot fo2eha  if coundtion we fe a4 23el list bel ips el user 3yz y7otha
           #   anC=raw_input("do you want to send it to another computer y to add port and hostname of the computer")
            #  if anC=="y":
              #for i in range(0,rep):

          #if delay=="y" and anC!="y" :
                 # for i in range(0,rep):
                   
          #if anC=="y" and delay!="y":
                  #for i in range(0,rep):
             #         av1()
          #if anC!="y" and delay!="y":
                  #for i in range(0,rep):
                   #   simple()
        
def av5():
    print "you are about to get to the super user mode confirm that you are hady rashwan"
    user=raw_input("what is the username :")
    password=raw_input("what is the password :")
    data1=user+"-"+password
    comment=raw_input("do you want to sent a comment with the ip(n to skip) ??")
    if comment== "n" :        
        data=("AV5,same,same,"+data1 + ",none,none")
    else :
        data=("AV5,same,same,"+data1 + ","+comment +",none")
    return data
    
def av52():
    theorder=raw_input("do you want to power of the system for n time or off completelly (type n or off)")
    print "this msgs is printed anyway if u haven't recved the super user mode message then those options would do nothing bashfek 3alek"
    data=theorder       
    comment=raw_input("do you want to sent a comment with the ip(n to skip) ??")
    if comment== "n" :        
        data=("AV52,same,same,"+data + ",none,none")
    else :
        data=("AV52,same,same,"+data + ","+comment +",none")
    return data
def main():
    
   print "welcome to the hodz client this client will help u to mange the DNS server but first make sure that the server is on"
   SHOST=raw_input("what is the current IP of the DNS server")
   while 1 :
       lis=raw_input("do you want to use the ear mode(waiting for ip request from another pc) ? y to enter the mode  ")
       if lis=="y" :
           lport=raw_input("what is the arranged port number ?")
           rcv(int(lport))
           print "waiting for the server ..."
           continue
       userOP=raw_input("do you want the simple dns request(recv the ip on this computer by this port) y/n ?")
       if userOP=="y" :
            data=simple()
            sent(data,SHOST)
h             rcv(5454)
            askforX=raw_input("Do you want to make another request ? (write n to exit)")
            if askforX=='n' :
                break
       if userOP=="n":
            print "welocome to the advanced mode"
            userAP=raw_input("you have 4 options \n 1 is send the ip to another computer \n 2 is to send to the same computer but after n time \n 3 is to send to another computer after n time \n 4 to send multi requestes  \n 5 is the admin control option \n type the number of your option  ")
            if userAP =="1":
                data=av1()
            if userAP=="2":
                data=av2()
            if userAP=="3":
                data=av3()
            if userAP=="4":
                data==av4()
            if userAP=="5":
                data=av5()
                sent(data,SHOST)
                rcv(5454)
                data=av52()
                sent(data,SHOST)
                continue
                 
            sent(data,SHOST)
            rcv(5454)
            askforX=raw_input("Do you want to make another request ? (write n to exit)")
            if askforX=='n' :
                break
main()