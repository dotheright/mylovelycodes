public class TestAccess
{
	public static void main(String[] args)
	{
		T t=new T();
		//System.out.println(t.i);
		System.out.println(t.m());
		System.out.println(t.j);
		System.out.println(t.k);
		System.out.println(t.l);
	}
}

class T
{
	private int i=1;
					int j=2;
	protected int k=3;
	public int l=4;
	
	int m()
	{
		return i=9;
	}
}

