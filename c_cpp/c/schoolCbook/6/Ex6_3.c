//����������40���İ༶ĳ�ſεĳɼ�����

#include<stdio.h>

int main()
{
    int i,j,number,score[40],temp;

    printf("please enter the number of the student:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("please enter the %dth student:",i);
        scanf("%d",&score[i-1]);
        //Ҫע��ƽ�������Ǵ�1��ʼ�������飬������Ǵ�0��ʼ
    }

    for(i=0;i<number-1;i++)
        for(j=i+1;j<number;j++)
        if(score[i]<score[j])
        {
            temp=score[i];
            score[i]=score[j];
            score[j]=temp;
        }

    for(i=0;i<number;i++)
    printf("%3d",score[i]);
}

//̫���ˣ��������û�����������ô�ѣ�����ˣ���������ô�ŵ���
//�������鴦����±����⣬�Ͳ�����ʲô������
