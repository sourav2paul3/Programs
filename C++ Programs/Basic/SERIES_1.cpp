//C++ PROGRAM FOR CALCULATE 1+2+3+......+n

#include <iostream>
using namespace std;
int main()
	{
		int n,sum;
		cout<<"\nEnter the value of n:";
		cin>>n;
		sum=0;
		for(int i=1;i<=n;i++)
			sum=sum+i;
		cout<<"\nResult is:"<<sum;
		return 0;
	}
