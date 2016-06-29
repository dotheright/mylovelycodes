#include<string>
#include<iostream>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="cat dog cat this is my find test!";
	cout<<s<<endl;
	cout<<s.find('c')<<endl;
	cout<<s.find("th")<<endl;
	cout<<s.find("cat")<<endl;
	cout<<s.find("dog")<<endl;
	cout<<s.find("dogc")<<endl;
	cout<<s.find("i")<<endl;
	cout<<s.find("t")<<endl;
	cout<<s<<endl;
	return 0;
}
