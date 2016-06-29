/*
*代参数的main函数
*/

#include<stdio.h>
#include<string.h>

//argc用于存放命令行中参数的个数，程序名也算其中之一，所以argc至少为1；
//char *argv[],每个元素都是字符串指针，指向命令行中一个命令行参数，
//所有命令行参数都是字符串
int main(int argc,char *argv[])
{
	int i ,n;
	char str[30];

	printf("Please enter a line:\n");
	gets(str);


	printf("\nthe number of command line arguments is %d\n",argc);
	printf("\nThe program name is:%s\n",argv[0]);

	if(argc>1)
	{
		printf("\nThe other arguments are following:\n");
		for(i=1;i<argc;i++)
		{
			printf("%s\n",argv[i]);
		}
	}

	return 0;
}

