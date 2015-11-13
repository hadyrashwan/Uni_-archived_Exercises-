INCLUDE Irvine32.inc
.code
main1 PROC
	mov al, 35h
	sub al, 25h
	sub al, 5h 
	call DumpRegs

main1 ENDP
END main1