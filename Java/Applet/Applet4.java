import java.awt.*;
import java.applet.*;
public class Applet4 extends Applet	
	{
	Label lblName,lblRoll;
	TextField txtRoll,txtName;
	public void init()
		{
		lblRoll=new Label("Your Roll No.:");
		lblName=new Label("Your Name:");
		txtRoll=new TextField();
		txtName=new TextField();
		add(lblRoll);
		add(txtRoll);
		add(lblName);
		add(txtName);
	}
	}