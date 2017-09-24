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

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#include <stdlib.h>
#include "my_list.h"
#include "assert.h" 

#define MAX_STU  128
#define MAX_NAME_LEN 32
#define MAX_ID_LEN 12

void mythread0();
void mythread1();

typedef  void (*pfTHREAD)();

LIST_HEAD g_head;

typedef struct stud
{
    LIST_HEAD list;
    char name[MAX_NAME_LEN];
    char stu_number[MAX_ID_LEN];
}STUDENT;

STUDENT *g_pstStudent = NULL;

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
    LIST_HEAD *pLTmp;
    STUDENT *entry;

    list_for_each(pLTmp,&g_head)
    {
        sleep(10.5);
        list_del(&g_pstStudent[9].list);
    }
}

void mythread1()
{    
    LIST_HEAD *pLTmp;
    STUDENT *entry;

    list_for_each(pLTmp,&g_head)
    {
    	sleep(1);
        entry=list_entry(pLTmp,struct stud,list);
        printf("1111111111111 name: %s\n",entry->name);
        printf("1111111 stu_number: %s\n",entry->stu_number);
    }
}

int main()
{
    int i ,ret;
    pthread_attr_t attr[2]; 
    pthread_t tid[2]; /*初始化属性值，均设为默认值*/

    INIT_LIST_HEAD(&g_head);
    STUDENT *g_pstStudent =(STUDENT *)malloc( MAX_STU * sizeof(STUDENT));
    if(NULL == g_pstStudent )
    {
        assert(0);
        return -1;
    }    

    for (i = 0 ; i< MAX_STU ; i++ )
    {
        sprintf(g_pstStudent[i].name ,"name%d",i);
        sprintf(g_pstStudent[i].stu_number ,"%d0000",i);
        list_add_tail(&g_pstStudent[i].list,&g_head);
    }
    
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
            free(g_pstStudent);
            return 1;
        }

        pthread_join(tid[i],NULL);
	}	
    for(i=0 ;i <60;i++)
    {
		sleep(1);
        // printf("m%d This is the main process!\n",i);
    }

    free(g_pstStudent);

    return 0;
}


