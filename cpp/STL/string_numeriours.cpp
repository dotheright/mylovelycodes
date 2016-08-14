#include<string>
#include<iostream>
#include<sstream>
using namespace std;

//C++方法将数值（12354）转换为字符串（“12354”）
string convertToString( double x)
{
    ostringstream o;
    if( o << x )
    return o.str();
    return "convert error";//if error
}

//C++方法将字符串（“12354”）转换为数值（12354）
double convertFromString(const string &s)
{
    istringstream i(s);
    double x;
    if( i >> x )
    return x;
    return 0.0;//if error!
}
int main( int argc , char* argv[])
{
	char b[10];
	string a;
	sprintf(b,"%d",1985);
	a=b;
	cout<<a<<endl;
	string aa=convertToString(1985)+"1";
	cout<<aa<<endl;

	double bb=convertFromString("1985")-1;
	cout<<bb<<endl;

}
