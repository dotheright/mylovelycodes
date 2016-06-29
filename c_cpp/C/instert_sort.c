#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

void insert_sort(int * pint,int max)
{
	int  i = 0;
	int  j = 0;
	int tmp = 0;
    for(i = 0 ; i < max ;i++)
	{
       tmp = pint[i];
		for( j =i+1; j <max  :;j++)
		{
			if (pint[j] < pint[i])
			{
				tmp =pint[i];
				pint[i] = pint[j];
				pint[j] = tmp;
			    
			}
		}
	}
}

int main()
{
	FILE *pInfile =NULL;
	FILE *pOutfile =NULL;
	char szline[16]={0};
    pInfile = fopen("1000.dat","r");
    pOutfile = fopen("insert1000","w+");
	int  i  = 0;
    int *pint =malloc( MAX *sizeof(int));

	while(NULL != fgets(szline,16,pInfile))
	{
		pint[i]=atoi(szline);
		i++;
		if(i>MAX)
		{
			break;
		}
     	memset(szline,0,16);
	}
    insert_sort(pint,MAX);
	
	for(i = 0 ; i < MAX ;i++)
	{
     	memset(szline,0,16);
		snprintf(szline,16,"%d\r\n`",pint[i]);
		fputs(szline,pOutfile);
	}
	
	return  0 ;
}
