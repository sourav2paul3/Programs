import java.util.*;
class Expvalue
	{
	private int n;double x;
	public Expvalue()
		{x=n=0;}
	public Expvalue(double a,int b)
		{x=a;n=b;}
	public Expvalue(Expvalue a)
		{x=a.x;n=a.n;}
	public void setExpvalue(double a,int b)
		{x=a;n=b;}
	public void putExpvalue()
		{System.out.println("X="+x);
		 System.out.println("n="+n);
		}
	public double cal()
	{
		double term,sum;
		term=sum=1;
		for(int i=1;i<=n;i++)
		{
		term=term*x;
		sum+=term;
		}
		return sum;
	}
	}

class Expression1
	{public static void main(String args[])
	{
	Expvalue exp=new Expvalue();
	int n;
	double x;
	Scanner sc=new Scanner(System.in);
	System.out.println("\nEnter the value of x,n:");
	x=sc.nextDouble();
	n=sc.nextInt();
	exp.setExpvalue(x,n);
	double result;
	result=exp.cal();
	exp.putExpvalue();
	System.out.println("Result is:"+result);
	}
	}