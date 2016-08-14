#include<map>
#include<string>
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	multimap<string,double> m;
	m.insert(pair<string,double>("jacke",89.3));
	m.insert(pair<string,double>("jim",88.9));
	m.insert(pair<string,double>("jenney",78.5));
	m.insert(pair<string,double>("gan",69.3));
	m.insert(pair<string,double>("jacke",79.3));
	
	multimap<string,double>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<":\t"<<(*it).second<<endl;
	}
	return 0;
}
