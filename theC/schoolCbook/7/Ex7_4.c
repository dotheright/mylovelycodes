/*
*日期转换问题
*（1）任意给定某年某月某日，打印出他是这一年中的第几天
*（2）任意给定某年里的第几天，计算他是这一年中的第几月第几日
*/
#include<stdio.h>

static int DayTab[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
                                          {0,31,29,31,30,31,30,31,31,30,31,30,31}};
/*函数声明*/
int TheDayOfyear(int year,int month,int day);
void monthday(int year,int day_of_year,int *month,int *day);

int main()
{
    int day,month,year,day_of_year;
    char chose;

    printf("You can chose \n1:when you were told the month,the day and the year,computer will calculate the day of year\n");
    printf("2:when you were told  the day of year,computer will calculate the month,the day and the year\n");
    printf("please enter your chose:\n");
    scanf("%c",&chose);

    if(chose=='1')
    {
        printf("please enter the year ,the month the day \n");
        scanf("%d%*c%d%*c%d",&year,&month,&day);
        day_of_year=TheDayOfyear(year,month,day);
        printf("it is the %dth of the year",day_of_year);
    }

  else if(chose=='2')
    {
        printf("please enter the year\nand day of a year \n");
        scanf("%d%*c%d",&year,&day_of_year);
        monthday(year,day_of_year,&month,&day);
        printf("the month is:%d\n",month);
        printf("the day  is:%d\n",day);
    }
    else
    printf("input error!");
}

/*
*函数功能：任意给定某年某月某日，打印出是这一年中的第几天
*函数的入口：int 年月日
*函数的出口：day of year
*/

int TheDayOfyear(int year,int month,int day)
{
    int i,sum=0;

    if(year % 400 == 0 || (year % 100 !=0 && year % 4 == 0))
    {
        for(i=1;i<month;i++)
        {
            sum+=DayTab[1][i];
        }
        return ( sum+day);
    }
    else
    {
        for(i=1;i<month;i++)
        {
            sum+=DayTab[0][i];
        }
        return ( sum+day);
    }
}

/*
*函数的功能：任意给定某年里的第几天，计算他是这一年中的第几月第几日
*函数的入口参数：int year            存储某一年
*                           int day_of_year 存储某一天
*函数的出口参数：int *month ,      指向这一天所在的月份
*                             int *day            指向这一天是此月的几号
*/
void monthday(int year,int day_of_year,int *month,int *day)
{
    int i,sum=0;//用到sum+时，一定要初始化！！！！！！！

    if(year % 400 == 0 || (year % 100 !=0 && year % 4 == 0))
    {
        for(i=1;day_of_year>DayTab[1][i];i++)
        {
            day_of_year=day_of_year-DayTab[1][i];
        }
        *month=i;
        *day=day_of_year;
    }
    else
    {
        for(i=1;day_of_year>DayTab[0][i];i++)
        {
            day_of_year=day_of_year-DayTab[0][i];
        }
        *month=i;
        *day=day_of_year;
    }
}
