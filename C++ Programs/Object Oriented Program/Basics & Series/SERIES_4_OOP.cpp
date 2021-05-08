//PROGRAM TO CALCULATE 1+X+X^2/2!+....X^n/n!

#include <iostream>
using namespace std;

class Series
	{
		private: int n;
				 float x;
				 
		public: void input(int a,float b)
					{
						n=a;
						x=b;
					}
					
				void output()
					{
						cout<<"\nN="<<n
							<<"\nX="<<x;
					}
					
				int cla();
	};
	
int Series::cla()
	{
		float sum,term;
		float fact;
		term=fact=1;
		sum=0;
		for(float i=1;i<=n;i++)
			{
				term=term*x;
				fact=fact*i;
				sum=sum+term/fact;
			}
		return(sum);
	}
	
int main(void)
	{
		Series obj;
		int n;
		float x;
		cout<<"\nEnter the value of n and x:";
		cin>>n>>x;
		obj.input(n,x);
		float result=obj.cla();
		obj.output();
		cout<<"\nResult is "<<result;
		return 0;
	}
