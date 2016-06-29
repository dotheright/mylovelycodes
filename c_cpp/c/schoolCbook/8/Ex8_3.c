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
//声明外部变量不太好
struct CARD
{
    char suit[10];
	char face[10];
};

typedef struct CARD card_class;

//函数在后面定义的
	void FillCard(card_class wcard[],char *wface[],char *wsuit[]);
	//wcard,是地址，在函数调用的时候也是地址所以就可以这样写，以前的用＊p那是在定义的时候
	//还己否：int ＊p=&a;就相当于int＊p;p=&a;p是地址把，那你就明白了把 
	void Shuffle(card_class *wcard);
	void Deal(card_class    *wcard);

int main()
{

	char *suit[]={"Spades","Heart","Cluds","Diamond"};
	char *face[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	
	card_class card[52],temp;
	
	srand(time(NULL));   //seed number
	
	FillCard(card,face,suit); //card是作为数组民传址的
	Shuffle(card);
	Deal(card);
	/*
	int i=0,j=0;   //最好是在定义的时候附初始值	
	
	
	//Enter the data is Over! 
	
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
     //	printf("Diamond take of %u",sizeof("Diamond"));*/
     
 
	return 0;
}

//前面有声明所以自定义函数可以写在主函数的后面 
/*
*函数功能：将52张牌按花色与面值A-k排列
*函数的参数：结构题指针数组wcard 表示不同的花色和面值的52张牌
					指针数组wface,表示指向面值的字符串
					指针数组wsuit,表示指向花色的字符串
函数的返回值：无
*/
void FillCard(card_class wcard[],char *wface[],char *wsuit[])
{
	int i;
	
	for(i=0;i<52;i++)
	{
	/*再给花色附初始值时要注意，字符串相互赋值时，要用strcopy不能直接用一个＝号
	strcpy里放的是地址，card[].suit其中suit 是数组名：也就是数组的首地址
	char *suit[]是一个指向数组的指针，suit[]也是地址；所以可以写成：
	还有一个问题是：＊suit[]里面是四个字符串；每个要出现１３次
	而(i/13)the result is a integer ,0~12 (i/13)=1,this is what I want!
	so :	and ,I think we have another way!(i%4),each of them display 13th as well;
	*/
	strcpy(wcard[i].suit,wsuit[i/13]);	
	strcpy(wcard[i].face,wface[i%13]);	//你拷贝可以一定要注意改变了什么？？？？？
	} 
}

/*
函数的功能;将52张牌打乱顺序
*/
void Shuffle(card_class *wcard)
{	int i=0,j=0;   //最好是在定义的时候附初始值	
	
	
	//Enter the data is Over! 
	
	//product rand number
//	srand(time(NULL)); //seed number
	//I want a struct that is a countainer variable to change two streucts
card_class temp;
	for(i=0;i<52;i++)
	{
			j=rand()%52;
			temp=wcard[i];
			wcard[i]=wcard[j];
			wcard[j]=temp;		
	} 
}
//output
	void Deal(card_class    *wcard)
	{	
	 int i=0;  
     for(i=0;i<52;i++)
     {
      //printf("%s",对应的是地址
     	printf("%10s %5s\n",wcard[i].suit,wcard[i].face);
     }
	
	}


	
