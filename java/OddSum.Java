public class OddSum
{
	public static void main(String[] args)
	{
		int i=0,r=0;
		for(i=1;i<100;i+=2)
		{
			if(i>90)
			{
				System.out.println(i);
			}
			r+=i;
		}
		System.out.println(r);
	}
}