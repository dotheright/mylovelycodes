/*
C languade book,Chapter 5,example 3
author :GuoQingyao
time��2012-2-18 8:05:52
*/

#include<stdio.h>

/*
function��Calculating the everage of a And b;
input parameter��integer a,and integer b;
return��(a+b)/2.0;
*/

float  Average(int x ,int y)
{
    return (x+y)/2.0;
}
int main(int argc,char *argv[])
{
    int a=24;
    int b=35;

    float aver=Average(a,b);

	printf("the Average of %d and %d is %g \n",a,b,aver);
	return 0;
}
