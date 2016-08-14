#include<stdio.h>
int main()
{
    int a,b;

     //scanf("%d %d",&a,&b);//以空格作为分隔符
     //scanf("%d,%d",&a,&b);//以逗号作为分隔符
    scanf("%d%*c%d",&a,&b);//中间以任意作为分隔符

    printf("a=%d,b=%d,a+b=%d",a,b,a+b);
}
