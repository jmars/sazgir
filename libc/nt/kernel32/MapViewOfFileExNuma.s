.include "o/libc/nt/codegen.inc"
.imp	kernel32,__imp_MapViewOfFileExNuma,MapViewOfFileExNuma,0

	.text.windows
__MapViewOfFileExNuma:
	push	%rbp
	mov	%rsp,%rbp
	.profilable
	mov	__imp_MapViewOfFileExNuma(%rip),%rax
	jmp	__sysv2nt8
	.endfn	__MapViewOfFileExNuma,globl
	.previous
