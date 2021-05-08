//PROGRAM TO CALCULATE 1+2+3+....+n USING OOP

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
			sum=sum+i;
		return(sum);
	}
	
int main(void)
	{
		Series obj;
		int z;
		cout<<"\nEnter the value of n:";
		cin>>z;
		obj.input(z);
		int s=obj.cal();
		cout<<"\nOUTPUT";
		obj.output();
		cout<<"\nResult is="<<s;
		return 0;
	}
