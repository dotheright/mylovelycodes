#include <stdio.h>
#include <stdlib.h>

int v1 = 1;
float v2 = 0.01;

void fun(int a ,long b ,short c, char d,long long e,float f, double g ,
			int *h ,float *i ,char *j)
{
	printf("a=%d, b=%ld ,c=%d d=%c e=%lld \r\n"
		   "f=%.3e, g=%.3e \r\n"
		   "h=%p, i=%p ,j=%p\r\n"
		   ,a,b,c,d,e,f,g,h,i,j);
}

int main()
{

	fun(100,3500L,5,'A',1234567890,
		3.14,2.999999987,
		&v1 ,&v2,"string");
	return 0;
}
