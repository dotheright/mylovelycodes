#include <stdio.h>
#include <stdlib.h>

int main()
{
	return 0;
}
int GetAPositiveRightInput(char * input,int* pisPositive)
{
	if(NULL==input ||'\0' == *input )
	{
		return -1;
	}

	if('-' == *input)
	{
	   (*pisPositive)++;
	   inputA++; 
	}
}

/*大整数相乘*/
char *Get_long_int_multi(char *inputA , char*inputB )
{
    int isPositive = 0;
    int iRut = 0;
    unsigned int  ulLenA = 0;
    unsigned int  ulLenB = 0;
	/* 参数校验 去掉前导0 */
    iRut += GetAPositiveRightInput(inputA ,&isPositive);
    iRut += GetAPositiveRightInput(inputB,&isPositive);
    
	if( 0 != iRut)
	{
		return "0";
	}

    ulLenA = strlen(inputA);
	ulLenB = strlen(inputB);


	

	
}
