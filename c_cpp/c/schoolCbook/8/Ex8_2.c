/*利用指向结构体的指针，计算学生各科的平均成绩*/

#include<stdio.h>

struct DATA
{
	int year;
	int month;
	int day;
};

struct INFO
{
	char name[12];
	struct DATA birthday;
	int math ;
	int english;
	int computer;
};

struct INFO student[5]={
{"tom",{1959,5,6},89,98,97},
{"to",{1989,5,6},90,98,97},
{"om",{1999,5,6},89,93,97},
{"tm",{1969,5,6},89,90,97},
{"m",{1979,5,6},95,98,97}
};//初始化

int main()
{
	struct INFO *p=student;
	float sum[4]={0.0},average[4]={0.0};  //很好在定义的时候就初始化
	int i=0;
	char *name[3]={"score of math","score of  english","score of computer"};
	
	for(p=student;p<student+5;p++)
	{
		sum[0]=sum[0]+p->math;
		sum[1]=sum[1]+p->english;
		sum[2]=sum[2]+p->computer;
	}
	
	for(i=0;i<4;i++)
	{
	average[i]=sum[i]/5.0;
	printf("%20s:%g",name[i],*(average+i));
	}
} 

