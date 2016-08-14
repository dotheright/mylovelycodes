/*************************************************************************
	> File Name: lab3_1Concert.cpp
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年06月29日 星期三 22时21分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
float convert(float temp)
{
	return  (temp-32)*5/9;
}
int main()
{
	float temp =130.0;
	cout<<temp<<"convert is "<<convert(temp)<<endl;
	return  0;
}
