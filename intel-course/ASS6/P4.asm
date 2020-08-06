
INCLUDE Irvine32.inc

.data
	target BYTE "asdasdxxxasasd",0
	source BYTE "xxx",0	
	pos DWORD ?
.code

Str_find PROC,
	sourcee: PTR BYTE,
	targett: PTR BYTE,
	
	mov edi,targett
	mov esi,sourcee
	mov al, BYTE PTR [esi]
	
	mov ecx,lengthof target -1 
	
	repne scasb
	jne notFound

	dec edi
	push edi
	
	mov ecx,lengthof source -1
	repe cmpsb
	cmp ecx,0
	jne notFound

	pop edi
	mov pos,edi
	and al,0 
	notFound:
ret
Str_find ENDP
	
main PROC
	
	mov eax, offset target
	call WriteInt
	call Crlf
	
	INVOKE Str_find,ADDR source, ADDR target
	
	
	jnz notFound
	mov eax,pos
	call WriteInt
	call Crlf
	notFound:
	

exit
main ENDP
END main