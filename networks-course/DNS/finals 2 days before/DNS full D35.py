# -*- coding: utf-8 -*-
"""
Created on Sat Jun 22 14:33:25 2013

@author: hady
"""

import socket
import time
def ip0(data):
    DNStable= {'www.google.com': '173.194.35.4', 'www.gmail.com' : '173.194.35.22','www.facebook.com': '173.252.110.27'}    
    dataC=DNStable.has_key(data)
    if dataC== True :
        ip =DNStable[data]
    else :
        try :
            ip=socket.gethostbyname(data)
            print "found on the web " + data  +" ip address is " +ip
        except :
            print 'the requested IP of' + data + 'was not found 404 msg will be sent'
            ip= "404 not found"
    return ip

def rcv(rcv):
    PORT= rcv
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    s.bind(("",PORT))
    print "the server is up and ready to answer the requests "
    data, sender_addr = s.recvfrom(100)
    print "IP request of " + data + " has been recv" 
    Shost=sender_addr[0]
    data=data.split("," );
    if data[1] == "same":
        data.insert(1, Shost)
        data.remove("same")
    if data[2] =="same" :
        data.insert(2, PORT)
        data.remove("same")
    data.append(Shost)
    time.sleep(2)
    return data
def send(Shost,portD,data,time1,comment):
    s = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)    
    time.sleep(int(time1))
    if comment != "none" :
        data=data +"\n" + comment
        s.sendto(data,(Shost,int(portD)))
    else:
        s.sendto(data,(Shost,int(portD)))

    

def main():
    while 1:
       # try:
            print "the server is up"
            k=0
            reqtype=rcv(5454)
            sender=reqtype[6]
            print sender
            data = reqtype
            
            if data[0]== "nor": #the normal method
                time1=1
                ip=ip0(data[3])
                send(data[1],data[2],ip,time1,data[4])
                print "the reqested ip was send to", data[1] 
            if data[0]== "AV1": #the other person method
                time1=1
                ip=ip0(data[3])
                ddata="\n this reqest was made by " +sender +" and he/she asked me to give the ip of " + data[3] +" which is " +ip
                send(data[1],data[2],ddata,time1,data[4])
                ddata="\n the following message has been delv to " + data[1] +"\n" +ddata
                send(sender,5454,ddata,time1,data[4])
                print "the reqested ip was send to ", data[1] 
            if data[0]=="AV2": # the time 1st person
                ip=ip0(data[3])
                send(data[1],data[2],ip,data[5],data[4])
                print "the reqested ip was send to", data[1]
            if data[0]=="AV3" :
                ip=ip0(data[3])
                time1=1
                ddata=" \n this reqest was made by "+ sender +" and  asked me to give the ip of " + data[3] +" which is " +ip +" to you"
                send(data[1],data[2],ddata,data[5],data[4])
                ddata="\n the following message has been delv to " + data[1] +"\n" +ddata +"after " +data[5] + "secends as you requested"
                send(sender,5454,ddata,time1,data[4]) 
                print "the reqested ip was send to " + data[1] + " after " +data[5] + " secs as requested by " +sender
            if data[0]=="AV5" :
                time1=1
                if data[3]=="hady-e7m" :
                    kpass="you have entered the super user mode"
                    print  sender + "is now a super user"
                    send(data[1],data[2],kpass,time1,data[4])
                    data=rcv(5454)
            
                    if data[0]=="AV52" :
                        print"heeeere"
                        print data
                        if data[3]!= "off" :
                            pausemsg="the server will be down for " +data[3] +"  seconds no requests will be taken"
                            send(data[1],data[2],pausemsg,1,data[4])
                            print "the server will sleep for "+ data[3] + "seconds no requests will be taken"
                            time.sleep(int(data[3]))
                            
                        if data[3]=="off":
                            print "the system is down by the order of " + data[1]
                            while 1 :
                                loop=00
                        
                else :
                    npass="you have entered a wrong password"
                    print sender +"is trying to access the system he got a error ha3 :P"
                    send(data[1],data[2],npass,time1,data[4])
                    
       # except:
                continue

main()
        
    