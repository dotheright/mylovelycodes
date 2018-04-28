public class StaticTest{
    static int s_int =8;
	int i_int = 9;
	final int f_int = 9;

	public static void main(String s[]){
		StaticTest st = new StaticTest();
       // st.f_int ++;
		System.out.println(st.i_int);
		System.out.println(st.f_int);
		System.out.println(st.s_int);
		System.out.println(StaticTest.s_int);
//		System.out.println(StaticTest.i_int);
	}
}

