//PROGRAM TO CALCULATE TWO VECTORS USING FRIEND FUNCTION

#include <iostream>
using namespace std;

class Vector
	{
		private:int n,*v;
		
		public:Vector()
				{
					n=0;
					v=NULL;
				}
				Vector(int);
				Vector(Vector &);
				~Vector()
					{
						delete v;
					}
				void input();
				void output();
				friend Vector add(Vector &,Vector &);
	};
	
Vector::Vector(int k)
	{
		n=k;
		v=new int[n];
		for(int i=0;i<n;i++)
			v[i]=0;
	}
	
Vector::Vector(Vector &a)
	{
		n=a.n;
		v=new int[n];
		for(int i=0;i<n;i++)
			v[i]=a.v[i];
	}
	
void Vector::input()
	{
		cout<<"\nEnter "<<n<<"int:";
		for(int i=0;i<n;i++)
			cin>>v[i];
	}
	
void Vector::output()
	{
		for(int i=0;i<n;i++)
			cout<<" "<<v[i];
	}
	
Vector add(Vector &a,Vector &b)
	{
		Vector temp;
		if(a.n!=b.n)
			{
				cout<<"\nAddition not possible";
				return temp;
			}
		temp.n=a.n;
		temp.v=new int[temp.n];
		for(int i=0;i<a.n;i++)
			temp.v[i]=a.v[i]+b.v[i];
		return temp;
	}
	
int main()
	{
		int n;
		cout<<"\nEnter the diamnesion of ecach vector:";
		cin>>n;
		Vector vect1(n),vect2(n);
		cout<<"\nInput for 1st vector";
		vect1.input();
		cout<<"\nInut for 2nd vector";
		vect2.input();
		Vector vect;
		vect=add(vect1,vect2);
		cout<<"\nresultant vector is";
		vect.output();
		return 0;
	}
