#include<stdio.h>
int main()
{
    int f1=12;

    printf("%%p:%p\n",&f1);//�ӡ�&����ʾ���ǵ�ַ
    printf("%%p:%p\n",f1); //������ʾ�������ݣ�%p ������ʽ�����ݣ�

     printf("%%d:%d\n",&f1);//�ӡ�&����ʾ���ǵ�ַ
    printf("%%d:%d\n",f1);

    printf("%%x:%x\n",&f1);
    printf("%%X:%X\n",&f1);

    return 0;
}
