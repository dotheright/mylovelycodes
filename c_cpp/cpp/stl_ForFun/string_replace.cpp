#include<string>
#include<iostream>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="123456789";
	string::iterator it;
	it=s.begin();
	s.insert(it+1,'p');//p的位置只能是一个字符，不能是字符串
	
	string ss="this is my replaced";
	s.replace(1,ss.length(),ss);
	cout<<s<<endl;
	return 0;
}
