INCLUDE Irvine32.inc
.data

.code
main2 PROC

mov eax ,1
mov ebx ,1
mov edx ,0 
mov ecx ,7 
beginloop:
	mov edx ,ebx
	add ebx , eax
	mov eax , edx
	call DumpRegs
	loop beginloop
main2 ENDP
END main2
