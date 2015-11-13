INCLUDE irvine32.inc
.data
list DWORD 10,60,20,33,72,89,45,65,72,18 
sample DWORD 50
sum DWORD 0 
index DWORD 0 
listsize DWORD ? 

.code
main2 PROC 
mov eax, sizeof list ; list
mov ebx, sizeof sample ; sample
mov ecx, 0
mov edx, 0
mov esi, index ; index
div ebx	
mov listsize, eax
.WHILE ecx < eax
mov edx, list[esi]
.IF (edx < sample) || (edx == sample) 
add edx, sum 
mov sum, edx ; new sum
.ENDIF
add esi, 4
inc ecx 
.ENDW
mov eax, sum 
call writeint
call crlf
exit
main2 ENDP
END main2