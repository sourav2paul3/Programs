//PROGRAM TO ADD TWO COMPLEX NUMBERS USING CONSTRUCTOR

#include <iostream>
using namespace std;

class Complex
	{
		private:float real,imag;
		
		public:Complex()
					{
						real=imag=0;
					}
				Comlex(float r)
					{
						real=r;
						imag=0;
					}
				Complex(float r,float m)
					{
						real=r;
						imag=m;
					}
				Complex (Complex &a)
					{
						real=a.real;
						imag=a.imag;
					}
				void input()
					{
						cout<<"\nEnter real & imaginory parts of the complex number:";
						cin>>real>>imag;
					}
				void output()
					{
						cout<<real<<"+i"<<imag;
					}
				Complex add(Complex a)
					{
						Complex temp;
						temp.real=real+a.real;
						temp.imag=imag+a.imag;
						return temp;
					}
	};
	
int main()
	{
		float r,m;
		cout<<"\nEnter the real and & imaginory parts of the 1st complex number:";
		cin>>r>>m;
		Complex c1(r,m);
		cout<<"\nEnter the real and & imaginory parts of the 2nd complex number:";
		cin>>r>>m;
		Complex c2(r,m);
		Complex c3;
		c3=c1.add(c2);
		cout<<"\nResultand Complex number:";
		c3.output();
		return 0;
	}
