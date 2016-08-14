#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

int main()
{
	FILE *pInfile =NULL;
	FILE *pOutfile =NULL;
	char szline[16]={0};
    pInfile = fopen("1000.dat","r");
    pOutfile = fopen("sort1000.dat","w+");
	int  i  = 0;
    int *pint =malloc( MAX *sizeof(int));

	while(NULL != fgets(szline,16,pInfile))
	{
		printf("%s",szline);
		pint[i]=atoi(szline);
		i++;
		if(i>MAX)
		{
			break;
		}
     	memset(szline,0,16);
	}

	
	return  0 ;
}
