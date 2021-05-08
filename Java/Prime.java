import java.util.*;
class Prime
	{
	public static void main(String args[])
		{
		int x;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter an int:");
		x=sc.nextInt();
		int flag=isprime(x,2);
		if(flag==1)
		System.out.println(x+"isnot prime");
		else
		System.out.println(x+"is prime");
	}
	static int isprime(int n,int i)
		{
		if(i<=n)
		if(n%i!=0)
		return isprime(n,i++);
		else
		return 1;
	return 0;
}
	}