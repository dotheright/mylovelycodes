/*
*计算任意m行n列二维数组中元素的最大值并指出其所在的行列下标值函数FindMax
*要想使其更有意义呢可以是这种情况：函数FindMax计算三个班每班四个学生某门课的最高分
*并指出他是第几班的第几个学生
*/
#include<stdio.h>

#define CLASS 30
#define  STUDENTS 40

int GotMaxScore(float *p,int Nclass,int Nstudents,int *pos_class,int *pos_student);

int main()
{
	float score[CLASS][STUDENTS];
	int Nclass,Nstudents,i,j,pos_class=0,pos_student=0;
	
	printf("Please enter the number of class and how much students the bigest  class has:");
	scanf("%d%*c%d",&Nclass,&Nstudents);
	
	for(i=0;i<Nclass;i++)
		{
			for(j=0;j<Nstudents;j++)
			{
				printf("Please enter the %dth class the%dth student caore ",i+1,j+1);
				scanf("%f",&score[i][j]);
			}
		}
		
   GotMaxScore(score[0],Nclass,Nstudents,&pos_class,&pos_student);
  // GotMaxScore(*score,Nclass,Nstudents,&pos_class,&pos_student);   //和上句同义
   	
	printf("the Max score  lie in the %dth class  the %dth student",(pos_class+1),(pos_student+1));   //计算机是从0开始，人呢？是从1开始
	
	return 0;
}
/*函数的功能：计算任意m行n列二维数组中元素的最大值，并指出其所在的行列下标；
*函数的入口参数：float型指针变量*score,指向二维数组的第0行第0列
*		     int       Nclass,班级的个数
*		     int       Nstudent,班级内最多学生的个数
*函数的出口参数：int *pos_class,指向数组最大值所在的行
*		     int *pos_student，指向数组最大值所在的列，
*/
int  GotMaxScore(float *p,int Nclass,int Nstudents,int *pos_class,int *pos_student)
{
	float Maxscore;
	int i,j;
		
	Maxscore=*p;
		
	for(i=0;i<Nclass;i++)
		{
			for(j=0;j<Nstudents;j++)
	 		{
				if(p[i*Nclass+j]>Maxscore)
				{
				//每重复一次就会加上列的倍数，i＊Nstudent
					Maxscore=p[i*Nstudents+j];
					*pos_class=i;
					*pos_student=j;
				}
			}
		}
		
	return Maxscore;
}
