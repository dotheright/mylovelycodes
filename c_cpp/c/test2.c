
#include<stdio.h>

int power(int a,int b);

int main()
{
	int i=0;
	for(i=0;i<10;i++)
	printf("%d %d %d\n",i,power(2,i),power(-3,i));

	return 0;
}

int power(int base,int n)
{
	int i,p=1;
	for(i=1;i<=n;i++)
	{
		p*=base;
	}
	return p;
}
