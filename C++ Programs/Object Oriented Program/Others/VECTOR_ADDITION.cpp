//PROGRAM TO ADD TWO VECTORS

#include <iostream>
const int MAX=100;
using namespace std;

class Vector
	{
		private:int v[MAX];
				int n;
				
		public:void input(int);
				void output();
				Vector add(Vector);
	};
	
void Vector::input(int k)
	{
		n=k;
		cout<<"\nEnter "<<n<<" integers:";
		for(int i=0;i<n;i++)
			cin>>v[i];
	}
	
void Vector::output()
	{
		for(int i=0;i<n;i++)
			cout<<" "<<v[i];
	}
	
Vector Vector::add(Vector a)
	{
		Vector temp;
		for(int i=0;i<n;i++)
			temp.v[i]=v[i]+a.v[i];
		temp.n=n;
		return temp;
	}
	
int main()
	{
		Vector v1,v2,v3;
		int n;
		cout<<"\nHow many elemets in the vector:";
		cin>>n;
		cout<<"\nFor 1st vector";
		v1.input(n);
		cout<<"\nFor 2nd vector";
		v2.input(n);
		v3=v1.add(v2);
		cout<<"\nResultant vector is:";
		v3.output();
		return 0;
	}
