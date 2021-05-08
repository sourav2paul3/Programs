//PROGRAM TO ADD TWO COMPLEX NO USING TEMPLETE

#include <iostream>
using namespace std;

template <class T>

class Complex
	{
		protected: T real,imag;
		private:Complex()
				{
				real=imag=0;
				}
				Complex(T r,T i)
					{
					real=r,imag=i;
					}
				Complex(Complex &a)
					{
						real=a.real;
						imag=a.imag;
					}
				void input()
						{
							cout<<"\nEnter the value of real and imag value of the complex number:";
							cin>>real>>imag;
						}
				void display()
					{
					cout<<"\n"<<real<<"+i"<<imag;
					}
				T operator*(Complex &a,Complex &b)
					{	Complex com;
						com.real=b.real+a.real;
						com.imag=b.imag+a.imag;
						return com;
					}
		};

int main()
	{
		Complex <int>cmp1,<int>cpm2,<int>comp;
		cout<<"\nInput for 1st complex number:";
		cmp1.input();
		cout<<"\nInput for 2nd Complex Number:";
		cmp2.input();
		comp=cmp1+cmp2;
		comp.display();
		return 0;
	}
