/*************************************************************************
	> File Name: revert.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年01月07日 星期四 22时37分58秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

void reverse (char  *pcInput , int iStart , int  iEnd)
{
	char ch = '\0';

	if(NULL == pcInput)
	{
		assert(0);
	}

	while(iStart< iEnd )
	{
       ch = pcInput[iEnd];
	   pcInput[iEnd] = pcInput[iStart];
	   pcInput[iStart] = ch;
	   iStart ++;
	   iEnd --;
	}
}


int main()
{
    char  
	return 0;
}

