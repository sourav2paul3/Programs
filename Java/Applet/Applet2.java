import java.awt.*;
import java.applet.*;
public class Applet2 extends Applet	
	{
	public void init()
		{
		Label lbl1=new Label("ABC");
		Label lbl2=new Label("XYZ",Label.RIGHT);
		Label lbl3=new Label("PQR",Label.CENTER);
		add(lbl1);
		add(lbl2);
		add(lbl3);
		}
	}