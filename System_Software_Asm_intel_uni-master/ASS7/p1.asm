INCLUDE Irvine32.inc
.data
X REAL8 2.82
Y REAL8 4.56
xs BYTE  "X is lower",0dh,0ah,0
xns BYTE  "X is not lower",0dh,0ah,0
.code
main1 PROC
FLD Y
FLD X
fcom
fnstsw ax 
sahf
ja l1
mov edx,OFFSET xs
jmp saa
l1:
	mov edx,OFFSET xns
saa:
	call writestring
	

main1 ENDP
END main1