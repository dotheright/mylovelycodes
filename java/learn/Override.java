class Person
{
	private String name;
	private int age;
	
	Person(String name,int age)
	{
		this.name=name;
		this.age=age;
	}
	
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
	
	public String getInfo()
	{
		return "name="+name+" age="+age;
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
	
	public String getInfo()//重写时，直接拷贝父类中的函数申明是避免错误不二的法宝
	{
		return "name="+this.getName()+"  age="+this.getAge()+"  school="+this.getSchool();
		//age是person的私有成员变量在Student里不能直接访问这里要用调用其方法
	}	
}

public class override
{
	public static void main(String[] args)
	{
		Student s =new Student();
		Person p=new Person();
		s.setName("nann");
		s.setAge(24);
		s.setSchool("HIT");
		
		System.out.println(s.getName());
		System.out.println(s.getAge());
		System.out.println(s.getSchool());
		System.out.println(s.getInfo());
	}
}