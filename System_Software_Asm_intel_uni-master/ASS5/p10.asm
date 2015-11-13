INCLUDE irvine32.inc
.data
n3 DWORD 0
n1 DWORD 0
f2 DWORD 0
.code
main10 PROC 

mov eax, 1
mov ebx, 1
call WriteInt
call Crlf
call Crlf
call WriteInt
call Crlf
call Crlf

L1:
mov edx,eax
add edx,ebx
pushfd
mov eax,edx
call WriteInt
call Crlf
call Crlf
mov eax,ebx
mov ebx,edx

popfd
jnc L1
main10 ENDP
END main10