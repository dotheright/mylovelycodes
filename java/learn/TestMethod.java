public class TestMethod
{
	public static void main(String []args)
	{
		System.out.println(MyMethod(5));
	}
	
	public static int MyMethod(int i)
	{
		if(1==i)
		{
			return 1;
		}
		else
		{
			return i*MyMethod(i-1);
		} 
	}
}