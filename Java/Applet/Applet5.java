import java.awt.*;
import java.applet.*;
public class Applet5 extends Applet	
	{
	Label lblName,lblRoll;
	TextField txtRoll,txtName;
	Button btn;
	public void init()
		{
		lblRoll=new Label("Your Roll No.:");
		lblName=new Label("Your Name:");
		txtRoll=new TextField();
		txtName=new TextField();
		btn=new Button("Submit");
		add(lblRoll);
		add(txtRoll);
		add(lblName);
		add(txtName);
		add(btn);
	}
	}