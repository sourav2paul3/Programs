//PROGRAM TO ADD & WITH EACH DATA MEMBER

#include <iostream>
using namespace std;
class Item
	{
		private:int x,y;
		public: Item(){x=y=0;}
				Item(int a){x=a,y=0;}
				Item(int a,int b){x=a,y=b;}
				Item(Item &a){x=a.x,y=a.y;}
				~Item(){}
				void input()
					{
						cout<<"\nEnter the value of x and y:";
						cin>>x>>y;
					}
				void output()
					{
						cout<<"\nX="<<x
							<<"\nY="<<y;
					}
			friend Item operator+(Item &,int);
			friend Item operator+(int,Item &);
		};
		
Item operator+(Item &a,int k)
	{
		Item temp;
		temp.x=a.x+k;
		temp.y=a.y+k;
		return temp;
	}
	
Item operator+(int k,Item &a)
	{
		Item temp;
		temp.x=a.x+k;
		temp.y=a.y+k;
		return temp;
	}
	
int main()
	{
		int x,y;
		cout<<"\nEnter two int:";
		cin>>x>>y;
		Item itm1(x,y);
		Item itm;
		itm=itm1+7;
		itm.output();
		return 0;
	}
