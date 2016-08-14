/*
*数组的输入输出；
*  通过指针变量增一运算引用数组元素
****算法的效率最高，其他几个差不多
*/
int main()
{
    int a[10],*p;

    for(p=a;p<a+10;p++)
    {
        scanf("%d",p);
    }
    for(p=a;p<p+10;p++)
    {
        printf("%d",*p);
    }

    return 0;
}
