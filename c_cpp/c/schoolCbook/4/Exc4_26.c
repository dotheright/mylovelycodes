/*
*multiplication
*/
//��ȫ������Ϊʵ�壬�Ǻǣ������ո�
#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<10;i++)
    {
        int a=i;

        //�ո񣬺ͺ��������һ�������
         while(a>1)
            {
                printf("   ");
                a--;
            }
        for(j=i;j<10;j++)
        {

            printf("%3d",i*j);

        } printf("\n");
    }
}
