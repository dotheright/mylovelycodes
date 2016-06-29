/*
*数组的输入输出；
*指针变量法引用数组元素
*/
int main()
{
    int a[10],i,*p=a;


    for(i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<10;i++)
    {
        printf("%d",*(p+i));
    }
}
