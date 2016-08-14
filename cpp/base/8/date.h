/*************************************************************************
	> File Name: date.h
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月09日 星期二 11时25分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Date
{
public:
	Date()
	{
		this->year =2000;
		this->month =12;
		this->day =12;
        cout<<" "<<this->year<<"/"<<this->month<<"/"<<this->day<<endl;
	}
	Date(int year)
	{
		this->year =year;
		this->month =12;
		this->day =12;
        cout<<" "<<this->year<<"/"<<this->month<<"/"<<this->day<<endl;
	}
	Date(int year ,int  month)
	{
		this->year =year;
		this->month =month;
		this->day =12;
        cout<<" "<<this->year<<"/"<<this->month<<"/"<<this->day<<endl;
	}
	Date(int year,int  month,int day)
	{
		this->year =year;
		this->month =month;
		this->day =day;
        cout<<" "<<this->year<<"/"<<this->month<<"/"<<this->day<<endl;
	}

	void set(int ,int ,int );
	int  isLeapYear();
	void display();
	int year;
private:
	int month;
	int day;
};
void Date::set(int  year,int month,int day)
{
	this->year = year;
	this->day =day;
	this->month= month;
}
int Date::isLeapYear()
{
	if(( 0 == year%100) && (0!= year%400) )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Date::display()
{
	cout<<year<<"/"<<month<<"/"<<day<<endl;
}

