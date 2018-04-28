//package com.yao;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import java.text.SimpleDateFormat;
import java.util.Date;

public class BlockingQueueTest {
    /**
     定义装苹果的篮子
     */
    public static class Basket{
        // 篮子，能够容纳3个苹果
        BlockingQueue<String> basket = new LinkedBlockingQueue<String>(3);

        // 生产苹果，放入篮子
        public void produce() throws InterruptedException{
            // put方法放入一个苹果，若basket满了，等到basket有位置
            basket.put("An apple");
        }
        // 消费苹果，从篮子中取走
        public String consume() throws InterruptedException{
            // get方法取出一个苹果，若basket为空，等到basket有苹果为止
            String apple = basket.take();
            return apple;
        }

        public int getAppleNumber(){
            return basket.size();
        }

    }


/*    public static class PredictStageQueue{
        // 队列，能够容纳8个sstage
        BlockingQueue<Integer> storeStage = new LinkedBlockingQueue<Integer>(8);

        // 生产苹果，放入篮子
        public void produce() throws InterruptedException{
            // put方法放入下一个stage的索引
            storeStage.put( stage_index);
        }
        // 消费苹果，从篮子中取走
        public Integer consume() throws InterruptedException{
            // get方法取出一个苹果，若basket为空，等到basket有苹果为止
            Integer curStage = storeStage.take();
            return curStage;
        }

        public int getStageNumber(){
            return storeStage.size();
        }

    }*/

    //　测试方法
    public static void testBasket() {
        // 建立一个装苹果的篮子
        final Basket basket = new Basket();
        // 定义苹果生产者
        class Producer implements Runnable {
            public void run() {
                try {
                    while (true) {
                        // 生产苹果
                        System.out.println("生产者准备生产苹果："
                                + new SimpleDateFormat("HH:mm:ss.SSS").format(new Date()));
                        basket.produce();
                        System.out.println("生产者生产苹果完毕："
                                + new SimpleDateFormat("HH:mm:ss.SSS").format(new Date()));
                        System.out.println("生产完后有苹果："+basket.getAppleNumber()+"个");
                        // 休眠300ms
                        Thread.sleep(300);
                    }
                } catch (InterruptedException ex) {
                }
            }
        }
        // 定义苹果消费者
        class Consumer implements Runnable {
            private  String junction = "-44" ;
            public  Consumer( String junctionId) {
                this.junction = junctionId;
            }
            public void run() {
                try {
                    while (true) {
                        // 消费苹果
                        System.out.println("消费者准备消费苹果："
                                + new SimpleDateFormat( junction + " HH:mm:ss.SSS").format(new Date()));
                        basket.consume();
                        System.out.println("消费者消费苹果完毕："
                                + new SimpleDateFormat("HH:mm:ss.SSS").format(new Date()));
                        System.out.println("消费完后有苹果："+basket.getAppleNumber()+"个");
                        // 休眠1000ms
                        Thread.sleep(1000);
                    }
                } catch (InterruptedException ex) {
                }
            }
        }

        ExecutorService service = Executors.newCachedThreadPool();
        Producer producer = new Producer();
        Consumer consumer = new Consumer("-54");
        service.submit(producer);
        service.submit(consumer);
        // 程序运行10s后，所有任务停止
        try {
            Thread.sleep(10000);
        } catch (InterruptedException e) {
        }
        service.shutdownNow();
    }
    public static void main(String[] args) {


        BlockingQueueTest.testBasket();
    }
}