.include "o/libc/nt/codegen.inc"
.imp	kernel32,__imp_VirtualFree,VirtualFree,0

	.text.windows
VirtualFree:
	push	%rbp
	mov	%rsp,%rbp
	.profilable
	mov	__imp_VirtualFree(%rip),%rax
	jmp	__sysv2nt
	.endfn	VirtualFree,globl
	.previous
