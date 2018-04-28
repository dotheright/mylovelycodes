class A
{
	public void print(String s)
	{
		System.out.println(s);
	}
	
	A()
	{
		print("A()");
	}
	
	public void f()
	{
		print("A:f()");
	}
	
}

class B extends A
{
	B()
	{//父类的方法是公共的可以直接继承
		print("B()");//构造函数 先调用基类的A(),再调用子类的B()
	}
	
	public void f()
	{
		print("B:f()");//函数重写，相当于覆盖（直接拷贝基类的函数声明），直接用子函数的
	}
	
}

public class ExInCon
{
		public static void main(String[] args)
	{
		B bb=new B();
		bb.f();
	}
}
