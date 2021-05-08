//PROGRAM TO ADD TWO VECTORS

#include <iostream>
const int MAX=10;
using namespace std;

int main()
	{
		int a[MAX],b[MAX],c[MAX];
		cout<<"\nEnter the dimesion of vectors:";
		int n;
		cin>>n;
		cout<<"\nEnter "<<n<<" int elements for 1st vector:";
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<"\nEnter "<<n<<" int elements for 2st vector:";
		for(int i=0;i<n;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
			c[i]=a[i]+b[i];
		cout<<"\nResultant Vector is:";
		for(int i=0;i<n;i++)
			cout<<" "<<c[i];
		return 0;
	}
