//������
#include<stdio.h>
int main()
{
    int a=0;
    {
        int a=1;
        printf("In:%d\n",a);//��\n���ʱ���Ӳ�θ�
    }
    printf("Out:%d",a);    //�������a��ֵ��������ĵ�ַ
    return 0;
}
