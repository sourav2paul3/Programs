//PROGRAM TO SUBTRACT TWO COMPLEX NUMBERS

#include <iostream>
using namespace std;

class Complex
	{
		private: float real,img;
		public: void input(float r,float i)
					{
						real=r;
						img=i;
					}

				void output()
					{
						cout<<"\n"<<real<<"+i"<<img;
					}

				Complex sub(Complex a);
	};

Complex Complex::sub(Complex a)
		{
			Complex temp;
			temp.real=real-a.real;
			temp.img=img-a.img;
			return temp;
		}
		
int main(void)
	{
		float r,m;
		Complex c1,c2,c3;
		cout<<"\nEnter real and complex part of 1st complex veriable:";
		cin>>r>>m;
		c1.input(r,m);
		cout<<"\nEnter real and complex part of 2st complex veriable:";
		cin>>r>>m;
		c2.input(r,m);
		c3=c1.sub(c2);
		cout<<"\nOUTPUT";
		cout<<"\n1st Complex no:";
		c1.output();
		cout<<"\n2nd Complex no:";
		c2.output();
		cout<<"\nResultand Output is:";
		c3.output();
		return 0;
	}
