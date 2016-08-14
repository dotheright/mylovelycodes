#include<stdio.h>

#define NUM 3

struct telephone
{
    char cName[20];
    char cPhone[12];
};

int main()
{
  struct telephone tTel[NUM],*ptTel;

  for(ptTel=tTel;ptTel<tTel+NUM;ptTel++) //这种形式的指向数组的指针运算效率最高
  {
	printf("input name:");
	gets(ptTel->cName);
	printf("input phone:");
	gets(ptTel->cPhone);
  }

  printf("name\t\tphone\n");

  for(ptTel=tTel;ptTel<tTel+NUM;ptTel++)
  printf("%s\t\t%s\n",ptTel->cName,ptTel->cPhone);

  return 0;
}
