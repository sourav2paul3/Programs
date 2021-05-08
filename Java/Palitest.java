import java.util.*;
class Palitest
	{
	
	public static void main(String args[])
		{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a word:");
		String str=sc.next();
		int x;
		x =spalin(str,0,str.length()-1);
		if(x!=0)
		System.out.println("is a palindrome");
		else
		System.out.println("is not a palindrome");
		}
	public static int spalin(String a,int i,int j)
		{
		while(i<=j)
		{if(a.charAt(i)!=a.charAt(j))
			return 0;
			i++;
			j--;
		}
		return 1;
		}
	
}