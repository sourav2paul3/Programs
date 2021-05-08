//PROGRAM TO FIND GREATER FIGURE USING FRIEND FUNCTION

#include <iostream>
using namespace std;

class Square;
class Rectangle
	{
		private:int l,b;
		
		public: Rectangle(){l=b=0;}
				Rectangle(int a,int b)
					{
					l=a;
					this->b=b;
					}
				Rectangle(Rectangle &a)
					{
					l=a.l;
					b=a.b;
					}
				~Rectangle(){}
				void input()
					{
						cout<<"\nEnter the length and bredth:";
						cin>>l>>b;
					}
				void output()
					{
						cout<<"\nL="<<l
							<<"\nB="<<b;
					}
				friend void greater(Rectangle &,Square &);
			};
			
class Square
	{
		private: int l;
		
		public: Square(){l=0;}
				Square(int a){l=a;}
				Square(Square &a){l=a.l;}
				~Square(){}
				void input()
					{
						cout<<"\nEnter the length of square:";
						cin>>l;
					}
				void output()
					{
						cout<<"\nL="<<l;
					}
				friend void greater(Rectangle &,Square &);
		};
		
void greater(Rectangle &r,Square &s)
	{
		if(r.l*r.b>s.l*s.l)
			cout<<"\nArea of rectangle:"<<r.l*r.b;
		else
			cout<<"\nArea of square:"<<s.l*s.l;
	}
	
int main()
	{
		int x,y;
		cout<<"\nEnter the length & bredth of recangle:";
		cin>>x>>y;
		Rectangle rect(x,y);
		cout<<"\nEnter the length of square:";
		cin>>x;
		Square sq(x);
		cout<<"\nGreater Figure:";
		::greater(rect,sq);
		return 0;
	}
