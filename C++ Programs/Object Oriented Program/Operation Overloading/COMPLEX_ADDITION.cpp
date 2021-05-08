//PROGEAM TO ADD TWO COMPLEX NUMBER USING OPERATION OVERLOADING

#include <iostream>
using namespace std;

class Complex
	{
		private:float imag,real;
		public: Complex(){real=imag=0;}
				Complex(float a){real=a,imag=0;}
				Complex(float a,float b){real=a,imag=b;}
				Complex(Complex &a){real=a.real,imag=a.imag;}
				~Complex(){}
				void input(float a,float b)
					{
						real=a,imag=b;
					}
				void output()
					{
						cout<<"\n"<<real<<"+i"<<imag;
					}
				Complex operator+(Complex &);
			};

Complex Complex::operator+(Complex &a)
	{
		Complex temp;
		temp.real=real+a.real;
		temp.imag=imag+a.imag;
		return temp;
	}
int main()
	{
		float r,m;
		cout<<"\nEnter the real and imaginory part of the complex no";
		cin>>r>>m;
		Complex c1(r,m);
		cout<<"\nEnter the real and imaginory part of the complex no";
		cin>>r>>m;
		Complex c2(r,m);
		Complex c;
		c=c1+c2;
		cout<<"\nResultant Complex number";
		c.output();
		return 0;
	}
