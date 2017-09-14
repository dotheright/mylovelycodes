/*************************************************************************
    > File Name: syn_thread.c
    > Author: guoqingyao
    > Mail: stepbystepto@163.com 
    > Created Time: 2017年09月02日 星期二 11时46分58秒
linux 多线程需要
使用pthread.h 头文件
链接的时候需要libpthread.a
内部是使用　clone（）实现的
gcc simple_thread.c -lpthread -o simple
 ************************************************************************/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>


void mythread0();
void mythread1();

typedef  void (*pfTHREAD)();


/* 用于设置线程 */
pfTHREAD set_thread(int  choice)
{
   if (0 == choice)
   {
      return mythread0;
   }
   else if(1==choice)
   {
	   return mythread1;
   }
   else
   {
	   return NULL;
   }
}

void mythread0()
{
    int  i =0;

    for( i =0;i<10;i++)
    {
		sleep(2);
        printf("thread000 %dth.\n",i);
    }
}

void mythread1()
{
    int  i =0;

    for( i =0;i<10;i++)
    {
		sleep(1);
        printf("thread111 %dth.\n",i);
    }
}

int main()
{
    int   i ,ret;
    pthread_attr_t attr[2]; 
    pthread_t tid[2]; /*初始化属性值，均设为默认值*/
    
    for (i = 0 ; i < 2 ; i++)
	{
		pfTHREAD  pfthread;
	    pthread_attr_init(&attr[i]);
	    pthread_attr_setscope(&attr[i], PTHREAD_SCOPE_SYSTEM);
	    pthread_attr_setdetachstate(&attr[i], PTHREAD_CREATE_DETACHED);
        pfthread =set_thread(i);
        ret =pthread_create(&tid[i],&attr[i],(void *)pfthread,NULL);
        if (0 != ret)
        {
            printf("pthread create error! ");
            return 1;
        }

        pthread_join(tid[i],NULL);
	}
    for(i=0 ;i <30;i++)
    {
		sleep(1);
        // printf("m%d This is the main process!\n",i);
    }

    return 0;
}


