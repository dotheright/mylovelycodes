
#coding: utf-8
import multiprocessing
import time

#global g_var = 1;

g_var =1;

def func(msg,i):
    g_var +=1;
#    print str(i)+"th","msg:",msg,"g_var="+str(g_var);
    time.sleep(2)
    print i,"end"

if __name__ == "__main__":
    pool = multiprocessing.Pool(processes = 3)
    for i in xrange(5):
        msg = "hello %d" %(i)
        pool.apply_async(func, (msg,i, ))   #维持执行的进程总数为processes，当一个进程执行完毕后会添加新的进程进去
    print "Mark~ Mark~ Mark~~~~~~~~~~~~~~~~~~~~~~"
    pool.close()
    pool.join()   #调用join之前，先调用close函数，否则会出错。执行完close后不会有新的进程加入到pool,join函数等待所有子进程结束
    print "Sub-process(es) done."
