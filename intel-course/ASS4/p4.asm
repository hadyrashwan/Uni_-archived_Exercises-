INCLUDE Irvine32.inc
.data
str1 byte "hady",0
.code
main4 PROC
mov eax ,0
mov ecx ,16
l1:
	call SetTextColor
	mov edx, OFFSET str1
	call WriteString
	inc eax
	call Crlf
	loop L1
main4 ENDP
END main4