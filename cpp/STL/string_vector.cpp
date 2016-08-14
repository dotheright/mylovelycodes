
#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main( int argc , char* argv[])
{
	vector<string> v;
	
	v.push_back("my");
	v.push_back("sting");
	v.push_back("vector");
	v.push_back("test");
	v.push_back("push");
	v.push_back("backe");
	

	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	cout<<v[2]<<endl;
	cout<<v[1][1]<<endl;
	cout<<v[2][2]<<endl;
	cout<<v[3]<<endl;
	cout<<v[4]<<endl;
	cout<<v[5]<<endl;
	return 0;
}
