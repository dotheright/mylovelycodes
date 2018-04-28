public class ThreadTest extends Thread
{
	public static void main(String ss[]) {
		ThreadTest thread  = new ThreadTest();
		ThreadTest thread1  = new ThreadTest();
		thread1.setName("child");
		thread1.start();

		for(int  i = 0 ; i< 5 ; i++)
		{
			try 
			{
				sleep(100);
			}
			catch (InterruptedException e)
			{
				e.printStackTrace();
			}
			System.out.println(currentThread().getName()+":"+i);
		}
   }
	public void run(){

		for(int  i = 0 ; i< 10 ; i++)
		{
			try 
			{
				sleep(100);
			}
			catch (InterruptedException e)
			{
				e.printStackTrace();
			}
			System.out.println(currentThread().getName()+":"+i);
		}
	}
}
