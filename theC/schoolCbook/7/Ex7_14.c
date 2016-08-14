/*
*编程实现输入m个班级n个学生的某一门课成绩，计算最高分，
*并指出最高分的学生是第几班的第几个学生
*目的：练习二维动态数组的实现
*/
#include<stdio.h>
#include<stdlib.h>

int FindMax(int *p,int m,int n,int *prow,int *pcol );

int main()
{
	int *pscore=NULL,i,j,m,n,max,row,col;

	printf("please enter array size m,n:");
	scanf("%d%*c%d",&m,&n);

	//动态的申请空间
	pscore=(int*)calloc(m*n, sizeof (int));//你说我要怎么说你才好一句话中写错两个关键字
	//calloc calloc calloc calloc calloc calloc sizeof sizeof sizeof sizeof sizeof sizeof sizeof
	//健壮性的考虑
	if(pscore==NULL)   //如果内存不足，提示用户
	{
		puts("No enough memory!\n");
		exit(0);
	}

	printf("Please enter each students' score:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//scanf("%d",&p[i*m+j]);
			scanf("%d",&pscore[i*n+j]);
			//i就像时针，每跳一步就会j就会转一圈要想计算分钟＊n
			//j就像分针，跳一步就是一步；这下你明白了为什么要乘于n了吧！
		}
	}

	max=FindMax(pscore,m,n,&row,&col );

	printf("MaxScore=%d,class=%d,number=%d",max,row+1,col+1);
	//人的计数方式和计算机不同，计算机从0开始，人是从1开始！
	free(pscore);
	return 1;
}

/*
*函数功能：计算最高分，并指出最高分的学生是第几班的第几个学生
*函数入口参数：整型指针变量指向二维数组第0行第0列
*						整型变量m,二维数组的行数
*						整型变量n,二维数组的列数
*函数出口参数：整型指针变量prow,指向数组所在的最大值所在的行
*						整型指针变量pcol,指向数组所在的最大子所在的列
*函数的返回值：最大值
*/
int FindMax(int *p,int m,int n,int *prow,int *pcol )
{
	int i, j,max;
	max=p[0];
	*prow=0;
	*pcol=0;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i*n+j]>max)
			{
				//max=p[i*m+j];
				max=p[i*n+j];
				*prow=i;
				*pcol=j;
			}//if over!
		}//inter for over!
	}//outer for over!

	return max;
}
