import java.awt.*;
import java.applet.*;
public class Applet3 extends Applet	
	{
	public void init()
	{
	Label x=new Label();
	Label y=new Label("XYZ");
	x.setText("ABC");
	String s=y.getText();
	x.setText(s+"PPP");
	y.setAlignment(Label.CENTER);
	add(x);
	add(y);
	}
	}