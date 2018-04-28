//public interface Runner
//{
//	public static finally int id = 1; //default type is "public static finally";
//	
//	public void start();
//	public void run();
//	public void end();	
//	
//}

interface Singer
{
	public void sing();
	public void sleep();
}

interface Paiter
{
	public void draw();
	public void eat();
}

class Student implements Singer
{
	String name;
	
	Student(String name)
	{
		this.name=name;
	}
	
	public String getName()
	{
		return name;
	}
	
	public void study()
	{
		System.out.println("Student Study ....");
	}
	
	public void sing()
	{
		System.out.println("Student sing ....");
	}
	
	public void sleep()
	{
		System.out.println("Student sleep ....");
	}
}

class Teacher implements Singer,Paiter
{
	String name;
	
	Teacher(String name)
	{
		this.name=name;
	}
	
	public String getName()
	{
		return name;
	}
	
	public void teach()
	{
		System.out.println("Teacher teach ....");
	}
	
	public void sing()
	{
		System.out.println("Teacher sing ....");
	}
	
	public void sleep()
	{
		System.out.println("Teacher sleep ....");
	}
	
	public void draw()
	{
		System.out.println("Teacher draw ....");
	}
	
	public void eat()
	{
		System.out.println("Teacher eat ....");
	}	
	
}

public class TestInterface
{
	public static void main(String[] args)
	{
		Singer s = new Student("xiao Wang");
		Paiter p = new Teacher("Mrs Liu");
		
		s.sing();
		s.sleep();
		//s.study();
		
		p.draw();
		p.eat();
		
		Singer ps = (Singer)p;
		
		ps.sing();
		ps.sleep();
	}
}