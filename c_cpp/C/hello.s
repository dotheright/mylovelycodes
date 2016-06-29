	.file	"hello.c"
	.text
.globl first
	.type	first, @function
first:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$168, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$128, 8(%esp)
	movl	$65, 4(%esp)
	leal	-140(%ebp), %eax
	movl	%eax, (%esp)
	call	memset
	movl	-12(%ebp), %eax
	xorl	%gs:20, %eax
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	ret
	.size	first, .-first
	.section	.rodata
.LC0:
	.string	" hello %p \r\n "
	.text
.globl uninit
	.type	uninit, @function
uninit:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	$.LC0, %eax
	movl	-12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	leave
	ret
	.size	uninit, .-uninit
	.section	.rodata
.LC1:
	.string	"\r\n %d "
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$1, 28(%esp)
	movl	$20, 24(%esp)
	addl	$1, 24(%esp)
	movl	24(%esp), %eax
	movl	28(%esp), %edx
	addl	%eax, %edx
	addl	$1, 28(%esp)
	movl	$.LC1, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5.1) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
