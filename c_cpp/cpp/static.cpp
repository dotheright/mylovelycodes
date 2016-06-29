#include<iostream>
using namespace std;
	static int  i = 0;
int fun()
{
	i++;
	return i;
}

int main()
{
     for(int j = 0 ; j < 10 ; j++)
	cout<< fun()<<endl;
    return 0 ;
}
