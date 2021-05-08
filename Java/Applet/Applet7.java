import java.awt.*;
import java.applet.*;
public class Applet7 extends Applet	
	{
	public void init()
		{CheckboxGroup g1=new CheckboxGroup();
		CheckboxGroup g2=new CheckboxGroup();
		Checkbox cb1=new Checkbox("Science",g1,true);
		Checkbox cb2=new Checkbox("Arts",g1,false);
		Checkbox cb3=new Checkbox("Commerce",g1,false);
		Checkbox cb4=new Checkbox("Male",g2,false);
		Checkbox cb5=new Checkbox("Female",g2,false);
		add(cb1);
		add(cb2);
		add(cb3);
		add(cb4);
		add(cb5);
	}
	}