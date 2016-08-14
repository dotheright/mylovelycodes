/*************************************************************************
    > File Name: simple_thread.c
    > Author: guoqingyao
    > Mail: stepbystepto@163.com 
    > Created Time: 2016年08月02日 星期二 11时46分58秒
linux 多线程需要
使用pthread.h 头文件
链接的时候需要libpthread.a
内部是使用　clone（）实现的
gcc simple_thread.c -lpthread -o simple
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>

void thread()
{
    int  i =0;

    for( i =0;i<10;i++)
    {
        printf("s%d This is a thread.\n",i);
    }
}

int main()
{
    int  i ,ret;
    pthread_attr_t attr; 
    pthread_t tid; /*初始化属性值，均设为默认值*/
    
    pthread_attr_init(&attr);
    pthread_attr_setscope(&attr, PTHREAD_SCOPE_SYSTEM);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    //pthread_create(&tid, &attr, (void *) my_function, NULL); 
    ret =pthread_create(&tid,&attr,(void *)thread,NULL);
    if (0 != ret)
    {
        printf("pthread create error! ");
        return 1;
    }

    pthread_join(tid,NULL);
    for(i=0 ;i <30;i++)
    {
        printf("m%d This is the main process!\n",i);
    }

    return 0;
}


