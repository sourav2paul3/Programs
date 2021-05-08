//PROGRAM TO CALCULATE 1+x+x^2+...+x^n

#include <iostream>
using namespace std;

class Item
	{
		private:int n;
				float x;
				
		public:void input(int a,float b)
					{
						n=a;
						x=b;
					}
					
				void otput()
					{
						cout<<"\nN="<<n
							<<"\nX="<<x;
					}
					
				int cal();
	};
	
int Item::cal()
	{
		float sum,term;
		term=sum=1;
		for(int i=1;i<=n;i++)	
			{
				term=term*x;
				sum=sum+term;
			}
		return(sum);
	}
	
int main()
	{
		Item obj;
		int n;
		float x;
		cout<<"\nEnter the values of n,x:";
		cin>>n>>x;
		obj.input(n,x);
		float s=obj.cal();
		obj.otput();
		cout<<"\nResult="<<s;
	}
