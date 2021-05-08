//PROGRAM FOR n! WITH INPUT VALIDATION

#include <iostream>
using namespace std;
int factorial(int);
void input(int *);

int main()
	{
		int n,fact;
		try{
			input(&n);
			fact=factorial(n);
		}catch(char *a)
			{
			cout<<"\nInvalid input";
		}
		return 0;
}

int factorial(int n)
	{
		int fact=1;
		for(int i=n;i>=1;i--)
			fact*=i;
		return fact;
	}

void input(int *n)
	{
		char a[100];
		int i;
		cout<<"\nEnter the value of n:";
		cin>>a;
		int num=0;
		try{
			i=0;
			while(a[i]!='\0')
				{
					if(a[i]>='0'&&a[i]<='9')
						num=num*10+a[i]-'0';
						else
							throw(1);
						}
				}
			*n=num;
		}
