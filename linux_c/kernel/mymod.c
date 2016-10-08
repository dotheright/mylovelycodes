/*************************************************************************
    > File Name: mymod.c
    > Author: guoqingyao
    > Mail: stepbystepto@163.com 
    > Created Time: 2016年08月06日 星期三 20时20分13秒
 ************************************************************************/
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/list.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("GuoQingyao");
MODULE_DESCRIPTION("deal module can not be removed");

static int __init mymod_init(void)
{
        struct module *pmod =NULL;
        
        // 打印本模块的模块名和模块状态
        printk(KERN_ALERT"[insmod mymod] name:%s state:%d\n",THIS_MODULE->name,THIS_MODULE->state);

        // 遍历模块列表，查找target模块
        list_for_each_entry(pmod,THIS_MODULE->list.prev,list)
        {
                if(strcmp(pmod->name,"mymod") ==0)
                { 

                        // 模块名、模块状态、引用计数
                        printk(KERN_ALERT"init     name:%s state:%d refcnt:%u ",pmod->name,pmod->state,module_refcount(pmod));
                        // 把target的引用计数置为0
                        pmod->state =0;
                        
                        // 再看看 模块名、状态、引用计数
                        printk(KERN_ALERT"modified name:%s state:%d refcnt:%u\n",pmod->name,pmod->state,module_refcount(pmod));
                }
        }

        return 0;
}

static void __exit mymod_exit(void)
{
        printk(KERN_ALERT"[rmmod mymod] name:%s state:%d\n",THIS_MODULE->name,THIS_MODULE->state);
}

module_init(mymod_init);
module_exit(mymod_exit);