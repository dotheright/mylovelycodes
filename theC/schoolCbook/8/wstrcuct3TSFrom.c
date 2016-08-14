#include<stdio.h>

#define NUM 2

struct info/*结构体*/
{
	char cName[10];
	int nAge;
	char cJob;
	union unit/*共用体*/
	{
		int nClass;
		char cOffice[10];
	} uDepa;

}iPersonInfo[NUM];

void main()
{
    int nCount;

    for(nCount=0;nCount<NUM;nCount++)
    {
         printf("input Name,Age,Job and Class/Office\n");
         scanf("%s%d %c",iPersonInfo[nCount].cName,&iPersonInfo[nCount].nAge,&iPersonInfo[nCount].cJob);

         if(iPersonInfo[nCount].cJob=='s')
            {
                scanf("%d",&iPersonInfo[nCount].uDepa.nClass);
            }
         else
            {
                scanf("%s",iPersonInfo[nCount].uDepa.cOffice);
            }
   }
   printf("Name\tAge\tJob\tClass/Office\n");

   for(nCount=0;nCount<NUM;nCount++)
   {
        printf("%s\t",iPersonInfo[nCount].cName);
        printf("%d\t",iPersonInfo[nCount].nAge);
        printf("%c\t",iPersonInfo[nCount].cJob);

        if(iPersonInfo[nCount].cJob=='s')
        {
            printf("%d\n",iPersonInfo[nCount].uDepa.nClass);
        }
        else
        {
            printf("%s\n",iPersonInfo[nCount].uDepa.cOffice); //%s对应在printf里对应的是地址
        }
	}
}


