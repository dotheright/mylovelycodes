/*************************************************************************
	> File Name: pClock.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年07月22日 星期五 17时12分18秒
 ************************************************************************/

#include "Clock.h"

using namespace std;

int  main()
{
    Clock* pMyClock = new Clock;
	pMyClock->SetTime(12,3,4);
	pMyClock->ShowTime();
	pMyClock->ShowTime(1);
	return  0 ;
}
