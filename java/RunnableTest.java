public class RunnableTest implements Runnable {
    public static void main(String[] args) {  
        Runnable r1 = new RunnableTest();  
        Thread thread = new Thread(r1,"t1");  
        thread.start();  
        thread.setPriority(5);  
        //设置线程优先级  
        Thread thread2 = new Thread(r1,"t2");  
        thread2.start();  
        thread2.setPriority(2);  
    }     
    public void run(){  
        for(int i=0;i<5;i++){  
            System.out.println(Thread.currentThread().getName()+":"+i);  
        }  
    } 
}
