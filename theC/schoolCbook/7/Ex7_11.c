/*
*指向指针的指针常常和指针数组结合着用
*用指向指针的指针编程实现输出多个字符串
*/
 #include<stdio.h>
 #include<string.h>
 
 #define ARR_SIZE 4
 int main()
 {
	 int i;
	 //指针数组的定义再一次看到，有和感想了解吗
	 char *ptr[ARR_SIZE]={"C","Bisic","CPP","Java"};

	 char **p;
	 
	 p=ptr; //让p指向指针数组的首地址，即指向ptr[0];
	 
	 for(i=0;i<ARR_SIZE;i++)
	 {
	 	printf("%s\n",*p);/*输出指针 *p指向的字符串％s后这儿要的还是地址！！*/
	 	p++;                   /*让p指向指针数组 ptr的下一元素*/
	 }	 
 }
