#include<stdio.h>
int main()
{
    int data1,data2,sum;
    char op;

    printf("data1+data2\n");
    scanf("%d%c%d",&data1,&op,&data2);//����%c��ʽ�����ַ�ʱ��
    //�ո��ת���ַ��������س����ᱻ���룩���������ر�ע��
    printf("%d%c%d=%d\n",data1,op,data2,data1+data2);
}
