INCLUDE Irvine32.inc
.data
Array DWORD 50 DUP(?)
indx DWORD 0
cZ DWORD 0
.code
main1 PROC
mov ecx , 50
mov edi,0
L1:
	call Random32
	mov Array[edi] ,eax
	ja L2
	inc indx
	L2:
	call WriteInt
	call Crlf
	add edi , 4
	loop L1

call Crlf
call Crlf
mov eax , indx 
call WriteInt
call Crlf
main1 ENDP
END main1