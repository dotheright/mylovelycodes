#include<iostream>
#include<map>
#include<string>

using namespace std;

struct myComp
{
	bool operator ()(const float &a,const float &b)
	{
		if(a!=b)return a>b;
		else return a>b;
	}
};

int main(int argc ,char* argv[])
{
	map<float,string,myComp> m;
	m[89.3]="mike";
	m[90.6]="Ann";
	m[87.9]="jim";
	m[85.9]="him";
	m[88.9]="her";
	m[97.2]="er";
	m[98.1]="xiang";
	m[86.8]="you";
	m[84.9]="it";
	

	map<float,string,myComp>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<":"<<(*it).second<<endl;
	}
	return 0;
} 
