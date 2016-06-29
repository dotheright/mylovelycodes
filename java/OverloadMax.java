class Max
{
	Max()
	{
		System.out.println("构造函数被调用");	
	}
	
	Max(int a,int b)
	{
		getMax(a,b);
	}
	
	int getMax(int a,int b)
	{
		System.out.println("int");
		return ( a>b ) ? a : b;
	}
	
	double getMax(double a,double b)
	{
		System.out.println("Double");
		return ( a>b ) ? a : b;
	}
	
	double getMax(double a,int b)
	{
		System.out.println("Double,int");
		return ( a>b ) ? a : b;
	}	
}

public class OverloadMax
{
	public static void main(String[] args)
	{
		Max m=new Max(2,3);
		System.out.println(m.getMax(3.7,4));		
	}
}