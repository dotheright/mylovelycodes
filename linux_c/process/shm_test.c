#include <stdio.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <string.h>
#include "sem_api.c"

static char msg[]="hello share memory!\n";

int main(void)
{
    key_t key;
    int semid,shmid;
    char i,*shms,*shmc;
    struct semid_ds buf;
    int value = 0;
    char buffer[80];
    pid_t p;
    
    key = ftok(".",'a');                    /*生成键值*/
    shmid = shmget(key,1024,IPC_CREAT|0604);    /*获得共享内存，大小为1024个字节*/
    printf("key=0x%x shmid=%d \n ",key,shmid);
    shmc = (char *)shmat(shmid,0,0);        /*用指针指向共享内存*/
    semid = CreateSem(key,0);                   /*建立信号量*/
    
    p = fork();                                 /*分叉程序*/
    if(p > 0)                                   /*父进程*/
    {       
        shms = (char *)shmat(shmid,0,0);        /*用指针指向共享内存*/
        memcpy(shms, msg, strlen(msg)+1);       /*复制内容*/
        printf("pid=%d shms= %s \n",getpid(),shms);
        sleep(10);                              /*等待10s，另一个进程将数据读                                                    出*/
        Sem_P(semid);                           /*获得共享内存的信号量*/
        shmdt(shms);                            /*摘除共享内存*/
                
        DestroySem(semid);                      /*销毁信号量*/
    }
    else if(p == 0)                             /*子进程*/
    {
        shmc = (char *)shmat(shmid,0,0);        /*用指针指向共享内存*/
        printf("pid=%d shmc= %s \n",getpid(),shmc);
        Sem_V(semid);                           /*减小信号量*/
        shmdt(shmc);                            /*摘除共享内存*/
    }

    return 0;
}
