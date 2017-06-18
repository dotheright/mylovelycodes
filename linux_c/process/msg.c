#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>
#include <sys/ipc.h> //interprocess Communication
#include <sys/msg.h>
#include <time.h>


#define ERR (-1)
typedef struct msgbuf
{
	int  mtype;
	char mbuf[32];
}msg_buf ;

int main()
{
	pid_t pid =0;
    int  ret = 0;
	int  msg_flags = 0;
	int  msg_id =0;
	char *path ="/tmp/msg";
	key_t key = 0 ;
	
	msg_buf sndmsg ={0};
    msg_buf rcvmsg ={0};

	key = ftok(path,9);
	printf("key = %d \n ",key);
	if(ERR == key)
	{
		return key;
	}
    msg_id =msgget(key,IPC_CREAT );
	printf("msg_id =%d \n",msg_id);
   
	sndmsg.mtype = 10;
	memcpy(sndmsg.mbuf,"msg test.",sizeof("msg test.")) ;
    ret =msgsnd(msg_id,&sndmsg,sizeof(sndmsg)-sizeof(sndmsg.mtype),IPC_NOWAIT);
    printf("start pid=%u ppid=%u ret=%d \n ",getpid(),getppid(),ret);
    
	ret = msgrcv(msg_id, &rcvmsg,32,10,IPC_NOWAIT);
	printf(" recieved %s\n",rcvmsg.mbuf);

	return 0;
} 
