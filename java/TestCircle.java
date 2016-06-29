class Point 
{
	private double x;
	private double y;
	
	Point(double _x ,double_y)
	{
		double x=_x;
		double y=_y;
	}
	
	public double getX()
	{
		return x;
	}
	
	public double getY()
	{
		return y;
	}
	
	public void setX(double _x)
	{
		x = _x;
	}
	
	public void setY(double _y )
	{
		y = _y;
	}
}

class Circle
{
	private Point o;
	private double radius;
	
	Circle(double r)
	{
		o = new Point(0,0);
		radius = r;
	} 
	
	Circle(Point p,double r)
	{
		o = p;
		radius = r;
	}
	
	public boolen Contous(Point p)
	{
		if( (p.getX()*p.getX())+p.)
		return true;
	}
		
	public void setO(double x,double y)
	{}
	
	public Point getO()
	{}
	
	public void setRadius(double r)
	{}
	
	public double getRadius()
	{}
	
	public double area()
	{}
	
}

public class TestCircle
{
	public static void main(String[] args)
	{
		
	}
}