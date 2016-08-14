/***********************************************
设G=(V,E)是一个每条边都有非负长度的有向图，有一个特异的顶点s称为缘。
单源最短路径问题，或者称为最短路径问题，是要确定从s到V中没一个其他
顶点的距离，这里从顶点s到x的距离定义为从s到x的最短路径问题。这个问题
可以用Dijkstra算法解决。下面我给我了c++下的源代码！   --by 伟伟猪
************************************************/
#include<iostream.h>
void main()
{
 int infinity=100,j,i,n,k,t,**w,*s,*p,*d;
 cout<<"input the value of n:";
 cin>>n;
 cout<<endl;

 d=new int[n];
 s=new int[n];
 p=new int[n];
 w=new int*[n];
    for(i=0;i<n;i++) {w[i]=new int[n];} 
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   cin>>w[i][j];


    for(s[0]=1,i=1;i<n;i++)
 {
  s[i]=0;d[i]=w[0][i];
  if(d[i]<infinity) p[i]=0;
  else p[i]=-1;
 }

    
 
 for(i=1;i<n;i++)
 {
        t=infinity;k=1;
  for(j=1;j<n;j++)
   if((!s[j])&&(d[j]<t)) {t=d[j];k=j;}
     s[k]=1;//point k join the S
        for (j=1;j<n;j++)
   if((!s[j])&&(d[j]>d[k]+w[k][j]))
   {d[j]=d[k]+w[k][j];p[j]=k;}

 }
  cout<<"从源点到其它顶点的最短距离依次如下："; 
  for(i=1;i<n;i++) cout<<d[i]<<" ";
 
 

}
/*********
顶点个数用n表示，这里给出的例子n=6
100 1 12 100 100 100
100 100 9 3 100 100
100 100 100 100 5 100
100 100 4 100 13 15
100 100 100 100 100 4
100 100 100 100 100 100
具体例子见  电子工业出版社 《算法设计技巧与分析》148页
************/