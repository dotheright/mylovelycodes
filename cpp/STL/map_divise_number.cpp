#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
	map< char, int > m;
	/*
	m['0']=0;
	m['1']=1;
	m['2']=2;
	m['3']=3;
	m['4']=4;
	m['5']=5;
	m['6']=6;
	m['7']=7;
	m['8']=8;
	m['9']=9;
	*/
	int j;
	for(j=0;j<10;j++)
	{
		m['0'+j]=j;
	}
	
	string sa;
	sa="6234";
	int i=0,sum=0;
	for(i=0;i<sa.length();i++)
	{
		sum=sum+m[sa[i]];
	}
	cout<<"sum="<<sum<<endl;

	/*map<char,int >::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<":"<<(*it).second<<endl;
	}*/
	
	return 0;
}
