#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>

#define K 1024
#define WRITE_LEN  (128*K)
#define ERR (-1)

int main()
{
	pid_t pid =0;
    int  ret = 0;
	int  fd[2] ={0};
	int  fd_read = 0 ;
	int  fd_write= 0;
    int  len = 0 ;
	char writebuf[WRITE_LEN] ="Hello  pipe ,I am here !";
	char readbuf[10240] = {0};
	struct timeval stime ={0};

    printf("start pid=%u ppid=%u \n ",getpid(),getppid());
    
    ret = pipe(fd);
	printf("fd[0]=%u fd[1]=%u ret=%d \n ",fd[0],fd[1],ret);
	if (ERR == ret)  // -1 is  failed
	{
		printf("create pipe error");
		return   ret;
	}

    fd_read = fd[0];
	fd_write = fd[1];


	pid = fork() ;
	if (ERR == pid )
	{ 
		printf("pid=%u ppid=%u \n ",getpid(),getppid());
	}
	else if ( 0 == pid)
	{
		int write_size = WRITE_LEN;
		
		gettimeofday(&stime,NULL);
		printf("child pid=%u ppid=%u  stime tv_sec=%lu  tv_usec=%lu \n ",getpid(),getppid(),stime.tv_sec,stime.tv_usec);
		close(fd_read);
        while ( write_size > 0)
		{
		    len = write(fd_write,writebuf,write_size);
			if(len >0)
			{
                write_size -=len;
				printf("child process: have written %d len of string ,remain %d\n",len,write_size);
			}
			else
			{
				sleep(10);
			}
			
		}

		gettimeofday(&stime,NULL);
		printf("child pid=%u ppid=%u  stime tv_sec=%lu  tv_usec=%lu \n ",getpid(),getppid(),stime.tv_sec,stime.tv_usec);

		return  0;
	}
	else
	{
		gettimeofday(&stime,NULL);
		printf("parent pid=%u ppid=%u  stime tv_sec=%lu  tv_usec=%lu \n ",getpid(),getppid(),stime.tv_sec,stime.tv_usec);
		close(fd_write);
		while(1)
		{
		   len=read(fd_read,readbuf,sizeof(readbuf));
		   if (len <= 0)
		   {
			   printf("parent process: there is no data to read! \n");
			   break; //termimal dead loop
		   }
		   else
		   {
			   printf("parent peocess: revieved %d len data, it is: %s \n",len,readbuf);
		   }
		}
		gettimeofday(&stime,NULL);
		printf("parent pid=%u ppid=%u  stime tv_sec=%lu  tv_usec=%lu \n ",getpid(),getppid(),stime.tv_sec,stime.tv_usec);
	}
	
	return 0;
}
