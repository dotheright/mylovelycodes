#include<stdio.h>
#include<time.h>
int main()
{
	time_t curtime;
    time(&curtime);
	printf("%s \n",ctime(&curtime));
	return 0;
}
