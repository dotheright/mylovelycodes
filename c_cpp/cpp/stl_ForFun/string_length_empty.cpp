#include<string>
#include<iostream>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="123456789";
	cout<<s<<endl;
	cout<<s.length()<<endl;
	cout<<s.empty()<<endl;
	s="";
	
	cout<<s<<endl;
	cout<<s.length()<<endl;
	cout<<s.empty()<<endl;
	
	return 0;
}
