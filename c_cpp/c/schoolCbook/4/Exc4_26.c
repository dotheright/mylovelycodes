/*
*multiplication
*/
//将全部都看为实体，呵呵，包括空格！
#include<stdio.h>

int main()
{
    int i,j;

    for(i=1;i<10;i++)
    {
        int a=i;

        //空格，和后面的数是一个级别的
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
