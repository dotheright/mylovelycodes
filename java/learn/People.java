/*************************************************************************
	> File Name: People.java
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年02月08日 星期一 15时09分56秒
 ************************************************************************/
public class People{
   int height;
   String ear;
   void speak(String s){
   System.out.println(s);
   }
}

class A {
	public static void main(String []str){
   People zhubajie = new People();
   zhubajie.height =170;
   zhubajie.ear =" two  big ear!";
   zhubajie.speak("height:"+zhubajie.height);
   zhubajie.speak("ear:"+zhubajie.ear);
   zhubajie.speak("speak:"+"go two moon ,not the master weasr");
	}
}
