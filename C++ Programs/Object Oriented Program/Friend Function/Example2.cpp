//PROGRAM FOR SUBSTRACTING TWO COMPLEX VARIBLE USING FRIEND FUNCTION

#include <iostream>
using namespace std;

class Complex
	{
		private:float real,imag;
		
		public:Complex(){real=imag=0;}
				Complex(float r){real=r;imag=0;}
				Complex(float r,float m)
					{
						real=r;
						imag=m;
					}
				Complex(Complex &a)
					{
						real=a.real;
						imag=a.imag;
					}
				~Complex(){}
				void input(float r,float m)
					{
						real=r;
						imag=m;
					}
				void output()
					{
						cout<<real<<"+i"<<imag;
					}
				friend Complex subs(Complex &,Complex &);
		};
Complex subs(Complex &a,Complex &b)
	{
		Complex temp;
		temp.real=a.real-b.real;
		temp.imag=a.imag-b.imag;
		return temp;
	}
		
int main()
	{
		float r,m;
		cout<<"\nEnter the real and imag part of 1st complex variable:";
		cin>>r>>m;
		Complex c1(r,m);
		cout<<"\nEnter the real and imag part of 2st complex variable:";
		cin>>r>>m;
		Complex c2(r,m);
		Complex c;
		c=subs(c1,c2);
		cout<<"\nResultant Complex number:";
		c.output();
		return 0;
	}
