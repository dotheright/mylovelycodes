#include<stdio.h>

//scope:·¶Î§£¬the aim of this funtion is testing the parameter in defferent blocks
//2012-2-18 8:29:30
//author:GuoQingyao

int main(int argc,char *argv[])
{
    int a=1;
    {
        int a=2;
        printf("in the inter block a=%d\n",a);
	}
	printf("in the outer block a=%d\n",a);

	return 0;
}
