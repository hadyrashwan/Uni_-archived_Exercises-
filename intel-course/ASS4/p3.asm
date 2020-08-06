INCLUDE Irvine32.inc
.data
randStr  byte 10 DUP(0),0

.code
main4 PROC 
mov  ecx,20
L1:
   push ecx
   mov  ecx,10
   mov  esi,OFFSET randStr
    L2:
    mov eax,26
    call RandomRange
    add  eax,'A'
    mov  [esi],al
    inc  esi
    loop L2
   mov edx,OFFSET randStr
   call WriteString
   call Crlf
   pop  ecx
   loop L1


main4 ENDP
END main4