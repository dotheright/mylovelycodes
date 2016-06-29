/*
*计算任意m行n列二维数组中元素的最大值并指出其所在的行列下标值函数FindMax
*要想使其更有意义呢可以是这种情况：函数FindMax计算三个班每班四个学生某门课的最高分
*并指出他是第几班的第几个学生
*/
#include<stdio.h>

#define CLASS 30
#define  STUDENTS 40

int main()
{
	float score[CLASS][STUDENTS],Maxscore;
	int Nclass,Nstudents,i,j,pos_class,pos_student;
	
	printf("Please enter the number of class and how much students the bigest  class has:");
	scanf("%d%*c%d",&Nclass,&Nstudents);
	
	for(i=0;i<Nclass;i++)
		{
			for(j=0;j<Nstudents;j++)
			{
				printf("Please enter the %dth class the %dth student caore ",i+1,j+1);
				scanf("%g",&score[i][j]);
			}
		}
		
		Maxscore=score[0][0];
		
	for(i=0;i<Nclass;i++)
		{
			for(j=0;j<Nstudents;j++)
	 		{
				if(score[i][j]>=Maxscore)
				{
					Maxscore=score[i][j];
					pos_class=i;
					pos_student=j;
				}
			}
		}
	
	printf("the Max score  lie in the %dth class  the %dth student",(pos_class+1),(pos_student+1));   //计算机是从0开始，人呢？是从1开始
	
	return 0;
}

/*
程序收获：分清计算机和人的常识的差别。人呢？从1开始计算机是从0开始
程序不足：main()过于臃肿，没有体现函数模块化的思想
				二维数组算法效率不高：
*/
