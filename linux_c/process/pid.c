#include <sys/types.h> // there are many types
#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid =0;
	pid_t ppid =0;

	printf("pid=%u ppid=%u \r\n ",getpid(),getppid());
	
	return 0;
}
