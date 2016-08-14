/*************************************************************************
	> File Name: Clock.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年07月22日 星期五 17时12分18秒
 ************************************************************************/

#include "Clock.h"

using namespace std;

int  main()
{
    Clock myclock;
	myclock.SetTime(12,3,4);
	myclock.ShowTime();
	myclock.ShowTime(1);
	return  0 ;
}
