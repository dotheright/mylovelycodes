	.file	"count.c"
	.text
.globl main
	.type	main, @function
main:
#for i & j 创建8字节局部内存区
	pushl	%ebp            #将栈基址指针入栈      
	movl	%esp, %ebp      #将栈指针移入基址指针
	subl	$16, %esp       #从ebp中，分配16字节的stack memory
	movl	$0, -4(%ebp)    #put 0 in  addrass (ebp-4);that is to say i=0;
	movl	$0, -8(%ebp)    #put 0 in  addrass (ebp-8);that is to say j=0;
	movl	$0, -4(%ebp)    #???
	jmp	.L2
.L3: 				#this is for loop body
	movl	-4(%ebp), %eax  #put the value of "i" into eax
	addl	%eax, -8(%ebp)  #add i and j
	addl	$1, -4(%ebp)    #i+1
.L2:                            #this is for loop test
	cmpl	$7, -4(%ebp)    #if i < 7 jump .L3 else ???
	jle	.L3
	movl	$0, %eax        #put 0 int eax ; eax  init
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5.1) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
