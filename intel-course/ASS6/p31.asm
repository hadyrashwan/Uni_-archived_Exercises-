INCLUDE Irvine32.inc
.data
target BYTE "abcxxxxdefghijklmop",0
.code
Str_remove PROC USES edi esi ecx,
	arr:PTR BYTE,
	nb:BYTE,
	
	mov edi, arr
	movzx ecx, nb
	
	L1:
		mov BYTE PTR[edi]," "
		inc edi
		loop L1
		  
	ret
Str_remove ENDP
main1 PROC
INVOKE Str_remove, ADDR [target+3], 4
	mov edx, OFFSET target
	call WriteString
	call crlf
	call crlf
main1 ENDP
END main1