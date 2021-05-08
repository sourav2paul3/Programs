import java.awt.*;
import java.applet.*;
public class Applet8 extends Applet	
	{
	public void init()
		{Choice ch1=new Choice();
		Choice ch2=new Choice();
		ch1.add("AAA");
		ch1.add("BBB");
		ch2.add("XXX");
		ch2.add("YYY");
		ch2.add("ZZZ");
		add(ch1);
		add(ch2);
	}
	}