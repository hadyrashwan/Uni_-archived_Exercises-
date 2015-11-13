INCLUDE Irvine32.inc
.data
varB BYTE 65,31,02,08 ,3 ,5 ,6
;place BYTE LENGTHOF varB
;place2 BYTE 0 
.code
main1 PROC
	;mov eax,0
	;mov ebx,0
	;mov ecx,0
	;mov edx,0
	mov ecx ,(LENGTHOF varB) /2
	mov esi , LENGTHOF varB - 1
	mov edx , 0
	L1:
		mov al , varB[esi]
		;mov bl , varB[eax]
		xchg varB[edx] , al
		xchg varB[esi], al
		inc edx
		dec esi
		;movzx esi , varB
		;call DumpRegs
		
	loop L1
	
	mov esi , OFFSET varB
	mov ecx , LENGTHOF varB
	mov ebx , TYPE varB
	;movzx esi , varB
call DumpMem
 
main1 ENDP
END main1