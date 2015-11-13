INCLUDE Irvine32.inc
.data
A REAL4 2.5
B REAL4 3.5
cc REAL4 78.93
D REAL4 3.76
E REAL4 1.24
F REAL4 ?
G REAL4 ?

.code
main1 PROC

fld a
fadd b
fdiv cc
fstp F
fld d
fsub a
fadd e
fstp G
fld f
fmul g
call WriteFloat

main1 ENDP
END main1