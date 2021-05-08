//PROGRAM FOR THIS POINTER EXAMPLE (FINDING GREATER NUMBER)

#include <iostream>
using namespace std;
class Item
	{
		private:int x;
		
		public: Item(){x=0;}
				Item(int a){x=a;}
				Item(Item &a){x=a.x;}
				~Item(){}
				void input(int a){x=a;}
				void output(){cout<<"\nX="<<x;}
				Item greater(Item &a)
					{
						if(a.x>x)
							return a;
						return *this;
					}
	};
	
int main()
	{
		int p,q;
		cout<<"\nEnter two number:";
		cin>>p>>q;
		Item obj1(p),obj2(q);
		Item obj;
		obj=obj1.greater(obj2);
		cout<<"\nGreater Object :";
		obj.output();
		return 0;
	}
