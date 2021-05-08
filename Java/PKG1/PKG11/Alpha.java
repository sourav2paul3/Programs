package PKG1.PKG11;
public class Alpha
	{
	private int x,y,z;
	public void setData(int a,int b,int c)
		{x=a;y=b;z=c;
		}
	public void putData()
	{System.out.println("X="+x);
	System.out.println("Y="+y);
	System.out.println("Z="+z);
	}
	public String toString()
		{String s="Hello Java,Result="+(x+y+z);
		return s;
		}
	}