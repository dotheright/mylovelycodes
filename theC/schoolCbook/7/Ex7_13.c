/*
*程序的功能，很简单输入一个班学生成绩，计算平均分然后输出，班级人数有键盘输入
*目的：练习使用一维动态数组
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,sum=0;//有计算总数的时候就一定要在开始的时候初始化为0！！
	int *p=NULL;  //最好定义的时候就初始化
	
	printf("please enter the number of the student:\n");
	scanf("%d",&n);
	
	/*看看我是如何动态生成动态的空间 */
	p=(int *)malloc(n*sizeof(int));
	
	if(NULL==p)//健壮性的考虑，若在使用前指针非空
	{
		printf("No enough memory!");
		//
		exit(0);
	}
	
	printf("please enter the students'score");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	sum=0;    /////再次强调！！
	for(i=0;i<n;i++)
	{
		sum+=*(p+i);
	}
	
	printf("aver=%d\n",sum/n);
	free(p);//一定要记住用完了释放掉，最好是这样在写完malloc后就写free然后在中间插入东西！否则再大的服务器也用不到几天就会死掉！！
}
