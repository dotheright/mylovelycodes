class SuperClass
{
	private int value;
	///*
	SuperClass()
	{
		System.out.println("SuperClass()");
	}
	//*/
	
	SuperClass(int value)
	{
		this.value=value;
		System.out.println("SuperClass(int value)"+this.value);
	}
}

class SubClass extends SuperClass
{
	private int i;
	
	
	SubClass()
	{
		System.out.println("SubClass()");//在没有显示调用父类的构造函数是默认是寻找 SuperClass()的构造函数找不到失败
	}
	
	SubClass(int i )
	{
		//super(100);//一定是先有父后有子，所以super要写在第一行。关键字都是小写的 this(参数)调用this的构造.
		System.out.println("SubClass(int i )"+i);
	}
}

public class InheritConstructor
{
	public static void main(String[] args)
	{
		SubClass sc= new SubClass();
		SubClass scc= new SubClass(10);
	}
}