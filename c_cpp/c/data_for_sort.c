#include<stdio.h>
//#include<stdlib.h>
#include<linux/time.h>
int main()
{
	int  i =0;
	for(i = 0; i<100000 ;i++)
	{
		srand((i+time(NULL))*(i+10) );
		printf("%d\r\n",rand());
	}
	return  0;
}
