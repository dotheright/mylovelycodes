//testing the scope of global variable

#include<stdio.h>

int global;//global variable
void GlobalPlusPlus(void);//declear

int main(int argc,char *argv[])
{
    global=1;
	printf("before GlobalPlusPlus(),it is %d\n",global);
	 GlobalPlusPlus();
	printf("after GlobalPlusPlus(),it is %d\n",global);
	return 0;
}

void GlobalPlusPlus(void)
{
    printf("before ++,it is %d\n",global);
    global++;
    printf("after ++,it is %d\n",global);
}
