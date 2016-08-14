#include<stdio.h>

#define NUM 3

struct phone
{
	char name[16];
	char number[12];
};

int main()
{
	struct phone tel[NUM],*ptel;
	ptel=tel;
	
	for(ptel=tel;ptel<tel+NUM;ptel++)
	{
		printf("please enter ");
		
	}
}
