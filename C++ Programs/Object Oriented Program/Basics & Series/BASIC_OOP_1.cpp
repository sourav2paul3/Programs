//BASIC OBJECT ORIENTED PROGRAM 1

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
	};
	
int main(void)
	{
		Item obj1,obj2;
		obj1.input(10,20);
		obj2.input(5,15);
		cout<<"1st Objective";
		obj1.output();
		cout<<"\n2nd Objective";
		obj2.output();
		return 0;
	}
