import java.util.*;
class Complex
	{
	private int real,imag;
	public Complex()
		{real=imag=0;}
	public Complex(int a,int b)
		{real=a;imag=b;}
	public Complex(Complex a)
		{
		real=a.real;imag=a.imag;
		}
	public void setComplex(int a,int b)
		{real=a;imag=b;}
	public void putComplex()
		{System.out.println(real+"+"+imag+"i");}
	public Complex addComplex(Complex a)
		{
		Complex temp=new Complex();
		temp.real=real+a.real;
		temp.imag=imag+a.imag;
		return temp;
		}
	}

class CalComplex
{
public static void main(String args[])
	{
	Complex comp1,comp2,comp3;
	comp1=new Complex();
	comp2=new Complex();
	comp3=new Complex();
	int real,imag;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the value of real and imag for 1st:");
	real=sc.nextInt();
	imag=sc.nextInt();
	comp1.setComplex(real,imag);
	System.out.println("Enter the value of real and imag for 2nd:");
	real=sc.nextInt();
	imag=sc.nextInt();
	comp2.setComplex(real,imag);
	comp3=comp1.addComplex(comp2);
	System.out.println("Resultant is:");
	comp3.putComplex();
	}
}