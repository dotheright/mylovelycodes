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
		System.out.println("SubClass()");//��û����ʾ���ø���Ĺ��캯����Ĭ����Ѱ�� SuperClass()�Ĺ��캯���Ҳ���ʧ��
	}
	
	SubClass(int i )
	{
		//super(100);//һ�������и������ӣ�����superҪд�ڵ�һ�С��ؼ��ֶ���Сд�� this(����)����this�Ĺ���.
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