; Listing generated by Microsoft (R) Optimizing Compiler Version 19.16.27027.1 

	TITLE	C:\Dev\TheChernoProject\06_How_The_CPlusPlus_Compiler_Works\06_How_The_CPlusPlus_Compiler_Works\Math.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

msvcjmc	SEGMENT
__00AE651C_math@cpp DB 01H
msvcjmc	ENDS
PUBLIC	?Multiply@@YAHXZ				; Multiply
PUBLIC	__JustMyCode_Default
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
; Function compile flags: /Odt
;	COMDAT __JustMyCode_Default
_TEXT	SEGMENT
__JustMyCode_Default PROC				; COMDAT
	push	ebp
	mov	ebp, esp
	pop	ebp
	ret	0
__JustMyCode_Default ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /ZI
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\math.cpp
;	COMDAT ?Multiply@@YAHXZ
_TEXT	SEGMENT
?Multiply@@YAHXZ PROC					; Multiply, COMDAT

; 8    : {

	push	ebp
	mov	ebp, esp
	sub	esp, 64					; 00000040H
	push	ebx
	push	esi
	push	edi
	mov	ecx, OFFSET __00AE651C_math@cpp
	call	@__CheckForDebuggerJustMyCode@4

; 9    : //	return a * b;
; 10   : 	return 5 * 2;

	mov	eax, 10					; 0000000aH

; 11   : }

	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
?Multiply@@YAHXZ ENDP					; Multiply
_TEXT	ENDS
END
