
public class JNIDemo {
    public  static native void print();
    public  static native int add(int a,int b);
    
    public static void main(String[] args)
    {
        System.loadLibrary("Demo");
        System.out.println(add(4,5));
        print();
    }
}

