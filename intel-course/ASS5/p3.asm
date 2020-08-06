INCLUDE Irvine32.inc

.data
message BYTE "what is ur grade ?  ",0
.code

main3 PROC
	mov edx , OFFSET message
	call writestring
	call readint
	mov ebx,eax
	.IF ebx>89 && ebx==100
		mov al,'A'
		call writechar
		call crlf
	.ELSEIF ebx>79 && ebx<90
		mov al,'B'
		call writechar
		call crlf
	.ELSEIF ebx>69 && ebx<80
		mov al,'C'
		call writechar
		call crlf
	.ELSEIF ebx>59 && ebx<70
		mov al,'D'
		call writechar
		call crlf
	.ELSEIF ebx>0 && ebx<60
		mov al,'F'
		call writechar
		call crlf
	.ENDIF	
main3 ENDP
END main3