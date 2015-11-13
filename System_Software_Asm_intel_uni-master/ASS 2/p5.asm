INCLUDE Irvine32.inc
.code
main1 PROC
	 myarray word 20 dup(0)
	 arraysize=($-myarray)
	call DumpRegs

main1 ENDP
END main1