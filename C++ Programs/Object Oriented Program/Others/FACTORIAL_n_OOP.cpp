//PROGRAM FOR n FACTORIAL USING OOP

#include <iostream>
using namespace std;

class Factorial
	{
		private: int n;
		
		public: void input(int a)
					{
						n=a;
					}
					
				int cal();
	};
	
int Factorial::cal()
	{
		int sum=1;
		for(int i=n;i>=1;i--)
			sum=sum*i;
		return(sum);
	}
	
int main(void)
	{
		Factorial obj;
		int n;
		cout<<"\nEnter the value of n:";
		cin>>n;
		obj.input(n);
		int s=obj.cal();
		cout<<"\nFactorial of "<<n<<" is "<<s;
		return 0;
	}
