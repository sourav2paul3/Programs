//BASIC OBJECT ORIENTED PROGRAM 2

#include <iostream>
using namespace std;
class Alpha
	{
		private:int x;
		
		public:int y;
		
				void setx(int a)
					{
						x=a;
					}
				int putx()
					{
						return(x);
					}
	};
	
int main(void)
	{
		Alpha alp1,alp2;
		alp1.y=20;
		//alp1.x=10; couldn't work
		alp1.setx(10);
		alp2.setx(5);
		alp2.y=15;
		cout<<"\n1st obj";
		cout<<"\nX="<<alp1.putx();
		cout<<"\nY="<<alp1.y;
		cout<<"\n2st obj";
		cout<<"\nX="<<alp2.putx();
		cout<<"\nY="<<alp2.y;
	}
