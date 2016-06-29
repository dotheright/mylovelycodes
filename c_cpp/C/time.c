#include<stdio.h>
#include<time.h>
int main()
{
	time_t biggest =0xffffffff+1;
	printf("biggest is %s \r\n ",ctime(&biggest));
	return 0;
}
