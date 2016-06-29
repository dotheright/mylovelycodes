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
    int times=1;//每次在这个block里先被调用在释放，所以每次输入的都是1

    //静态变量和全局变量在今天存储区，程序编译时就已经分配好了，在程序的运行期间都存在
    static int s_times;//静态变量会自动附初始值0
   // printf("the Func() was called %d time(s).\n",times++);//times++是先用times的值在对其进行++
    printf("the Func() was called %d time(s).\n",++s_times);//S_times++是先++，再用++后的值在对其进行times
}
