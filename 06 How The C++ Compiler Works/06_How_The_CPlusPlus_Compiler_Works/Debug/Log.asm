; Listing generated by Microsoft (R) Optimizing Compiler Version 19.16.27027.1 

	TITLE	C:\Dev\TheChernoProject\06_How_The_CPlusPlus_Compiler_Works\06_How_The_CPlusPlus_Compiler_Works\Log.cpp
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
__B28AC306_log@cpp DB 01H
__FB7583FD_xstring DB 01H
__548B1832_istream DB 01H
__375B2D08_ostream DB 01H
__F2A749D8_streambuf DB 01H
__E53366A2_utility DB 01H
__122CF1B0_xstddef DB 01H
msvcjmc	ENDS
PUBLIC	?__empty_global_delete@@YAXPAX@Z		; __empty_global_delete
PUBLIC	?__empty_global_delete@@YAXPAXI@Z		; __empty_global_delete
PUBLIC	?Log@@YAXPBD@Z					; Log
PUBLIC	??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z ; std::operator<<<std::char_traits<char> >
PUBLIC	??$endl@DU?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@@Z ; std::endl<char,std::char_traits<char> >
PUBLIC	??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::~_Sentry_base
PUBLIC	??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z ; std::basic_ostream<char,std::char_traits<char> >::sentry::sentry
PUBLIC	??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ; std::basic_ostream<char,std::char_traits<char> >::sentry::~sentry
PUBLIC	__JustMyCode_Default
EXTRN	___std_terminate:PROC
EXTRN	?uncaught_exception@std@@YA_NXZ:PROC		; std::uncaught_exception
EXTRN	__imp_?good@ios_base@std@@QBE_NXZ:PROC
EXTRN	__imp_?flags@ios_base@std@@QBEHXZ:PROC
EXTRN	__imp_?width@ios_base@std@@QBE_JXZ:PROC
EXTRN	__imp_?width@ios_base@std@@QAE_J_J@Z:PROC
EXTRN	__imp_?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z:PROC
EXTRN	__imp_?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z:PROC
EXTRN	__imp_?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z:PROC
EXTRN	__imp_?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ:PROC
EXTRN	__imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ:PROC
EXTRN	__imp_?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ:PROC
EXTRN	__imp_?widen@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDD@Z:PROC
EXTRN	__imp_?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ:PROC
EXTRN	__imp_??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z:PROC
EXTRN	__imp_?put@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@D@Z:PROC
EXTRN	__imp_?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ:PROC
EXTRN	@__CheckForDebuggerJustMyCode@4:PROC
EXTRN	@__security_check_cookie@4:PROC
EXTRN	___CxxFrameHandler3:PROC
EXTRN	__imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A:BYTE
EXTRN	___security_cookie:DWORD
;	COMDAT xdata$x
xdata$x	SEGMENT
__unwindtable$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ DD 0ffffffffH
	DD	FLAT:___std_terminate
__ehfuncinfo$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ DD 019930522H
	DD	01H
	DD	FLAT:__unwindtable$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	05H
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__unwindtable$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z DD 0ffffffffH
	DD	FLAT:__unwindfunclet$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z$0
__ehfuncinfo$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z DD 019930522H
	DD	01H
	DD	FLAT:__unwindtable$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	01H
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ DD 019930522H
	DD	00H
	DD	00H
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	05H
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__catchsym$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$10 DD 040H
	DD	00H
	DD	00H
	DD	FLAT:__catch$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$0
__tryblocktable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z DD 01H
	DD	01H
	DD	02H
	DD	01H
	DD	FLAT:__catchsym$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$10
__ehfuncinfo$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z DD 019930522H
	DD	05H
	DD	FLAT:__unwindtable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
	DD	01H
	DD	FLAT:__tryblocktable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
	DD	2 DUP(00H)
	DD	00H
	DD	01H
__unwindtable$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z DD 0ffffffffH
	DD	FLAT:__unwindfunclet$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$2
	DD	00H
	DD	00H
	DD	00H
	DD	00H
	DD	0ffffffffH
	DD	FLAT:___std_terminate
	DD	03H
	DD	FLAT:___std_terminate
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$?eof@?$char_traits@D@std@@SAHXZ DD 019930522H
	DD	00H
	DD	00H
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	05H
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z DD 019930522H
	DD	00H
	DD	00H
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	05H
xdata$x	ENDS
;	COMDAT xdata$x
xdata$x	SEGMENT
__ehfuncinfo$?length@?$char_traits@D@std@@SAIQBD@Z DD 019930522H
	DD	00H
	DD	00H
	DD	2 DUP(00H)
	DD	2 DUP(00H)
	DD	00H
	DD	05H
xdata$x	ENDS
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
;	COMDAT ??Bsentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QBE_NXZ
_TEXT	SEGMENT
??Bsentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QBE_NXZ PROC ; std::basic_ostream<char,std::char_traits<char> >::sentry::operator bool, COMDAT
; _this$ = ecx
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 152
	push	esi
	mov	esi, ecx
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
	mov	al, BYTE PTR [esi+4]
	pop	esi
	ret	0
??Bsentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QBE_NXZ ENDP ; std::basic_ostream<char,std::char_traits<char> >::sentry::operator bool
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
_TEXT	SEGMENT
__$EHRec$ = -12						; size = 12
??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ PROC ; std::basic_ostream<char,std::char_traits<char> >::sentry::~sentry, COMDAT
; _this$ = ecx
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 135
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
	mov	eax, DWORD PTR fs:0
	push	eax
	push	esi
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	esi, ecx
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
	call	?uncaught_exception@std@@YA_NXZ		; std::uncaught_exception
	test	al, al
	jne	SHORT $LN2@sentry
; Line 139
	mov	ecx, DWORD PTR [esi]
	call	DWORD PTR __imp_?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ
$LN2@sentry:
; Line 106
	mov	edx, DWORD PTR [esi]
	mov	DWORD PTR __$EHRec$[ebp+8], 0
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	test	eax, eax
	je	SHORT $LN5@sentry
; Line 107
	mov	edx, DWORD PTR [esi]
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	mov	ecx, eax
	mov	edx, DWORD PTR [eax]
	call	DWORD PTR [edx+8]
$LN5@sentry:
; Line 144
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	pop	esi
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__ehhandler$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-8]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
	jmp	___CxxFrameHandler3
text$x	ENDS
??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ENDP ; std::basic_ostream<char,std::char_traits<char> >::sentry::~sentry
; Function compile flags: /Ogtp
;	COMDAT ??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z
_TEXT	SEGMENT
_this$ = -16						; size = 4
__$EHRec$ = -12						; size = 12
__Ostr$ = 8						; size = 4
??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z PROC ; std::basic_ostream<char,std::char_traits<char> >::sentry::sentry, COMDAT
; _this$ = ecx
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 121
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z
	mov	eax, DWORD PTR fs:0
	push	eax
	push	ecx
	push	esi
	push	edi
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	edi, ecx
	mov	DWORD PTR _this$[ebp], edi
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
; Line 98
	mov	esi, DWORD PTR __Ostr$[ebp]
	mov	DWORD PTR [edi], esi
; Line 100
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	test	eax, eax
	je	SHORT $LN6@sentry
; Line 101
	mov	edx, DWORD PTR [edi]
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	mov	ecx, eax
	mov	edx, DWORD PTR [eax]
	call	DWORD PTR [edx+4]
$LN6@sentry:
; Line 122
	mov	eax, DWORD PTR [esi]
	mov	DWORD PTR __$EHRec$[ebp+8], 0
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?good@ios_base@std@@QBE_NXZ
	test	al, al
	je	SHORT $LN2@sentry
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ
	test	eax, eax
	je	SHORT $LN2@sentry
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ
	cmp	eax, esi
	je	SHORT $LN2@sentry
; Line 123
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?tie@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_ostream@DU?$char_traits@D@std@@@2@XZ
	mov	ecx, eax
	call	DWORD PTR __imp_?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ
$LN2@sentry:
; Line 124
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?good@ios_base@std@@QBE_NXZ
	mov	BYTE PTR [edi+4], al
; Line 125
	mov	eax, edi
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	pop	edi
	pop	esi
	mov	esp, ebp
	pop	ebp
	ret	4
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__unwindfunclet$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z$0:
	mov	ecx, DWORD PTR _this$[ebp]
	jmp	??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::~_Sentry_base
__ehhandler$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-16]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z
	jmp	___CxxFrameHandler3
text$x	ENDS
??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z ENDP ; std::basic_ostream<char,std::char_traits<char> >::sentry::sentry
; Function compile flags: /Ogtp
;	COMDAT ??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
_TEXT	SEGMENT
__$EHRec$ = -12						; size = 12
??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ PROC ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::~_Sentry_base, COMDAT
; _this$ = ecx
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 105
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
	mov	eax, DWORD PTR fs:0
	push	eax
	push	esi
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	esi, ecx
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
	mov	edx, DWORD PTR [esi]
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	test	eax, eax
	je	SHORT $LN2@Sentry_bas
; Line 107
	mov	edx, DWORD PTR [esi]
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	mov	ecx, eax
	mov	edx, DWORD PTR [eax]
	call	DWORD PTR [edx+8]
$LN2@Sentry_bas:
; Line 108
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	pop	esi
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__ehhandler$??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-8]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ
	jmp	___CxxFrameHandler3
text$x	ENDS
??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ENDP ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::~_Sentry_base
; Function compile flags: /Ogtp
;	COMDAT ??0_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z
_TEXT	SEGMENT
__Ostr$ = 8						; size = 4
??0_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z PROC ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::_Sentry_base, COMDAT
; _this$ = ecx
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 99
	push	ebp
	mov	ebp, esp
	push	esi
	mov	esi, ecx
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
	mov	edx, DWORD PTR __Ostr$[ebp]
	mov	DWORD PTR [esi], edx
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	test	eax, eax
	je	SHORT $LN4@Sentry_bas
; Line 101
	mov	edx, DWORD PTR [esi]
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	mov	ecx, eax
	mov	edx, DWORD PTR [eax]
	call	DWORD PTR [edx+4]
$LN4@Sentry_bas:
; Line 102
	mov	eax, esi
	pop	esi
	pop	ebp
	ret	4
??0_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z ENDP ; std::basic_ostream<char,std::char_traits<char> >::_Sentry_base::_Sentry_base
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ??$endl@DU?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@@Z
_TEXT	SEGMENT
__Ostr$ = 8						; size = 4
??$endl@DU?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@@Z PROC ; std::endl<char,std::char_traits<char> >, COMDAT
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 1019
	push	ebp
	mov	ebp, esp
	push	esi
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
	mov	esi, DWORD PTR __Ostr$[ebp]
	push	10					; 0000000aH
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?widen@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDD@Z
	movzx	ecx, al
	push	ecx
	mov	ecx, esi
	call	DWORD PTR __imp_?put@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@D@Z
	mov	ecx, esi
	call	DWORD PTR __imp_?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ
	mov	eax, esi
	pop	esi
; Line 1023
	pop	ebp
	ret	0
??$endl@DU?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@@Z ENDP ; std::endl<char,std::char_traits<char> >
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
_TEXT	SEGMENT
__Ok$ = -40						; size = 8
__Pad$ = -32						; size = 8
tv345 = -28						; size = 4
tv188 = -28						; size = 4
__Count$2$ = -24					; size = 4
__State$ = -20						; size = 4
__$EHRec$ = -16						; size = 16
__Ostr$ = 8						; size = 4
__Val$ = 12						; size = 4
??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z PROC ; std::operator<<<std::char_traits<char> >, COMDAT
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 790
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
	mov	eax, DWORD PTR fs:0
	push	eax
	sub	esp, 28					; 0000001cH
	push	ebx
	push	esi
	push	edi
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp+4]
	mov	DWORD PTR fs:0, eax
	mov	DWORD PTR __$EHRec$[ebp], esp
	mov	ecx, OFFSET __375B2D08_ostream
	call	@__CheckForDebuggerJustMyCode@4
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\iosfwd
; Line 464
	mov	ebx, DWORD PTR __Val$[ebp]
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 793
	mov	DWORD PTR __State$[ebp], 0
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\iosfwd
; Line 464
	lea	ecx, DWORD PTR [ebx+1]
$LL59@operator:
	mov	al, BYTE PTR [ebx]
	inc	ebx
	test	al, al
	jne	SHORT $LL59@operator
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 795
	mov	esi, DWORD PTR __Ostr$[ebp]
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\iosfwd
; Line 464
	sub	ebx, ecx
	mov	DWORD PTR __Count$2$[ebp], ebx
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\ostream
; Line 795
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?width@ios_base@std@@QBE_JXZ
	test	edx, edx
	jl	SHORT $LN17@operator
	jg	SHORT $LN60@operator
	test	eax, eax
	je	SHORT $LN17@operator
$LN60@operator:
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?width@ios_base@std@@QBE_JXZ
	test	edx, edx
	jl	SHORT $LN17@operator
	jg	SHORT $LN61@operator
	cmp	eax, ebx
	jbe	SHORT $LN17@operator
$LN61@operator:
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?width@ios_base@std@@QBE_JXZ
	mov	edi, eax
	mov	ebx, edx
	sub	edi, DWORD PTR __Count$2$[ebp]
	sbb	ebx, 0
	jmp	SHORT $LN18@operator
$LN17@operator:
	xorps	xmm0, xmm0
	movlpd	QWORD PTR __Pad$[ebp], xmm0
	mov	ebx, DWORD PTR __Pad$[ebp+4]
	mov	edi, DWORD PTR __Pad$[ebp]
$LN18@operator:
; Line 797
	push	esi
	lea	ecx, DWORD PTR __Ok$[ebp]
	call	??0sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@AAV12@@Z ; std::basic_ostream<char,std::char_traits<char> >::sentry::sentry
; Line 799
	cmp	BYTE PTR __Ok$[ebp+4], 0
	mov	DWORD PTR __$EHRec$[ebp+12], 0
	jne	SHORT $LN8@operator
; Line 800
	mov	ebx, 4
; Line 801
	jmp	$LN22@operator
$LN8@operator:
; Line 804
	mov	eax, DWORD PTR [esi]
	mov	BYTE PTR __$EHRec$[ebp+12], 1
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?flags@ios_base@std@@QBEHXZ
	and	eax, 448				; 000001c0H
	cmp	eax, 64					; 00000040H
	je	SHORT $LN3@operator
$LL4@operator:
; Line 805
	test	ebx, ebx
	jl	SHORT $LN3@operator
	jg	SHORT $LN62@operator
	test	edi, edi
	je	SHORT $LN3@operator
$LN62@operator:
; Line 806
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ
	mov	BYTE PTR tv345[ebp], al
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	push	DWORD PTR tv345[ebp]
	mov	ecx, eax
	call	DWORD PTR __imp_?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z
	cmp	eax, -1
	jne	SHORT $LN2@operator
; Line 809
	mov	ebx, 4
	mov	DWORD PTR __State$[ebp], ebx
; Line 810
	jmp	SHORT $LN6@operator
$LN2@operator:
; Line 805
	add	edi, -1
	adc	ebx, -1
	jmp	SHORT $LL4@operator
$LN3@operator:
; Line 814
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	push	0
	push	DWORD PTR __Count$2$[ebp]
	mov	ecx, eax
	push	DWORD PTR __Val$[ebp]
	call	DWORD PTR __imp_?sputn@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAE_JPBD_J@Z
	cmp	eax, DWORD PTR __Count$2$[ebp]
	jne	SHORT $LN63@operator
	test	edx, edx
	jne	SHORT $LN63@operator
$LL65@operator:
; Line 818
	test	ebx, ebx
	jl	SHORT $LN69@operator
	jg	SHORT $LN64@operator
	test	edi, edi
	je	SHORT $LN69@operator
$LN64@operator:
; Line 819
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ
	mov	BYTE PTR tv188[ebp], al
	mov	eax, DWORD PTR [esi]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	push	DWORD PTR tv188[ebp]
	mov	ecx, eax
	call	DWORD PTR __imp_?sputc@?$basic_streambuf@DU?$char_traits@D@std@@@std@@QAEHD@Z
	cmp	eax, -1
	jne	SHORT $LN5@operator
$LN63@operator:
; Line 825
	mov	ebx, 4
	mov	DWORD PTR __State$[ebp], ebx
	jmp	SHORT $LN6@operator
$LN5@operator:
; Line 818
	add	edi, -1
	adc	ebx, -1
	jmp	SHORT $LL65@operator
$LN69@operator:
; Line 825
	xor	ebx, ebx
$LN6@operator:
	mov	eax, DWORD PTR [esi]
	push	0
	push	0
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?width@ios_base@std@@QAE_J_J@Z
	jmp	SHORT $LN71@operator
__catch$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$0:
; Line 826
	mov	edx, DWORD PTR __Ostr$[ebp]
	push	1
	push	4
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z
	mov	eax, $LN23@operator
	ret	0
$LN23@operator:
	mov	esi, DWORD PTR __Ostr$[ebp]
	mov	ebx, DWORD PTR __State$[ebp]
$LN71@operator:
; Line 829
	mov	DWORD PTR __$EHRec$[ebp+12], 0
$LN22@operator:
	mov	eax, DWORD PTR [esi]
	push	0
	push	ebx
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, esi
	call	DWORD PTR __imp_?setstate@?$basic_ios@DU?$char_traits@D@std@@@std@@QAEXH_N@Z
; Line 135
	mov	DWORD PTR __$EHRec$[ebp+12], 3
; Line 137
	call	?uncaught_exception@std@@YA_NXZ		; std::uncaught_exception
	test	al, al
	jne	SHORT $LN42@operator
; Line 139
	mov	ecx, DWORD PTR __Ok$[ebp]
	call	DWORD PTR __imp_?_Osfx@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEXXZ
$LN42@operator:
; Line 106
	mov	edx, DWORD PTR __Ok$[ebp]
	mov	BYTE PTR __$EHRec$[ebp+12], 4
	mov	eax, DWORD PTR [edx]
	mov	ecx, DWORD PTR [eax+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	test	eax, eax
	je	SHORT $LN66@operator
; Line 107
	mov	edx, DWORD PTR __Ok$[ebp]
	mov	ecx, DWORD PTR [edx]
	mov	ecx, DWORD PTR [ecx+4]
	add	ecx, edx
	call	DWORD PTR __imp_?rdbuf@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEPAV?$basic_streambuf@DU?$char_traits@D@std@@@2@XZ
	mov	ecx, eax
	mov	edx, DWORD PTR [eax]
	call	DWORD PTR [edx+8]
$LN66@operator:
; Line 831
	mov	eax, esi
	mov	ecx, DWORD PTR __$EHRec$[ebp+4]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__unwindfunclet$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z$2:
	lea	ecx, DWORD PTR __Ok$[ebp]
	jmp	??1sentry@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ ; std::basic_ostream<char,std::char_traits<char> >::sentry::~sentry
__ehhandler$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-44]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z
	jmp	___CxxFrameHandler3
text$x	ENDS
??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z ENDP ; std::operator<<<std::char_traits<char> >
; Function compile flags: /Ogtp
;	COMDAT ?Log@@YAXPBD@Z
_TEXT	SEGMENT
_message$ = 8						; size = 4
?Log@@YAXPBD@Z PROC					; Log, COMDAT
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\log.cpp
; Line 4
	push	ebp
	mov	ebp, esp
	mov	ecx, OFFSET __B28AC306_log@cpp
	call	@__CheckForDebuggerJustMyCode@4
	push	OFFSET ??$endl@DU?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@@Z ; std::endl<char,std::char_traits<char> >
	push	DWORD PTR _message$[ebp]
	push	DWORD PTR __imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A
	call	??$?6U?$char_traits@D@std@@@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z ; std::operator<<<std::char_traits<char> >
	add	esp, 8
	mov	ecx, eax
	call	DWORD PTR __imp_??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z
; Line 6
	pop	ebp
	ret	0
?Log@@YAXPBD@Z ENDP					; Log
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ?eof@?$char_traits@D@std@@SAHXZ
_TEXT	SEGMENT
__$EHRec$ = -12						; size = 12
?eof@?$char_traits@D@std@@SAHXZ PROC			; std::char_traits<char>::eof, COMDAT
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\iosfwd
; Line 540
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$?eof@?$char_traits@D@std@@SAHXZ
	mov	eax, DWORD PTR fs:0
	push	eax
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	ecx, OFFSET __7E39D651_iosfwd
	call	@__CheckForDebuggerJustMyCode@4
	or	eax, -1
; Line 542
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__ehhandler$?eof@?$char_traits@D@std@@SAHXZ:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-4]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$?eof@?$char_traits@D@std@@SAHXZ
	jmp	___CxxFrameHandler3
text$x	ENDS
?eof@?$char_traits@D@std@@SAHXZ ENDP			; std::char_traits<char>::eof
; Function compile flags: /Ogtp
;	COMDAT ?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z
_TEXT	SEGMENT
__$EHRec$ = -12						; size = 12
__Left$ = 8						; size = 4
__Right$ = 12						; size = 4
?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z PROC	; std::char_traits<char>::eq_int_type, COMDAT
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\iosfwd
; Line 530
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z
	mov	eax, DWORD PTR fs:0
	push	eax
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	ecx, OFFSET __7E39D651_iosfwd
	call	@__CheckForDebuggerJustMyCode@4
	mov	eax, DWORD PTR __Left$[ebp]
	mov	ecx, DWORD PTR [eax]
	mov	eax, DWORD PTR __Right$[ebp]
	cmp	ecx, DWORD PTR [eax]
	sete	al
; Line 532
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__ehhandler$?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-4]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z
	jmp	___CxxFrameHandler3
text$x	ENDS
?eq_int_type@?$char_traits@D@std@@SA_NABH0@Z ENDP	; std::char_traits<char>::eq_int_type
; Function compile flags: /Ogtp
;	COMDAT ?length@?$char_traits@D@std@@SAIQBD@Z
_TEXT	SEGMENT
__$EHRec$ = -12						; size = 12
__First$ = 8						; size = 4
?length@?$char_traits@D@std@@SAIQBD@Z PROC		; std::char_traits<char>::length, COMDAT
; File c:\program files (x86)\microsoft visual studio\2017\community\vc\tools\msvc\14.16.27023\include\iosfwd
; Line 460
	push	ebp
	mov	ebp, esp
	push	-1
	push	__ehhandler$?length@?$char_traits@D@std@@SAIQBD@Z
	mov	eax, DWORD PTR fs:0
	push	eax
	mov	eax, DWORD PTR ___security_cookie
	xor	eax, ebp
	push	eax
	lea	eax, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, eax
	mov	ecx, OFFSET __7E39D651_iosfwd
	call	@__CheckForDebuggerJustMyCode@4
	mov	eax, DWORD PTR __First$[ebp]
	lea	edx, DWORD PTR [eax+1]
$LL3@length:
; Line 464
	mov	cl, BYTE PTR [eax]
	inc	eax
	test	cl, cl
	jne	SHORT $LL3@length
	sub	eax, edx
; Line 466
	mov	ecx, DWORD PTR __$EHRec$[ebp]
	mov	DWORD PTR fs:0, ecx
	pop	ecx
	mov	esp, ebp
	pop	ebp
	ret	0
_TEXT	ENDS
;	COMDAT text$x
text$x	SEGMENT
__ehhandler$?length@?$char_traits@D@std@@SAIQBD@Z:
	mov	edx, DWORD PTR [esp+8]
	lea	eax, DWORD PTR [edx+12]
	mov	ecx, DWORD PTR [edx-4]
	xor	ecx, eax
	call	@__security_check_cookie@4
	mov	eax, OFFSET __ehfuncinfo$?length@?$char_traits@D@std@@SAIQBD@Z
	jmp	___CxxFrameHandler3
text$x	ENDS
?length@?$char_traits@D@std@@SAIQBD@Z ENDP		; std::char_traits<char>::length
; Function compile flags: /Ogtp
;	COMDAT ?__empty_global_delete@@YAXPAXI@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
___formal$ = 12						; size = 4
?__empty_global_delete@@YAXPAXI@Z PROC			; __empty_global_delete, COMDAT
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\log.cpp
	mov	ecx, OFFSET __B28AC306_log@cpp
	jmp	@__CheckForDebuggerJustMyCode@4
?__empty_global_delete@@YAXPAXI@Z ENDP			; __empty_global_delete
_TEXT	ENDS
; Function compile flags: /Ogtp
;	COMDAT ?__empty_global_delete@@YAXPAX@Z
_TEXT	SEGMENT
___formal$ = 8						; size = 4
?__empty_global_delete@@YAXPAX@Z PROC			; __empty_global_delete, COMDAT
; File c:\dev\thechernoproject\06_how_the_cplusplus_compiler_works\06_how_the_cplusplus_compiler_works\log.cpp
	mov	ecx, OFFSET __B28AC306_log@cpp
	jmp	@__CheckForDebuggerJustMyCode@4
?__empty_global_delete@@YAXPAX@Z ENDP			; __empty_global_delete
_TEXT	ENDS
END
