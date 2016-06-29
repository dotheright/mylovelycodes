#pragma waring (disable:4786)
#include<iostream>
#include<map>
#include<string>

using namespace std;

struct Info
{
	string name;
	float score;
	bool operator < (const Info &a) const
	{
	return a.score<score;
	}
};

int main(int argc ,char* argv[])
{
	map<Info,int> m;

	Info info;
	info.name="mike";
	info.score=89.3 ;
	 m[info]=20;

	info.name="Ann";
	info.score=90.6 ;
	m[info]=21;
	
	info.name="jim";
	info.score=87.9 ;
	 m[info]=22;
	 
	info.name="him";
	info.score=85.9 ;
	 m[info]=23;
	 
	info.name="her";
	info.score=88.9 ;
	m[info]=24;
	
	info.name="er";
	info.score=97.2 ;
	m[info]=25;
	
	info.name="xiang";
	info.score=98.1 ;
	m[info]=26;
	
	info.name="you";
	info.score=86.8 ;
	m[info]=27;
	
	info.name="it";
	info.score=84.9 ;
	m[info]=28;

	map<Info,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<((*it).first).name<<((*it).first).score<<":"<<(*it).second<<endl;
	}
	return 0;
} 
