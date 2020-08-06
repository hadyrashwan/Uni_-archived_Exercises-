INCLUDE Irvine32.inc
.data
source BYTE "This is the source string",0 
target BYTE SIZEOF source DUP('#') 
.code
main4 PROC
mov esi ,0
mov ecx , LENGTHOF source -1

	loop1:
		movzx eax , source[esi]
		push eax
		inc esi
		loop loop1
mov esi ,0
mov ecx , LENGTHOF source -1

	loop2:
		pop eax
		mov target[esi] , al
		inc esi
		loop loop2
mov esi,OFFSET target ; offset of variable 
mov ebx,1 ; byte format 
mov ecx,SIZEOF target ; counter 
call DumpMem 
main4 ENDP
END main4