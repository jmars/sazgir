.include "o/libc/nt/codegen.inc"
.imp	user32,__imp_InsertMenuW,InsertMenuW,2044

	.text.windows
InsertMenu:
	push	%rbp
	mov	%rsp,%rbp
	.profilable
	mov	__imp_InsertMenuW(%rip),%rax
	jmp	__sysv2nt6
	.endfn	InsertMenu,globl
	.previous
