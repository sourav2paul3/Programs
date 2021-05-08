//PROGRAM TO MULTIPLY TWO COMPLEX

#include <iostream>
using namespace std;

class Complex
	{
		private: float real,imag;
		
		public: Complex()
				{
				}
				Complex(Complex &a)
					{
						real=a.real;
						imag=a.imag;
					}
				Complex(float r,float m)
					{
						real=r;
						imag=m;
					}
				void input()
					{
						cout<<"\nEnter the real and imaginory parts of the complex number:";
						cin>>real>>imag;
					}
				void output()
					{
						cout<<real<<"+i"<<imag;
					}
				Complex mul(Complex a)
					{
						Complex temp;
						temp.real=(real*a.real)-(imag*a.imag);
						temp.imag=(real*a.imag)+(imag*a.real);
						return temp;
					}
	};
	
int main()
	{
		float r,m;
		cout<<"\nEnter real and imaginory parts of 1st complex number:";
		cin>>r>>m;
		Complex c1(r,m);
		cout<<"\nEnter real and imaginory parts of 2nd complex number:";
		cin>>r>>m;
		Complex c2(r,m);
		cout<<"\n1st complex number:";
		c1.output();
		cout<<"\n2nd complex number:";
		c2.output();
		Complex c3;
		c3=c1.mul(c2);
		cout<<"\nResultant Complex number is:";
		c3.output();
		return 0;
	}
