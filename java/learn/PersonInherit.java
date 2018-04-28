class Person
{
	private String name;
	private int age;
	
	public void setName(String name)
	{
		this.name=name;
	}
	
	public void setAge(int age)
	{
		this.age=age;
	}
	
	public String getName()
	{
		return name;
	}
	
	public int getAge()
	{
		return age;
	}
	
}

class Student extends Person
{
	private String school;
	
	public void setSchool(String school)
	{
		this.school=school;
	}
	
	public String getSchool()
	{
		return school;
	}
}

public class PersonInherit
{
	public static void main(String[] args)
	{
		Student s =new Student();
		s.setName("nann");
		s.setAge(24);
		s.setSchool("HIT");
		
		System.out.println(s.getName());
		System.out.println(s.getAge());
		System.out.println(s.getSchool());
	}
}