//PROGRAM FOR n FACTORIAL

#include <iostream>
using namespace std;
int main()
	{
		int n,f=1;
		cout<<"\nEnter the value of n:";
		cin>>n;
		for(int i=n;i>=1;i--)
			f=f*i;
		cout<<"\nFactorial of "<<n<<" is "<<f;
		return 0;
	}
