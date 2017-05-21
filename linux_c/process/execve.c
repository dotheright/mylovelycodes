#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> //system

int main()
{
	int ret =0;
    char  *argv[] ={"/bin/ls",NULL};
	
	printf("start pid=%u ppid=%u \r\n",getpid(),getppid());

    if(execve("/bin/ls",argv,NULL))
	{
		printf("exec failed pid=%u ppid=%u \r\n",getpid(),getppid());
	}
	return 0;
}
