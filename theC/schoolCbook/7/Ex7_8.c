/*
＊编程实现：任意输入英文星期几再查找表后输入其对应的数字
*/

#include<stdio.h>

#define MAXLEN 10
#define WEEKDAY 7

int main()
{
	int Maxlen,i,findFlag=0,pos;
	char input[MAXLEN];
	char week_day[WEEKDAY][MAXLEN]={"Sunday","Monday","Tuesday","Wednesday","Thursday","friday","Saturday"};
	
	printf("please enter the weekday:\n");	
	scanf("%s",input);
	
	for(i=0;i<WEEKDAY&&!findFlag;i++)
	{
		if(0==strcmp(input,week_day[i]))
		{
			pos=i;
			findFlag=1;
		}
	}
	
	if(findFlag)
	{
		printf("She is local at %d\n",pos);
	}
	else
	{
		printf("not found!\n");
	}
	
	return 0;
}
