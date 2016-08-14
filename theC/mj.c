/*************************************************************************
	> File Name: mj.c
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年03月19日 星期六 20时47分41秒
 ************************************************************************/
/*
1．和牌的基本牌型
（1）11、123、123、123、123
（2）11、123、123、123、111（1111，下同）
（3）11、123、123、111、111
（4）11、123、111、111、111．
（5）11、111、111、111、111．
*/
/*
（一）序数牌合计108张
1．万子牌：从一万至九万，各4张，共36张。
2．饼子牌：从一饼至九饼，各4张，共36张。
3．条子牌：从一条至九条，各4张，共36张。
（二）字牌合计28张
1．风牌：东、南、西、北，各4张，共16张。
2．箭牌：中、发、白，各4张，共12张。
（三）花牌：春、夏、秋、冬，梅、兰、竹、菊，各一张，共8张。
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum MajangPai
{
    WAN1=1,
    WAN2,
    WAN3,
    WAN4,
    WAN5,
    WAN6,
    WAN7,
    WAN8,
    WAN9,

    BING1,
    BING2,
    BING3,
    BING4,
    BING5,
    BING6,
    BING7,
    BING8,
    BING9,

    TIAO1,
    TIAO2,
    TIAO3,
    TIAO4,
    TIAO5,
    TIAO6,
    TIAO7,
    TIAO8,
    TIAO9,

    DONG,
    XI,
    NAN,
    BEI,

    ZHONG,
    FA,
    BAI,

    CHUN,
    XIA,
    QIU,
    DONGTIAN,

    MEI,
    LAN,
    ZHU,
    JU,
};


typedef  struct tagONE_CLASS_MJ
{
    int  theClass;
    int  theVlue;
    int  iCout;
} ONE_CLASS_MJ;




int  isHuPai(int *mj,int num)
{
	return  1;
}

int main()
{
    int mj[14]={BAI,BAI,WAN1,WAN2,WAN3,XI,XI,XI,TIAO7,TIAO8,TIAO9,FA,FA,FA};
	isHuPai(mj,sizeof(mj)/sizeof(int));
    return 0;
}

