/*
    �Ӽ�������һ����λ����Ҫ����ȷ��������ĸ�λ��ʮλ����λ���ֱ�����Ļ�����
*/
#include<stdio.h>
int main()
{
    int x,a,b,c;

    printf("Please enter an integer");
    scanf("%d",&x);

    if(x>999||x<0)
    printf("input erro!");
    else
    {
        a=x/100;
        b=(x-a*100)/10;
        c=x-100*a-10*b;
        printf("��λ=%d,ʮλ=%d,��λ=%d",a,b,c);
    }
}
