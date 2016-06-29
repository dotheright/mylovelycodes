public class Loop{
	public static void main(String []xxx)
	{
		int loop = 3;
		while(0!=loop)
		{
			System.out.println("while 3"+loop);
			loop--;
		}

		loop=3;
		do
		{
			System.out.println("do while 3"+loop);
			loop--;
		}
		while(0!=loop);

		loop=3;
		for(int  i = 0; i< loop ;i++)
		{
			System.out.println("for 3"+loop);
		}
	}
}
