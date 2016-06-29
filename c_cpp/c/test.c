/*************************************************************************
	> File Name: test.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年02月20日 星期六 23时25分23秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int  i = 0;
	for(i=0;i<9999999 ;i= i+9)
	{
		if(i%8==1)
		{
			if(i%7==0)
				if(i%6==3)
					if(i%5==4)
						if(i%4==1)
							if(i%3==0)
								if(i%2==1)
								{
									printf("%d\r\n",i);
									return  0;
								}
			                       
		}
	}
    return 0;
}

