import java.util.*;
class Test
	{
	public static void main(String args[])
		{
		int arr[],n;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter n:-");
		n=sc.nextInt();
		arr=new int[n];
		System.out.print("\nEnter elements:-");
		for(int i=0;i<n;i++)
			arr[i]=sc.nextInt();
		
		for(int i=0;i<n;i++)
			{
			for(int j=i+1;j<n;j++)
				{
				if(arr[i]==arr[j])
					{
					for(int k=j;k<n-1;k++)
						arr[k]=arr[k+1];
					n=n-1;
					}
				}
			}
		for(int i=0;i<n;i++)
			System.out.print(arr[i]+" ");
			}
			}