#include  <stdio.h>

int  add(int a,int b)
{
     return (a+b);
}

int  main()
{
    int  x, y, sum=0;
    char *p ="123""123";

	printf("Input two integers:");
	scanf("x=%d y=%d", &x, &y);
	sum=add(x, y);
	printf("sum x+y=%d",add(x,y));

	return 0;
}
