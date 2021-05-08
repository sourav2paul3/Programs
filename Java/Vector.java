import java.util.*;
class VectData
	{
	private int n; int arr[];
	public VectData()
		{n=0;}
	public VectData(int k)
		{n=k;arr=new int[n];}
	public VectData(VectData a)
		{n=a.n;arr=new int[n];
		for(int i=0;i<n;i++)
			arr[i]=a.arr[i];
		}
	public void setVectData()
		{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter"+n+"values:");
		for(int i=0;i<arr.length;i++)
			arr[i]=sc.nextInt();
		}
	public void putVectData()
		{System.out.println("Vector is:");
		for(int i=0;i<arr.length;i++)
			System.out.println(arr[i]+" ");
		}
	public VectData addVect(VectData a)
		{
		VectData temp;
		temp=new VectData();
		temp.n=n;
		for(int i=0;i<n;i++)
		temp.arr[i]=arr[i]+a.arr[i];
		return temp;
		}
	}

class Vector
	{
	public static void main(String args[])
		{
		VectData vect1,vect2,vect3;int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("\nEnter the dimension of vector");
		n=sc.nextInt();
		vect1=new VectData(n);
		vect2=new VectData(n);
		System.out.println("\nEnter values for 1st:");
		vect1.setVectData();
		System.out.println("\nEnter values for 2nd:");
		vect2.setVectData();
		vect3=new VectData();
		vect3=vect1.addVect(vect2);
		System.out.println("Result is:");
		vect3.putVectData();
		}
	}