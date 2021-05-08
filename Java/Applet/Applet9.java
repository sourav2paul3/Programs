import java.awt.*;
import java.applet.*;
public class Applet9 extends Applet	
	{
	public void init()
		{List list1=new List(4);
		List list2=new List(5,true);
		list1.add("AAA");
		list1.add("BBB");
		list1.add("CCC");
		list2.add("XXX");
		list2.add("YYY");
		list2.add("ZZZ");
		add(list1);
		add(list2);
	}
	}