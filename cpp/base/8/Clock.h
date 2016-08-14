/*************************************************************************
	> File Name: Clock.h
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年07月22日 星期五 16时34分23秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Clock
{
	public:
		void SetTime(int newH = 0 ,int  newM = 0, int newS =0 );
		void ShowTime();
		void ShowTime(int n);
	private:
		int Hour;
		int Minute;
		int Second;
};

void Clock::SetTime(int newH ,int  newM , int newS )
{
	Hour = newH;
	Minute = newM;
	Second =newS ;
}

void Clock::ShowTime()
{
   cout<<Hour<<"时"<<Minute <<"分"<<Second<<"秒"<<endl;
}

void Clock::ShowTime(int  n)
{
   cout<<Hour<<":"<<Minute <<":"<<Second<<":"<<endl;
}
