//testing the scope of local variable

#include<stdio.h>

void GlobalPlusPlus(void);//declear

int main(int argc,char *argv[])
{
    int    local=1;//local variable in block main();
	printf("before GlobalPlusPlus(),it is %d\n",local);
	 GlobalPlusPlus();
	printf("after GlobalPlusPlus(),it is %d\n",local);
	return 0;
}

void GlobalPlusPlus(void)
{
    int local=1;//local variable in block GlobalPlusPlus();
    printf("before ++,it is %d\n",local);
    local++;
    printf("after ++,it is %d\n",local);
}
