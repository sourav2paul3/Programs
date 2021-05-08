import java.util.*;
class Test
	{
	public static void main(String args[])
		{
		int n,input[],temp,smallValue,sum,value;
		boolean flag=true;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		input=new int[n];
		for(int i=0;i<n;i++)
		{
			input[i]=sc.nextInt();
		}
		sum=temp=value=0;
		smallValue=input[0];
		for(int i=0;i<n;i++)
		{	temp=0;
			flag=true;
			if(input[i]<smallValue)
				smallValue=input[i];
			value=input[i];
			for(int j=i;j<n;j++)
			{
				if(value<=input[j])
					temp=temp+value;
				else
				{
					flag=false;
					break;
				}
			}
		if(flag==true && temp>sum)
			sum=temp;
		}
		System.out.println(sum);
		smallValue=smallValue*n;
		if(sum<smallValue)
			sum=smallValue;
		System.out.println(sum);
		}
	}