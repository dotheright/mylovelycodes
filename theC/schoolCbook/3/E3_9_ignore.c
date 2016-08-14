#include<stdio.h>
int main()
{
    int a,b;

    printf("Please inout a and b:");
    scanf("%2d%*2d%2d",&a,&b);//*ÎªºöÂÔĞŞÊÎ·û

    printf("a=%d,b=%d,a+b=%d",a,b,a+b);

    return 0;
}
