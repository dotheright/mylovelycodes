#include<sys/times.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned long ulticks =0;
	ulticks = times(NULL);
	printf("cur tick is %lu\r\n", ulticks);
	sleep(3);
	ulticks = times(NULL);
	printf("cur tick is %lu\r\n", ulticks);
    return 0;
}
