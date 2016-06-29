#include<string>
#include<iostream>

using namespace std;

int main( int argc , char* argv[])
{
	string s;
	s="cat dog cat this is my compare test!";
	cout<<s<<endl;
	cout<<s.compare("a")<<endl;
	cout<<s.compare("cat")<<endl;
	cout<<s.compare("cat dog cat this is my compare test!")<<endl;
	cout<<s.compare("dog")<<endl;

	cout<<s<<endl;
	return 0;
}
