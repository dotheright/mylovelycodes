/*************************************************************************
	> File Name: 1001.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年10月19日 星期三 08时58分19秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

/* 先实现一种一位一位的加法,然后再做优化 */
char * bigNumAdd(char *pcNum1 ,char *pcNum2)
{
	unsigned int uiLen1 = 0;
	unsigned int uiLen2 = 0;
	unsigned int uiMaxLen = 0;
	unsigned int uiMinLen = 0;
    int  i  = 0 ;
    char *pcMallocBuf = NULL ;
    int  iCarryOn = 0;

	if( ( NULL == pcNum1) ||( NULL== pcNum2) )
	{
		return  NULL;
	}

	uiLen1 = strlen(pcNum1);
	uiLen2 = strlen(pcNum2);
	
	if( 0 == uiLen1 || 0 == uiLen2)
	{
		return NULL;
	}

    if( uiLen1 > uiLen2)
	{
		uiMaxLen = uiLen1;
		uiMinLen = uiLen2;
	}
	else
	{
		uiMaxLen = uiLen2;
		uiMinLen = uiLen1;
	}
	/* 高效的算法最后这里先用一个较大的缓存,其中一个数大于这个缓存的时候再申请 */
	/* uiMaxLen 只是长度,+'\0'+'进位' 所以这里要 +1+1  */
    pcMallocBuf =(char *)malloc( (uiMaxLen+1+1)*sizeof(char) );
    if( NULL == pcMallocBuf )
	{
		assert(0);
		return NULL;
	}
	memset(pcMallocBuf ,0, (uiMaxLen+2)*sizeof(char));

	//for (i =0 ; i < uiMaxLen+1;)


}

int main()
{
    return 0;
}

