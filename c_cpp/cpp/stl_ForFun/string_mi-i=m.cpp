#include<string>
#include<iostream>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="123456789";
	cout<<s[0]<<endl;
	cout<<s[0]-'1'<<endl;
	s[0]-='1';
	cout<<s<<endl;
	return 0;
}
