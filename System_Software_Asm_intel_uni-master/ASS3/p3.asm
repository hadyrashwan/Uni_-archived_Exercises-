INCLUDE Irvine32.inc
.data
val1 SDWORD 8 
val2 SDWORD -15 
val3 SDWORD 20 
.code
main3 PROC
mov eax ,0
neg val2 
add eax , val2
add eax , 7
sub eax , val3
add eax , val1
call DumpRegs
main3 ENDP
END main3