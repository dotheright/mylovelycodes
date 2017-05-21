#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> //system

int main()
{
	int ret =0;

    printf("start pid=%u ppid=%u \r\n ",getpid(),getppid());
    ret = system("ping -c 2 127.0.0.1");
    printf("ret=%d pid=%u ppid=%u \r\n ",ret, getpid(),getppid());

	return 0;
}
