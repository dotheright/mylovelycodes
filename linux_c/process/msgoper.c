/*消息队列的小程序，注意在超级用户模式下运行*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/msg.h>
#include <unistd.h>
#include <time.h>
#include <sys/ipc.h>

#define MAX_SND_MSG_LEN  (32)
#define DEFAULT_MSG_TYPE  (32)

struct msgmbuf  //消息的缓冲区结构, 
{                  
    int mtype;           // 这个是必须的后面的都是可以自己的定义此结构体的最大长度是 MSGMAX==8192
    char mtext[MAX_SND_MSG_LEN];
};    

void msg_show_attr(int msg_id, struct msqid_ds  msg_info)    /*打印消息属性的函数*/
{
    int ret = -1;
    
    sleep(1);

    ret = msgctl(msg_id, IPC_STAT, &msg_info);        /*获取消息*/
    if( -1 == ret)
    {
        printf("get msg stat error! ret = %d \n",ret);                    /*获取消息失败，返回*/
        return ;        
    }
    
    printf("msg_qnum=%d msg_cbytes=%ld\n",(int)msg_info.msg_qnum,msg_info.msg_cbytes);        /*消息队列中的,个数和字节数*/
    printf("msg max byte %d\n",(int)msg_info.msg_qbytes);    /*消息队列中的最大字节数*/
    printf("send msg pid = %d\n",msg_info.msg_lspid);        /*最后发送消息的进程*/
    printf("recieve msg pid = %d\n",msg_info.msg_lrpid);        /*最后接收消息的进程*/
    printf("send msg time= %s",ctime(&(msg_info.msg_stime)));/*最后发送消息的时间*/
    printf("recieve msg time=%s",ctime(&(msg_info.msg_rtime)));/*最后接收消息的时间*/
    printf("msg_ctime= %s",ctime(&(msg_info.msg_ctime)));        /*消息的最后变化时间*/
    printf("msg uid =%d  gid = %d\n",msg_info.msg_perm.uid,msg_info.msg_perm.gid);    /*消息的GID*/
    printf("\n");                                    /*以下打印消息的信息*/
}

int main(void)
{
    int ret = -1;
    int msg_flags, msg_id;
    key_t key;
    struct msqid_ds msg_info;
    struct msgmbuf snd_msg_mbuf={0};
    struct msgmbuf rcv_msg_mbuf={0};
    char send_msg[]="this is send msg test!";
    int msg_sflags = 0 ;
    int msg_rflags = 0 ;
    char *msgpath = ".";                /*消息key产生所用的路径*/

    key = ftok(msgpath,'c');                    /*产生key*/
    if(key != -1)                                /*产生key成功*/
    {
        printf("create KEY success , the key is %d \n",key);        
    }
    else                                        /*产生key失败*/
    {
        printf("creat KEY failed \n");        
    }
    
    msg_flags = IPC_CREAT | IPC_EXCL;            /*消息的类型*/
    msg_id = msgget(key, msg_flags );    /*建立消息*/
    if( -1 == msg_id)
    {
        printf("get msg failed \n");
        return 0;        
    }
    printf("***********msgget***********\n");
    msg_show_attr(msg_id, msg_info);            /*显示消息的属性*/
    
    msg_sflags = IPC_NOWAIT;
    snd_msg_mbuf.mtype = DEFAULT_MSG_TYPE;

    memcpy(snd_msg_mbuf.mtext,send_msg,sizeof(send_msg));    /*复制字符串*/
    ret = msgsnd(msg_id, &snd_msg_mbuf, sizeof(send_msg), msg_sflags);    /*发送消息*/
    if( -1 == ret)
    {
        printf("send msg failed !\n");
    }
    printf("***********msggsnd***********\n");
    msg_show_attr(msg_id, msg_info);            /*显示消息属性*/
    
    msg_rflags = IPC_NOWAIT|MSG_NOERROR;
    rcv_msg_mbuf.mtype = DEFAULT_MSG_TYPE;
    ret = msgrcv(msg_id, &rcv_msg_mbuf, sizeof(rcv_msg_mbuf.mtext),rcv_msg_mbuf.mtype,msg_rflags);        /*接收消息*/
    if( -1 == ret)
    {
        printf("recieve msg failed\n"); 
    }
    else
    {
        printf("reciece msg success ret(len):%d\n",ret);        
    }
    printf("***********msgrcv: %s ;***********\n",rcv_msg_mbuf.mtext);
    msg_show_attr(msg_id, msg_info);            /*显示消息属性*/
    
    msg_info.msg_perm.uid = getuid();
    msg_info.msg_perm.gid = getgid();
    msg_info.msg_qbytes = 12345;
    ret = msgctl(msg_id, IPC_SET, &msg_info);    /*设置消息属性*/
    if( -1 == ret)
    {
        printf("set msgctl failed \n");
        return 0;        
    }
    printf("***********msgctl set:***********\n");
    msg_show_attr(msg_id, msg_info);            /*显示消息属性*/
    
    ret = msgctl(msg_id, IPC_RMID,NULL);        /*删除消息队列*/
    if(-1 == ret)
    {
        printf("rm msgctl failed\n");
        return 0;        
    }
    return 0;
}
