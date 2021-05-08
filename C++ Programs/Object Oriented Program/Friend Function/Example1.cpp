//EXAMPLE OF FRIEND FUNCTION TO ADD TWO OBJECT

#include <iostream>
using namespace std;

class Item
	{
		private:int x,y;
		
		public:void input(int a,int b)
					{
						x=a;
						y=b;
					}
				void output()
					{
						cout<<"\nX="<<x
							<<"\nY="<<y;
					}
				friend Item add(Item &,Item &);
	};
	
Item add(Item &a,Item &b)
	{
		Item temp;
		temp.x=a.x+b.x;
		temp.y=a.y+b.y;
		return temp;
	}
	
int main()
	{
		int x,y;
		Item obj1,obj2;
		cout<<"\nEnter two int for 1st objective:";
		cin>>x>>y;
		obj1.input(x,y);
		cout<<"\nEnter two int for 2nd objective:";
		cin>>x>>y;
		obj2.input(x,y);
		Item obj;
		obj=add(obj1,obj2);
		cout<<"\nResultant Obj:";
		obj.output();
		return 0;
	}
