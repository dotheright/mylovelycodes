#include<stdio.h>
int main()
{
    int a,b;

     //scanf("%d %d",&a,&b);//�Կո���Ϊ�ָ���
     //scanf("%d,%d",&a,&b);//�Զ�����Ϊ�ָ���
    scanf("%d%*c%d",&a,&b);//�м���������Ϊ�ָ���

    printf("a=%d,b=%d,a+b=%d",a,b,a+b);
}
