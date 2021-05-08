//PROGRAM FOR DOT PRODUCT OF TWO VECTOR USING FRIEND FUNCTION

#include <iostream>
using namespace std;

class Vector
	{
		private:int *v;
				int n;
				
		public:Vector();
			   Vector(int);
			   Vector(Vector &);
			   ~Vector();
			   void input();
			   void output();
			   friend int scalar_product(Vector &,Vector &);
	};
	
Vector::Vector()
	{
		n=0;
		v=NULL;
	}
	
Vector::Vector(int n)
	{
		this->n=n;
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
	
Vector::~Vector()
	{
		delete v;
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

int scalar_product(Vector &a,Vector &b)
	{
		int sprod=0;
		if(a.n!=b.n)
			{
				cout<<"\nScalar product not possible";
				return sprod;
			}
		for(int i=0;i<a.n;i++)
			sprod+=a.v[i]*b.v[i];
		return sprod;
	}
	
int main()
	{
		int n;
		cout<<"\nEnter the diamenssion of each vector:";
		cin>>n;
		Vector vect1(n),vect2(n);
		cout<<"\nInput for 1st vector:";
		vect1.input();
		cout<<"\nInput for 2nd vector:";
		vect2.input();
		int sprod=scalar_product(vect1,vect2);
		cout<<"\nOUTPUT";
		cout<<"\n1st vector";
		vect1.output();
		cout<<"\n2nd vector";
		vect2.output();
		cout<<"\nRequired scalar product is:"<<sprod;
		return 0;
	}
