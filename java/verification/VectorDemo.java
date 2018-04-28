import java.util.*;

public class VectorDemo {

   public static void main(String[] args) {
      Vector vec = new Vector();
//添加
      vec.add("1");
      vec.add("2");
      vec.add("3");
      vec.add("4");
      vec.add("5");
//替换
      //vec.set(0, "100");
      //vec.add(2, "300");


      System.out.println("vec:"+vec);

      for(int i= 0 ; i <vec.size() ;i++ )
      {
        if(i< 2) {
           vec.remove(i);
        }
      }

      System.out.println("vec:"+vec);
   }
}

