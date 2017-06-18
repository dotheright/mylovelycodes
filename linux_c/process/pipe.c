#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>

int main()
{
	pid_t pid =0;
    int  ret = 0;
	int  fd[2] ={0};
	int  fd_read = 0 ;
	int  fd_write= 0;
	unsigned int  len = 0 ;
	char buf[128] = {0};
	struct timeval stime={0};

    printf("start pid=%u ppid=%u \r\n ",getpid(),getppid());
    
    ret = pipe(fd);
	printf("fd[0]=%u fd[1]=%u \r\n ",fd[0],fd[1]);

    fd_read = fd[0];
	fd_write = fd[1];


	pid = fork() ;
	
	if (-1 == pid )
	{ 
		printf("pid=%u ppid=%u \r\n ",getpid(),getppid());
	}
	else if ( 0 == pid)
	{
		gettimeofday(&stime,NULL);
		close(fd_read);
		write(fd_write,"child say",strlen("child say")) ;
		printf("parent write=%s \n","child say");
		printf("child pid=%u ppid=%u  stime tv_sec=%lu  tv_usec=%lu \r\n ",getpid(),getppid(),stime.tv_sec,stime.tv_usec);
	}
	else
	{
		gettimeofday(&stime,NULL);
		close(fd_write);
		len=read(fd_read,buf,sizeof(buf));
		printf("parent read=%s \n",buf);
		printf("parent pid=%u ppid=%u  stime tv_sec=%lu  tv_usec=%lu \r\n ",getpid(),getppid(),stime.tv_sec,stime.tv_usec);
	}
	
	return 0;
}
