/*
*模拟洗牌发牌的过程：
*一副扑克牌有52张4种花色（suit）:黑桃（Spades）,红桃（Heart），草花（Clubs）方块（Diamonds）。
*每一种花色又有13张牌面（face);A,2,3,4,5,6,7,8,9,10,jack,Queen,King,编程完成洗牌发牌
*的过程。
*/
/*问题分析:一张牌在这里有两个属性一个是花色一个是牌面
*Struct CARD
*{
	char suit[10];
	char face[10];
*};
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

struct CARD
{
    char suit[10];
	char face[10];
};

typedef struct CARD card_class;

int main()
{
	int i=0,j=0;   //最好是在定义的时候附初始值
	char *suit[]={"Spades","Heart","Cluds","Diamond"};
	char *face[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	card_class card[52],temp;
	
	for(i=0;i<52;i++)
	{
	/*再给花色附初始值时要注意，字符串相互赋值时，要用strcopy不能直接用一个＝号
	strcpy里放的是地址，card[].suit其中suit 是数组名：也就是数组的首地址
	char *suit[]是一个指向数组的指针，suit[]也是地址；所以可以写成：
	还有一个问题是：＊suit[]里面是四个字符串；每个要出现１３次
	而(i/13)the result is a integer ,0~12 (i/13)=1,this is what I want!
	so :	and ,I think we have another way!(i%4),each of them display 13th as well;
	*/
	strcpy(card[i].suit,suit[i/13]);	
	strcpy(card[i].face,face[i%13]);	//你拷贝可以一定要注意改变了什么？？？？？
	}
	
	/*Enter the data is Over! */
	
	//product rand number
	srand(time(NULL)); //seed number
	//I want a struct that is a countainer variable to change two streucts
	
	for(i=0;i<52;i++)
	{
			j=rand()%52;
			temp=card[i];
			card[i]=card[j];
			card[j]=temp;			
	}
     //	printf("Diamond take of %u",sizeof("Diamond"));
     
     //output
     for(i=0;i<52;i++)
     {
      //printf("%s",对应的是地址
     	printf("%10s %5s\n",card[i].suit,card[i].face);
     }
	
	return 0;
}
