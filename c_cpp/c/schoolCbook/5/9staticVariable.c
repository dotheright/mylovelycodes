#include<stdio.h>

void Func(void);
int main(int argc,char *argv[])
{
    int i;
    for(i=0;i<10;i++)
    {
        Func();
    }
		return 0;
}

void Func(void)
{
    int times=1;//ÿ�������block���ȱ��������ͷţ�����ÿ������Ķ���1

    //��̬������ȫ�ֱ����ڽ���洢�����������ʱ���Ѿ�������ˣ��ڳ���������ڼ䶼����
    static int s_times;//��̬�������Զ�����ʼֵ0
   // printf("the Func() was called %d time(s).\n",times++);//times++������times��ֵ�ڶ������++
    printf("the Func() was called %d time(s).\n",++s_times);//S_times++����++������++���ֵ�ڶ������times
}
