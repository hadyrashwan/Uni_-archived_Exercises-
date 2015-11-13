INCLUDE Irvine32.inc
.data

str1 byte "strg", 0
.code
main1 PROC
mov ecx , 4
mov ax , 1
l1:
	call SetTextColor
	mov edx, OFFSET str1
	call WriteString
	inc ax
	call Crlf
	loop l1
	
main1 ENDP
END main1