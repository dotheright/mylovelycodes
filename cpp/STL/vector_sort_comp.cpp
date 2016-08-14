//不懂 comp
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

bool comp( const int &a,const int &b)
{
	if(a!=b)
	{
		return a>b;
	}
	else
	{
		return a>b;
	}
}

int main(int argc,char* argv[])
{
	vector<int> v(10);

	//给向量赋值
	for(int i=0;i<10;i++)
	{
		v[i]=i;
	}

	//定义迭代变量
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		//输出迭代器上的元素值
		cout<<*it<<" ";
	}
	cout<<endl;



	sort( v.begin() , v.end() ,comp );



	for(it=v.begin();it!=v.end();it++)
	{
		//输出迭代器上的元素值
		cout<<*it<<" ";
	}
	cout<<endl;

	v.clear();
	cout<<v.size()<<endl;

	return 0;
}
