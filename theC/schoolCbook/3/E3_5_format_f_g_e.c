#include<stdio.h>
int main()
{
    double f1=1.0e+10;
    double f2=3.14;

    printf("%%f:%f\n",f1);
    printf("%%e:%e\n",f1);
    printf("%%g:%g\n",f1);
    printf("%%f:%f\n",f2);
    printf("%%e:%e\n",f2);//��ָ������ʽ���
    printf("%%g:%g\n",f2);//��Ҫ�����0
}
