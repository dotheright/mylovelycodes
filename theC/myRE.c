/*************************************************************************
	> File Name: myRE.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月24日 星期三 21时28分15秒
 ************************************************************************/

#include<stdio.h>

#define MATCH 1
#define NOT_MATCH 0

int matchReHere(char *pcText ,char *pcRe) ;
int matchReStar(char* pcText,char cPreStar,char *pcEndStar );

int  matchReStar(char* pcText,char cPreStar,char *pcEndStar )
{
   do
   {
	   if( MATCH == matchReHere(pcText,pcEndStar) )
	   {
		   return MATCH;
	   }
   }while ( ('\0' != pcText) && ('.' == cPreStar || cPreStar == *pcText++) );
   
   return  NOT_MATCH;

}

int matchReHere(char *pcText ,char *pcRe)
{
	if( (NULL == pcText) || (NULL == pcRe))
	{
		return NOT_MATCH;
	}
	/*一定要先判断 pcRe 是否结束,否则判断后一个是否为* 和 $ 就会越界*/
	if( '\0' == pcRe[0] )
	{
		return MATCH;
	}
	/*判断后一个是否为* 判断结束一定要在前面否则会越界 */
	if( '*' == pcRe[1] )
	{
        return matchReStar(pcText,pcRe[0],pcRe+2); /*当前字符是 pcRe[0] ,偏移一个是* 偏移到下一个才是*后面的字符 */
	}
	/* $结尾匹配 */
	if( '$' == pcRe[0] && '\0'==pcRe[1] )
	{
        if( '\0' == *pcText )
		{
			return MATCH;
		}
		else
		{
			return  NOT_MATCH;
		}
	}
	/*. 或者相等的情况*/
	if( ( '\0' != pcText)  && 
		( ( '.' ==pcRe[0]) || ( *pcText == *pcRe) ) 
	  )
	{
		return matchReHere(pcText+1,pcRe+1);
	}

	return  0;
}

int procMatchReEnter(char *pcText,char *pcRe)
{
   if(NULL == pcText  || NULL == pcRe )
   {
        return NOT_MATCH;
   }
   /*如果匹配第一个字符为 ^ ,直接向后匹配 */
   if( '^' == pcRe[0] )
   {
       return matchReHere(pcText,pcRe+1) ; // +1 越过 ^
   }

   do
   {
	   if( MATCH == matchReHere(pcText,pcRe) )
	   {
		   return  MATCH;
	   }
   }while( *pcText++ !='\0');

   return NOT_MATCH ;
}


int main()
{
	char *pcText = "zoooogss";
	char *pcRe = "^zo*gss$";
	if( MATCH == procMatchReEnter(pcText, pcRe))
	{
		printf("text =%s \r\n re =%s\r\n Matched\r\n",pcText ,pcRe);
	}
	else
	{
		printf("text =%s \r\n re =%s\r\n not Matched\r\n",pcText,pcRe);
	}
    return 0;
}
