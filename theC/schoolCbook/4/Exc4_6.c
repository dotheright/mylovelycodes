/*
*�ֶκ���
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x;

    printf("please enter x\n");
    scanf("%f",&x);

    if(x>0)
    printf("%f",exp(x));
    else if(x<0)
    printf("%f",-exp(x));
    else
    printf("1");

 return 0;  //���������Ϊ��֪����Ҳ������ô�������
}
