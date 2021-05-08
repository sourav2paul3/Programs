import java.util.*;
class Record
	{
	private int roll,total,sub1,sub2;
	public Record()
		{roll=sub1=sub2=0;}
	public Record(int a,int b,int c)
		{roll=a;sub1=b;sub2=c;}
	public Record(Record a)
		{roll=a.roll;sub1=a.sub1;sub2=a.sub2;}
	public void setRecord(int a,int b,int c)
		{roll=a;sub1=b;sub2=c;}
	public void putRecord()
		{System.out.println("Roll="+roll);
		System.out.println("Sub1="+sub1);
		System.out.println("Sub2="+sub2);}
	public void subSum()
		{total=sub1+sub2;}
	}

class Student
	{
	public static void main(String args[])
	{
	Record rc1,rc2;
	int roll,sub1,sub2;
	Scanner sc=new Scanner(System.in);
	rc1=new Record();
	rc2=new Record();
	System.out.println("Enter roll,sub1,sub2 for 1st:");
	roll=sc.nextInt();
	sub1=sc.nextInt();
	sub2=sc.nextInt();
	rc1.setRecord(roll,sub1,sub2);
	rc1.subSum();
	System.out.println("Enter roll,sub1,sub2 for 2nd:");
	roll=sc.nextInt();
	sub1=sc.nextInt();
	sub2=sc.nextInt();
	rc2.setRecord(roll,sub1,sub2);
	rc2.subSum();
	System.out.println("1st Record:");
	rc1.putRecord();
	System.out.println("2nd Record:");
	rc2.putRecord();
	}
	}