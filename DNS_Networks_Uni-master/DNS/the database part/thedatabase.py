# -*- coding: utf-8 -*-
"""
Created on Mon Jun 24 15:25:36 2013

@author: hady
"""
def reader(filen):
    f = open(filen, 'r')
    baselist= f.readlines()
    lineN=len(baselist)
    for i in range(0,lineN):
        theline=baselist[i]
        lineS=theline.split("," );
        name=lineS[0]
        ip=lineS[1]
        ip=ip.replace("\n", "")
        ip=ip.replace("\r", "")
        if i==0 :
            DNStable= {name:ip}
        else :
           DNStable[name] = ip
    return DNStable
def add(name,ip,filen):
     DNStable=reader(filen)    
     DNStable[name] = ip
     return DNStable
def write(filen):
     line=""
     DNStable=reader(filen)
     Dlist=DNStable.items()
     for i in range(0,len(Dlist)):
         
         Dline=Dlist[i]
         name=Dline[0]
         ip=Dline[1]
         linea=name+","+ip+"\n"
         line=line+linea
     DNStable= open(filen, 'w')
     DNStable.write(line)
     return 
def erase(filen):
   
    open(filen, 'w').close()
def main():
    filen="/home/hady/Documents/networks/DNS/the database part/UnsavedDocument 1.txt"
    DNStable=reader(filen)
    name="ho2"
    ip=00000
    DNStable=add(name,ip,filen)
    erase(filen)
    write(filen)
main()