//PROGRAM TO CALCULATE 1+1/2+1/3+...+1/n

#include <iostream>
using namespace std;

int main(void)
	{
		int n;
		float sum=0;
		cout<<"\nEnter the value of n:";
		cin>>n;
		for(float i=1;i<=n;i++)
			sum=sum+(1/i);
		cout<<"\nResut is "<<sum;
		return 0;
	}
