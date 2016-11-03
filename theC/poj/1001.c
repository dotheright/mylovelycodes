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

void swap(char *a ,char *b)
{
	*a=(*a) ^ (*b);
	*b=(*a) ^ (*b);
	*a=(*a) ^ (*b);
}
/* 先实现一种一位一位的加法,然后再做优化 */
char * bigNumAdd(char *pcNum1 ,char *pcNum2)
{
	unsigned int uiLen1 = 0;
	unsigned int uiLen2 = 0;
	unsigned int uiMaxLen = 0;
    int  i  = 0 ;
	int  j  = 0 ;
	int  k  = 0 ;
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

    uiMaxLen = uiLen1 >uiLen2 ? uiLen1:uiLen2;
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
	k = 0;
    for( i = uiLen1-1 , j =uiLen2-1 ; i >=0 && j >= 0 ; j--,i--)
	{
		pcMallocBuf[k] = pcNum1[i]-'0'+pcNum2[i]-'0'+'0' + iCarryOn ;
        iCarryOn = (pcMallocBuf[k]-'0')/10 ;
		k++;
	}
    
	pcMallocBuf[k] =iCarryOn+'0';
    if (0 == iCarryOn)
	{
		for(i = 0 ; i <k/2;i++ )
		{
			swap(&pcMallocBuf[i],&pcMallocBuf[k-i]);
		}
	}
	else
	{
		pcMallocBuf[k] = iCarryOn+'0';
		for(i = 0 ; i<(k+1)/2 ;i++)
		{
			swap(&pcMallocBuf[i],&pcMallocBuf[k+1-i]);
		}
	}

	return pcMallocBuf;

}

int main()
{
    return 0;
}

