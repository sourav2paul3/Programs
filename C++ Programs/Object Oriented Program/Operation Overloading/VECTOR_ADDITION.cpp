//PROGRAM TO ADD TWO VECTORS USING OPERATION OVERLOADING

#include <iostream>
using namespace std;

class Vector
	{
		private:int max,*v;
		public: Vector();
				Vector(int);
				Vector(Vector &);
				~Vector(){delete v;}
				void input();
				void output();
				Vector operator+(Vector &);
	};
	
Vector::Vector()
	{
		max=0,v=NULL;
	}
	
Vector::Vector(int n)
	{
		max=n;
		v=new int[max];
		for(int i=0;i<max;i++)
			v[i]=0;
	}
	
Vector::Vector(Vector &a)
	{
		max=a.max;
		v=new int[max];
		for(int i=0;i<max;i++)
			v[i]=a.v[i];
	}

void Vector::input()
	{
		cout<<"\nEnter "<<max<<" elements of vector:";
		for(int i=0;i<max;i++)
			cin>>v[i];
	}
	
void Vector::output()
	{
		cout<<"\n(";
		for(int i=0;i<max;i++)
			{
			cout<<v[i];
			if(i+1<max)
				cout<<",";
			}
		cout<<")";
	}
	
Vector Vector::operator+(Vector &a)
	{
		if(max!=a.max)
			{
				cout<<"\nAddition not possible";
				Vector vect;
				return vect;
			}
		Vector vect(a.max);
		for(int i=0;i<a.max;i++)
			vect.v[i]=v[i]+a.v[i];
		return vect;
	}
	
int main()
	{
		int n;
		cout<<"\nEnter the dimenssion of each vector:";
		cin>>n;
		Vector v1(n),v2(n);
		cout<<"\nInput for 1st vector";
		v1.input();
		cout<<"\nInput for 2nd vector";
		v2.input();
		Vector v3;
		v3=v1+v2;
		cout<<"\nResultant vector";
		v3.output();
		return 0;
	}
