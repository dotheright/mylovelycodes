/*************************************************************************
	> File Name: Date.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年08月09日 星期二 12时43分52秒
 ************************************************************************/

#include<iostream>
#include"date.h"

using namespace std;

void printLeapYear(Date * pDD)
{
  if(true == pDD->isLeapYear())
  {
	  cout<<("Leap year\n");
  }
  else
  {
	  cout<<("not a leap year!\n");
  }
}

void printLeapYearAlias(Date& dd)
{
  if(true == dd.isLeapYear())
  {
	  cout<<("Leap year\n");
  }
  else
  {
	  cout<<("not a leap year!\n");
  }
}
void printLeapYear(Date dd)
{
  if(true == dd.isLeapYear())
  {
	  cout<<("Leap year\n");
  }
  else
  {
	  cout<<("not a leap year!\n");
  }
}

int  main()
{
	Date dd();
	Date dd1(2000);
	Date dd2(2110,1);
	Date dd3(2012,1,20);

#if 0
	printLeapYear(dd);
  cout<< "out dd"<< dd.year<<endl<<endl;
	printLeapYear(&dd);
  cout<< "out &dd"<< dd.year<<endl<<endl;
	printLeapYearAlias(dd);
  cout<< "out Alias"<< dd.year<<endl<<endl;
#endif  
  return 0;

}

