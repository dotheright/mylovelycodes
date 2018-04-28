class FatherClass 
{
	int value;
	public void f()
	{
		value = 100;
		System.out.println("FatherClass Value="+value);
	}
}

class ChildrenClass extends FatherClass
{
	private int value;
	public void f()
	{
		super.f();
		value = 200;
		System.out.println("ChildrenClass Value="+value);
		System.out.println(value);
		System.out.println(super.value);			
	}
}

public class InheritSuper
{
	public static void main(String[] args)
	{
		ChildrenClass cc=new ChildrenClass();
		cc.f();
	}
}