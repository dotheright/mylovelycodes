#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#define MAX 1000

void printx(int *x)
{
	int  i = 0;
	for( i =0 ; i < 15 ; i ++)
	{
	   printf("%d ",x[i]);
	}
	printf("\r\n");
	sleep(1);
}
int main()
{
	int  i  = 0 ;
    int  j  = 0 ;
    int  x[15]={123,3,5,2,6,8,97,352,4,6666,7777,444,233,87,123};
	int n = 15;
	int t = 0 ;
	printx(x);

	for(i= 1 ; i< n; i++)
	{
		t = x[i];
		for(j =i -1;j>=0;j--)
		{
			if(t <x[j])
			{
				x[j+1]=x[j];
	printx(x);
			}
			else
			{
	printx(x);
				break;
			}
		}
		x[j+1] = t;
	printx(x);
	}
	
	return  0 ;
}
