//PEOGRAM TO SWAP TWO OBJECT ELEMNETS

#include <iostream>
using namespace std;

class Item
	{
		private:int x,y;
		
		public:Item(){x=y=0;}
			   Item(int a)
			   	{
			   		x=a;
			   		y=0;
			   	}
			   	Item(int a,int b)
			   		{
			   			x=a;
			   			y=b;
			   		}
			   	Item(Item &a)
			   		{
			   			x=a.x;
			   			y=a.y;
			   		}
			   	void input(int a,int b)
			   		{
			   			x=a;
			   			y=b;
			   		}
			   	void output()
			   		{
			   			cout<<"\nX="<<x
			   				<<"\nY="<<y;
			   		}
			   	friend void swap(Item &,Item &);
			   };
			   
void swap(Item &a,Item &b)
	{
		Item temp;
		temp=a;
		a=b;
		b=temp;
	}
	
int main()
	{
		int x,y;
		cout<<"\nEnter two int for 1st object:";
		cin>>x>>y;
		Item itm1(x,y);
		cout<<"\nEnter two int for 2nd object:";
		cin>>x>>y;
		Item itm2(x,y);
		cout<<"\n1st object:";
		itm1.output();
		cout<<"\n2nd Obejct";
		itm2.output();
		swap(itm1,itm2);
		cout<<"\nAfter swapping";
		cout<<"\n1st object:";
		itm1.output();
		cout<<"\n2nd object:";
		itm2.output();
		return 0;
	}
