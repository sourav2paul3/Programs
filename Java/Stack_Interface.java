//Stack Operation using Interface;

import java.util.*;
interface IStack
	{void push(int item);
	int pop();
	boolean StackEmpty();
	boolean StackFull();
	}

class Stack implements IStack
	{private int info[];
	private int top;
	public Stack(int n)
		{info=new int[n];
		 top=-1;
		}
	public boolean StackFull()
		{if(top==info.length-1)
			return true;
		return false;
		}
	public boolean StackEmpty()
		{if(top==-1)
			return true;
		return false;
		}
	public void push(int item)
		{if(StackFull())
		   {System.out.println("Stack overflow");
		    }
		else
		info[++top]=item;
		}
	public int pop()
		{if(StackEmpty())
		   {System.out.println("Stack underflow");
		    return 0;}
		else
		return info[top--];
		}
	}
class Stack_Interface
	{public static void main(String args[])
		{int n;
		IStack stk=new Stack(5);
		Scanner sc=new Scanner(System.in);
		do{
		System.out.println("1:To check Stack Empty");
		System.out.println("2:To check Stack Full");
		System.out.println("3:To Push onto Stack");
		System.out.println("4:To from Stack");
		System.out.println("0:To exit");
		System.out.print("Enter your choice:");
		n=sc.nextInt();
		switch(n)
			{case 1:if(stk.StackEmpty())
				System.out.println("Stack is Empty");
				else
				System.out.println("stack isnot Empty");
				break;
			case 2:if(stk.StackFull())
				System.out.println("Stack is Full");
				else
				System.out.println("\nStack isnot Full");
				break;
			case 3:int x;
				System.out.print("Enter an element to push on to stack");
				x=sc.nextInt();
				stk.push(x);
				break;
			case 4:System.out.println("Popped element is:"+stk.pop());
				break;
			case 0:System.out.println("The End");
				break;
			default:System.out.println("Invalid choice");
			}
	}while(n!=0);
}
}