/*
*��2x^3-4x^2+3x-6=0�ڸ��������ϵĸ�
*�������û�����
*ֻ������������������и��ˣ��������½���
*
*���õ�һ��ʽ��
*Fx=x*(2*x*(x+2)+3)-6;
*/
#include<stdio.h>
#include<math.h>//����ȡ��������

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
    //�������뷶Χ��û�и����ǲ�����˼�����������

    //���ַ����
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
