import java.util.*;
class Expression
	{
	 public static void main(String args[])
		{
		int n,i,sum=0;
		Scanner obj=new Scanner(System.in);
		n=obj.nextInt();
		for(i=1;i<=n;i++)
		sum+=i;
		System.out.println("Value is:"+sum);
		}
	}