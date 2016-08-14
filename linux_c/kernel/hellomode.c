/*************************************************************************
	> File Name: hellomode.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年07月06日 星期三 17时19分57秒
 ************************************************************************/

#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
//#MODULE_LICENCE("GPL");

static int __init lkp_init(void )
{
	printk("<1> Hello world ! from kernel space!");
    return 0;
}

static void __init lkp_exit(void )
{
	printk("<1> Byebye world ! from kernel space!");
    return ;
}

module_init(lkp_init);
module_exit(lkp_exit);

