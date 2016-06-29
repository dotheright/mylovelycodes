public class Person
{
	int id;
	int age=40;
	Person(int _id,int _age)
	{
		id=_id;
		age=_age;
	}
	
	public static void main(String[] args)
	{
		Person p1 = new Person(123,20);
		Point p2 = new Point();
		
		System.out.println(p1.id);
		System.out.println(p1.age);
		System.out.println(p2.x);
		System.out.println(p2.y);
	}
}

class Point{
	int x;
	int y;
}