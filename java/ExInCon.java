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
	{//����ķ����ǹ����Ŀ���ֱ�Ӽ̳�
		print("B()");//���캯�� �ȵ��û����A(),�ٵ��������B()
	}
	
	public void f()
	{
		print("B:f()");//������д���൱�ڸ��ǣ�ֱ�ӿ�������ĺ�����������ֱ�����Ӻ�����
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
