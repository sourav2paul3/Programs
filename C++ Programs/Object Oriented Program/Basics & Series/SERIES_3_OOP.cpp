//PROGRAM TO CALCULATE 1^2+2^2+....+n^2 USING OOP

#include <iostream>
using namespace std;
class Series
	{
		private:int n;
		
		public:void input(int a)
					{
						n=a;
					}
					
				void output()
					{
						cout<<"\nN="<<n;
					}
					
				int cal();
	};
	
int Series::cal()
	{
		int sum=0;
		for(int i=1;i<=n;i++)
			sum=sum+i*i;
		return(sum);
	}
	
int main(void)
	{
		Series obj;
		int n;
		cout<<"\nEnter the value of n:";
		cin>>n;
		obj.input(n);
		int s=obj.cal();
		obj.output();
		cout<<"\nResult is "<<s;
		return 0;
	}
