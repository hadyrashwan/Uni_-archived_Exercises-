INCLUDE Irvine32.inc
.data

input1stIntMsg BYTE "the 1st number ",0 
input2ndIntMsg BYTE "the 2nd number ",0 
outputSumMsg BYTE "the sum ",0 

num1 DWORD ? 
num2 DWORD ? 
sum	DWORD ? 
.code
main2 PROC 
call Clrscr 

mov dl, 20 
mov dh, 11 
call Gotoxy 

mov edx,OFFSET input1stIntMsg 
call WriteString 

call ReadInt
mov num1, eax 


mov dl, 20 
mov dh, 12 
call Gotoxy 


mov edx,OFFSET input2ndIntMsg 
call WriteString 

call ReadInt 
mov num2, eax 


mov eax, num2 
add	eax, num1 
mov sum, eax 


mov dl, 20 
mov dh, 13 
call Gotoxy

mov edx, OFFSET outputSumMsg 
call WriteString 

mov eax, sum 
call WriteInt 

main2 ENDP
END main2