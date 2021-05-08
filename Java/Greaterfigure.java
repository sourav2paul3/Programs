//PROGRAM TO FIND THE GREATER FIGUE

import java.util.*;

abstract class Figure
	{
	abstract public double area();
	abstract public void show();
	}

class Rectangle extends Figure
	{
	private double l,b;
	public double area()
		{return l*b;}
	public Rectangle(double l,double b)
		{this.l=l;this.b=b;}
	public void show()
		{System.out.println("Rectangle:");
		System.out.println("Lenght="+l);
		System.out.println("Breadth="+b);}

class Square extends Figure
	{
	private double l;
	public double area()
		{return l*l;}
	public Square(double l)
		{this.l=l;}
	public void show()
		{System.out.println("Square:");
		System.out.println("Length="+l);}
	}

class Greaterfigure
	{
	public static void main(String args[])
		{
		Scanner sc=new Scanner(System.in);
		double lrect,b,lsquare;
		System.out.print("Enter the length and bredth of rectangle:");
		lrect=sc.nextDouble();
		b=sc.nextDouble();
		System.out.print("\nEnter the length of square:");
		lsquare=sc.nextDouble();
		Rectangle ret=new Rectangle(lrect,b);
		Square sq=new Square(lsquare);
		Figure fig;
		fig=greater_figure(ret,sq);
		fig.show();
		System.out.println("\nArea:"+fig.area());
		}
	static Figure greater_figure(Rectangle r,Square s)
		{
		if(r.area()>s.area())
		return r;
		return s;
		}
	}
