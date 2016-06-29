#include<iostream>

using namespace std;

#define  PI (3.14)
class Circle
{
	public :
	double dbRadius ;

	Circle()
	{
		dbRadius=1;
	}

	Circle( double dbInput )
	{
		dbRadius= dbInput ;
	}

	double GetGrea();
};

inline double Circle::GetGrea()
{
	return PI*dbRadius*dbRadius;
}

template <typename T> /*使用 <>*/
T MaxValue(T v1, T v2)
{
    return (v1 > v2 ? v1: v2);
}

int main ()
{
   Circle vCircle;
   Circle erCircle( vCircle );
   Circle thCircle(3.14);
   cout<<vCircle.GetGrea() <<endl;
   cout<<erCircle.GetGrea() <<endl;
   cout<<thCircle.GetGrea() <<endl;
   
    return 0 ;
}
