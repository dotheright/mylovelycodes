#include<stdio.h>
int main()
{
    float f1=100.15799,f2=12.55,f3=1.7;
    int    n1=123,          n2=45,    n3=6;

    printf("%f\n",10.0/3);//��һ�����Ҫ10.0�������Ĭ��Ϊ����
    printf("printf WITHOUT width or precision specifications:\n");
    printf("%f\n%f\n%f\n",f1,f2,f3);
    printf("%d\n%d\n%d\n",n1,n2,n3);
    printf("printf WITH width or precision specifications:\n");
    printf("%5.4f\n%-6.1f\n%3.0f\n",f1,f2,f3);
    printf("%5d\n%6d\n%3d\n",n1,n2,n3);
    //%6d��%��ʽ˵����6������+6��6��ʾռ�����ַ����ҿ��ң�-6���ű�ʾ�������

}
