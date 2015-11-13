INCLUDE Irvine32.inc
.data
targetStr BYTE "ABCDE",10 DUP(0)
sourceStr BYTE "FGH",0
.code
Str_concat PROC USES edi esi eax ecx,
	str1:PTR BYTE,
	str2:PTR BYTE, 
	
	mov eax, 0
	mov edi, str1
	
	L1:	
		cmp BYTE PTR[edi], 0
		jz L2
		inc edi
		jnz 	
	L2:	
		mov esi, str2
		mov ecx, LENGTHOF sourceStr
		cld
		rep movsb

		ret
Str_concat ENDP
main1 PROC
	INVOKE Str_concat, ADDR targetStr, ADDR sourceStr
	mov edx, OFFSET targetStr
	call WriteString
	call crlf
main1 ENDP
END main1