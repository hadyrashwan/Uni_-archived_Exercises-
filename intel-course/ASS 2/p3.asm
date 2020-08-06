INCLUDE Irvine32.inc
.code
main3 PROC
	sat =1 
	sun =2 
	mon =3
	tues =4
	wen =5
	thur =6
	fri =7 
.data 
	list BYTE sat,sun,mon,tues,wen,thur,fri 
.code
	call DumpRegs
main3 ENDP
END main3