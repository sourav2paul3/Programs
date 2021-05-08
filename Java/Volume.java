//PROGRAM TO CALCULATE VOLUME OF CUBE AND PARALLELEPIPED

import java.util.*;
interface IFigure
	{double volume();
	 void display();
	}

class Cube implements IFigure
	{private double a;
	public Cube(){a=0;}
	public Cube(double a){this.a=a;}
	public Cube(Cube x){this.a=x.a;}
	public void setData(double a){this.a=a;}
	public double volume(){return a*a*a;}
	public void display()
	{System.out.println("CUBE:");
	System.out.println("Side="+a);}
	}
class Parallelepiped implements IFigure
	{private double l,h,b;
	public Parallelepiped(){l=b=h=0;}
	public Parallelepiped(double l,double h,double b)
		{this.l=l;this.b=b;this.h=h;}
	public Parallelepiped(Parallelepiped a){l=a.l;h=a.h;b=a.b;}
	public void setData(double l,double h,double b){this.l=l;this.h=h;this.b=b;}
	public double volume(){return b*l*h;} 
	public void display()
		{System.out.println("PARALLELEPIPED");
		System.out.println("Length="+l);
		 System.out.println("Height="+h);
		System.out.println("Breadth="+b);}
	}

class Volume
	{public static void main(String args[])
		{IFigure figure;
		Cube cube=new Cube(5);
		Parallelepiped parap=new Parallelepiped(7,8,9);
		figure=greater(cube,parap);
		figure.display();
		System.out.println("Volume is="+figure.volume());
		}
	static IFigure greater(Cube a,Parallelepiped b)
		{if(a.volume()>b.volume())
			return a;
		return b;
		}
	}
