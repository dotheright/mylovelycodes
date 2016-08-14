/*************************************************************************
> File Name: printMaxN.c
> Author: guoqingyao
> Mail: stepbystepto@163.com 
> Created Time: 2016年06月05日 星期日 22时37分57秒
************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

void  printResult(char * pc)
{
	if( NULL == pc )
	{
		return ;
	}

//	while ( '0' == *pc )
	{
//		pc++;
	}
	
	printf("%s \t", pc);
	return ;
}

int Increment(char *number)
{
	int isOverflow = 0;
	int nTakeOver = 0;
	int nLenght =strlen(number);
	int i = 0 ;

	for(i = nLenght-1 ; i >=0 ; i --)
	{
		int  sum = number[i]-'0'+nTakeOver ;
		if(i == (nLenght -1))
		{
			sum++;
		}
		if(sum >10)
		{
			if(0==i)
			{
				isOverflow = 1;
			}
			else
			{
				sum -=10;
				nTakeOver =1;
				number[i]='0'+sum;
			}

		}
		else
		{
			number[i] = '0'+sum;
			break;
		}
	}

	return isOverflow;
}

int main(int argc ,char *argv[])
{
	int  n =atoi(argv[1]);
	char szTem[16] ={0};
	int  i = 0 ;
	int  j  =0 ;
	char *pcOutstring =NULL ;
	int theCounterof9 = 0;
	int  theEnd = 0;

	printf("n =%d \r\n",n);
	sprintf(szTem,"%d",n);
	if( 0 != strcmp(argv[1],szTem))
	{
		printf(" input %s  not a  number ",argv[1]);
	}
	if(n <= 0)
	{
		printf("input number is too small =%d \r\n",n);
	}

	pcOutstring =(char *)malloc((n+1) *sizeof(char));
	if( NULL == pcOutstring)
	{
		assert(0) ;
		return  0 ; 
	}
	memset(pcOutstring,'0',(n+1)*sizeof(char) );
             pcOutstring[n]=0;

	while( !Increment(pcOutstring))
	{
		printResult(pcOutstring);
	}
 	return 0;
}
