public class Test2{
	public static void main(String []qq)
	{
		Date date = new Date(2014,11,30);
		System.out.println(date.getYear()+"-"+date.getMonth()+"-"+date.getDay());
		date.setYear(2012);
		date.setMonth(8);
		date.setDay(12);

		System.out.println(date.getYear()+"-"+date.getMonth()+"-"+date.getDay());
	}
}
