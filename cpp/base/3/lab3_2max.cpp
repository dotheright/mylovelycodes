/*************************************************************************
	> File Name: lab3_2max.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月29日 星期三 22时33分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

int max(int  a , int b)
{
	return (a>b?a:b);
}
float max(float  a , float b)
{
	return (a>b?a:b);
}
float max(int  a , float b)
{
	return (a>b?a:b);
}
float max(float  a , int b)
{
	return (a>b?a:b);
}

int main()
{
	int a ;
	int  b ;
	float c;
	float d ;
	cin >>a>>b>>c>>d;

	cout<<"int a  int b max ="<<max(a,b)<<endl;
	cout<<"int a float c max ="<<max(a,c)<<endl;
	cout<<"float c float d max ="<<max(c ,d)<<endl;
	cout<<"float c int b max ="<<max(c,b)<<endl;
	return 0;
}
