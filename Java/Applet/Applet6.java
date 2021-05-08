import java.awt.*;
import java.applet.*;
public class Applet6 extends Applet	
	{
	public void init()
		{
		Checkbox cb1=new Checkbox("B.Sc");
		Checkbox cb2=new Checkbox("M.Sc");
		Checkbox cb3=new Checkbox("P.Hd",true);
		add(cb1);
		add(cb2);
		add(cb3);
	}
	}