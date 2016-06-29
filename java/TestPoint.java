class Point
{
	double x,y,z;
	
	Point(double _x,double _y,double _z)
	{
		x = _x;
		y = _y;
		z = _z;	
	}
	
	void setPoint(double _x,double _y,double _z)
	{
		x = _x;
		y = _y;
		z = _z;	
	}
	
	double getDistanceSqrt(Point p)
	{
		return (x-p.x)*(x-p.x) + (y-p.y)*(y-p.y) + (z-p.z)*(z-p.z);
	}
		
}

public class TestPoint
{
	public static void main(String[] args)
	{
		Point p=new Point(1.5,2,6);
		Point p0=new Point(0,0,0);
		
		p.setPoint(6,8,10);
		
		System.out.println(p.getDistanceSqrt(new Point(1,2,3)));
	}
}