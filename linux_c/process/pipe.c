#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	pid_t pid =0;
    int  ret = 0;
	int  fd[2] ={0};
	int  fd_read = 0 ;
	int  fd_write= 0;
	unsigned int  len = 0 ;
	char buf[128] = {0};

    printf("start pid=%u ppid=%u \r\n ",getpid(),getppid());
    
    ret = pipe(fd);
    fd_read = fd[0];
	fd_write = fd[1];


	pid = fork() ;
	
	if (-1 == pid )
	{ 
		printf("pid=%u ppid=%u \r\n ",getpid(),getppid());
	}
	else if ( 0 == pid)
	{
		close(fd_read);
		write(fd_write,"child say",strlen("child say")) ;
		printf("child pid=%u ppid=%u \r\n ",getpid(),getppid());
	}
	else
	{
		close(fd_write);
		len=read(fd_read,buf,sizeof(buf));
		printf("parent pid=%u ppid=%u buf=%s len =%u\r\n ",getpid(),getppid(),buf,len);
	}
	
	return 0;
}
