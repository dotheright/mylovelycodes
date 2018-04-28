//执行期间而不是编译期间，
abstract class Animal
{
	String name;
	
	Animal(String name)
	{
		this.name=name;
	}
	
	public abstract void enjoy();
//	{
//		System.out.println("叫声……");
//	} 
} 

class Cat extends Animal
{
	String catEye;
	
	Cat(String name,String catEye)
	{
		super(name);
		this.catEye=catEye;
	}
	
	public void enjoy()
	{
		System.out.println("mimi……");
	}
} 

class Dog extends Animal
{
	String dogColor;
	
	Dog(String name,String dogColor)
	{
		super(name);
		this.dogColor=dogColor;
	}
	
		public void enjoy()
	{
		System.out.println("www……");
	}
} 

class Bird extends Animal
{
	Bird(String name)
	{
		super(name);
	}
	
	public void enjoy()
	{
		System.out.println("jiujiu…………");
	}
}

class Lady
{
	private String name;
	private Animal pet;
	
	Lady(String name,Animal pet)
	{
		this.name=name;
		this.pet=pet;
	}
	
	public void myPetEnjoy()
	{
		pet.enjoy();
	}
	
}

public class TestPolyoph
{
	public static void main(String[] args)
	{
		Dog d = new Dog("dogname","whitefur");
		Cat c = new Cat("catname","blueeye");
		Bird b = new Bird("birdName");
		
		Lady MrsWang = new Lady("Wang",c);
		Lady MrsZhang = new Lady("Zhang",d);
		Lady MrsCheng = new Lady("cheng",b); 
		
		MrsWang.myPetEnjoy();
		MrsZhang.myPetEnjoy();
		MrsCheng.myPetEnjoy();
	}
}