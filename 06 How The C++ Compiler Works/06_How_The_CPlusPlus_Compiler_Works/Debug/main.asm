; Listing generated by Microsoft (R) Optimizing Compiler Version 19.16.27027.1 

	TITLE	C:\Dev\TheChernoProject\06_How_The_CPlusPlus_Compiler_Works\06_How_The_CPlusPlus_Compiler_Works\main.cpp
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

msvcjmc	SEGMENT
__6BC0FD35_vcruntime_new@h DB 01H
__A73354DD_stdlib@h DB 01H
__188180DA_corecrt_math@h DB 01H
__D23EE329_cstdlib DB 01H
__3736D25A_xtgmath@h DB 01H
__824D367B_cmath DB 01H
__2CC6E67D_corecrt_stdio_config@h DB 01H
__05476D76_corecrt_wstdio@h DB 01H
__A452D4A0_stdio@h DB 01H
__4384A2D9_corecrt_memcpy_s@h DB 01H
__2088847F_corecrt_memory@h DB 01H
__4E51A221_corecrt_wstring@h DB 01H
__2140C079_string@h DB 01H
__5ECFF36E_type_traits DB 01H
__331E732B_malloc@h DB 01H
__9BB4E194_vcruntime_exception@h DB 01H
__7949CB39_exception DB 01H
__41381B41_corecrt_wconio@h DB 01H
__F0CC4AC4_corecrt_wio@h DB 01H
__C0802A2B_corecrt_wtime@h DB 01H
__A40A425D_stat@h DB 01H
__5A74375D_wchar@h DB 01H
__B2D003D7_limits DB 01H
__7E39D651_iosfwd DB 01H
__CDB00636_xutility DB 01H
__C334353D_xatomic0@h DB 01H
__1CE3C767_xmemory0 DB 01H
__F007F164_stdexcept DB 01H
__C42C8B73_vcruntime_typeinfo@h DB 01H
__7B7A869E_ctype@h DB 01H
__A2E616E7_xlocinfo DB 01H
__0E7E0F59_memory DB 01H
__223B5856_xfacet DB 01H
__244BF7CC_xlocale DB 01H
__420D52D3_xcall_once@h DB 01H
__FD5040F3_system_error DB 01H
__9B0361F4_xiosbase DB 01H
__BACC91DB_xlocnum DB 01H
__D1FEDD45_ios DB 01H
__30A681F9_main@cpp DB 01H
__FB7583FD_xstring DB 01H
__548B1832_istream DB 01H
__375B2D08_ostream DB 01H
__F2A749D8_streambuf DB 01H
__E53366A2_utility DB 01H
__122CF1B0_xstddef DB 01H
msvcjmc	ENDS
PUBLIC	?__empty_global_delete@@YAXPAX@Z		; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPAXI@Z		; __empty_global_delete
PUBLIC	_main
PUBLIC	__JustMyCode_Default
PUBLIC	??_C@_0N@GCDOMLDM@Hello?5World?$CB@		; `string'
EXTRN	__imp_?get@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEHXZ:PROC
EXTRN	?Log@@YAXPBD@Z:PROC				; Log
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
EXTRN	__imp_?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A:BYTE
;	COMDAT ??_C@_0N@GCDOMLDM@Hello?5World?$CB@
CONST	SEGMENT
??_C@_0N@GCDOMLDM@Hello?5World?$CB@ DB 'Hello World!', 00H ; `string'
CONST	ENDS
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
; Function compile flags: /Ogtp
;	COMDAT _main
_TEXT	SEGMENT
_main	PROC						; COMDAT
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\main.cpp
	mov	ecx, OFFSET __30A681F9_main@cpp
	call	@__CheckForDebuggerJustMyCode@4
	push	OFFSET ??_C@_0N@GCDOMLDM@Hello?5World?$CB@
	call	?Log@@YAXPBD@Z				; Log
	mov	ecx, DWORD PTR __imp_?cin@std@@3V?$basic_istream@DU?$char_traits@D@std@@@1@A
	add	esp, 4
	call	DWORD PTR __imp_?get@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEHXZ
	xor	eax, eax
	ret	0
_main	ENDP
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ?__empty_global_delete@@YAXPAXI@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
___formal$ = 12						; size = 4
?__empty_global_delete@@YAXPAXI@Z PROC			; __empty_global_delete, COMDAT
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\main.cpp
	mov	ecx, OFFSET __30A681F9_main@cpp
	jmp	@__CheckForDebuggerJustMyCode@4
?__empty_global_delete@@YAXPAXI@Z ENDP			; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ?__empty_global_delete@@YAXPAX@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
?__empty_global_delete@@YAXPAX@Z PROC			; __empty_global_delete, COMDAT
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\main.cpp
	mov	ecx, OFFSET __30A681F9_main@cpp
	jmp	@__CheckForDebuggerJustMyCode@4
?__empty_global_delete@@YAXPAX@Z ENDP			; __empty_global_delete
_TEXT	ENDS
END