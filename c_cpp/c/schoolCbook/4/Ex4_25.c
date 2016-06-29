/*
*求2x^3-4x^2+3x-6=0在给定区间上的根
*区间有用户输入
*只有在你输入的区间内有根了，才能向下进行
*
*常用的一个式子
*Fx=x*(2*x*(x+2)+3)-6;
*/
#include<stdio.h>
#include<math.h>//用于取消正负号

int main()
{
    float XAverage,XRim1,XRim2,FXAverage,FXRim1,FXRim2;

    do
    {
    printf("please input the Domain boundary XRim1,XRim2\n ");
    scanf("%f%*c%f",&XRim1,&XRim2);

    FXRim1=XRim1*(2*XRim1*(XRim1+2)+3)-6;
    FXRim2=XRim2*(2*XRim2*(XRim2+2)+3)-6;
    }while(XRim1*XRim2>0);
    //若你输入范围内没有根，那不好意思，你继续输入

    //二分法求根
    do
    {
        XAverage=XRim1+XRim2;
        FXRim1=XRim1*(2*XRim1*(XRim1+2)+3)-6;
        FXAverage=XAverage*(2*XAverage*(XAverage+2)+3)-6;
        if(XAverage*XRim1>0)
         {
             XRim1=XAverage;
         }
         else
         {
             XRim2=XAverage;
         }
    }while(fabs(FXAverage)>=1e-2
    );
    printf("%6.2f",FXAverage);
}
