/*************************************************************************
	> File Name: Boy.java
	> Author: guoqingyao
	> Mail: stepbystepto@163.com 
	> Created Time: 2016年02月08日 星期一 15时38分14秒
 ************************************************************************/
import java.applet.*;
import java.awt.*;

public class  Boy extends Applet
{
	public void  paint( Graphics g)
	{
		g.setColor(Color.red);
		g.drawString("我一邊喝咖啡，一邊學習java",5,30);
	}
}
