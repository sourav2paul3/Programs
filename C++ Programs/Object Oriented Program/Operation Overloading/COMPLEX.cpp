//PROGRAM TO ADD TWO COMPLEX IN VARIOUS WAYS

#include <iostream>
using namespace std;

class Complex
	{
		private:float real,imag;
		public: Complex(){real=imag=0;}
				Complex(float a,float b){real=a,imag=b;}
				Complex(Complex &a){real=a.real,imag=a.imag;}
				~Complex(){}
				void input()
					{
						cout<<"\nEnter the real and imag part of complex nummber:";
						cin>>real>>imag;
					}
				void output()
					{
						cout<<real<<"+i"<<imag;
					}
				friend Complex operator+(Complex &,Complex &);
				friend Complex operator+(Complex &,float);
				friend Complex operator+(float,Complex &);
	};
	
Complex operator+(Complex &a,Complex &b)
	{
		Complex com;
		com.real=a.real+b.real;
		com.imag=a.imag+b.imag;
		return com;
	}
	
Complex operator+(Complex &a,float x)
	{
		Complex com;
		com.real=a.real+x;
		com.imag=a.imag;
		return com;
	}

Complex operator+(float x,Complex &a)
	{
		Complex com;
		com.real=a.real+x;
		com.imag=a.imag;
		return com;
	}
	
int main()
	{
		float r,i;
		cout<<"\nEnter the real and imag part of the variable:";
		cin>>r>>i;
		Complex c1(r,i),comp;
		cout<<"\nEnter a number to add:";
		cin>>r;
		comp=c1+r;
		cout<<"\nResul is:";
		comp.output();
		return 0;
	}
