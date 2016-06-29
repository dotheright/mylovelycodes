public class testContinue
{
	public static void main(String []args)
	{
		int i,j=0;
		
		for(i=1;i<101;i++)
		{
			if(i%3==0)
			{
				System.out.println(i);
				j++;
				if (5==j)
				{
					break;
				}
			}
		}
		
			mm(2,3);
		int k=mm(4,5);
		System.out.println(k);
	}
	
	public static int mm(int i,int j)
	{		
		System.out.println("K");
		return i+j;
	}
}