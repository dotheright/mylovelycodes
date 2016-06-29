#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc ,char* argv[])
{
	map<float,string> m;
	m[89.3]="mike";
	m[90.6]="Ann";
	m[87.9]="jim";
	m[85.9]="him";
	m[88.9]="her";
	m[97.2]="er";
	m[98.1]="xiang";
	m[86.8]="you";
	m[84.9]="it";
	m.erase(87.9);
	
	map<float,string>::reverse_iterator rit;
	for(rit=m.rbegin();rit!=m.rend();rit++)
	{
		cout<<(*rit).first<<":"<<(*rit).second<<endl;
	}
	return 0;
} 
