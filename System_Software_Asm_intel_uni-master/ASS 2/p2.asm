
INCLUDE Irvine32.inc
.code
main2 PROC

.DATA
	value1 BYTE 100 ;
	value2 SBYTE 1 ;
	value3 WORD 1 ;
	value4 SWORD 1 ;
	value44 DWORD 1 ;
	value5 SDWORD 1 ;
	value6 FWORD 1 ;
	value7 QWORD 1 ;
	value8 TBYTE 1 ;
	value88 REAL4 1.0 ;
	value9 REAL8 1.0 ;
	value99 REAL10 1.0 ;
.CODE
call DumpRegs

main2 ENDP
END main2