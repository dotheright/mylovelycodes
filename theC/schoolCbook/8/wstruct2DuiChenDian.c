#include <stdio.h>

struct dot
{
	int nX;
	int nY;
};

struct dot SymmetricalDot(struct dot sDot)/*求对称点函数*/
{
	struct dot dSDot;/*定义对称点结构体变量*/
	dSDot.nX = -sDot.nX;
	dSDot.nY = -sDot.nY;
	return dSDot;/*将对称点返回给主调函数*/
}

int main()
{
	struct dot  dPoint;
	struct dot  dSPoint;/*点dPoint的对称点*/

	printf("Please enter two members of a Point:\n");
	scanf("%d%*c%d",&dPoint.nX,&dPoint.nY);  //嘿嘿中间加%*c还是很有用的

	dSPoint = SymmetricalDot(dPoint);/*调用求对称点函数*/

	printf("symmetrical dot:%d,%d\n",dSPoint.nX,dSPoint.nY);/*输出对称点*/
}
