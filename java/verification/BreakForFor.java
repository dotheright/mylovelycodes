import java.util.*;
import  java.lang.Thread;

public class BreakForFor {

   public static void main(String[] args) {

      while(true)
      {
         System.out.println("\nwhile");
         for (int  i =0 ;i< 5 ; i++ ){
            System.out.println("str:"+i);
            if(i > 1){
               break;
            }
         }
         try {
            Thread.sleep(1000);
         }catch (InterruptedException e){
         }
      }
   }
}

