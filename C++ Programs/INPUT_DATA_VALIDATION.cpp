//PROGRAM TO FIND 1+2+3+...+n WITH INPUT DATA VALIDATION

#include<iostream>
using namespace std;
void input(int *);
int fun(int);
int main()	
	{
		int n,sum;
		try{
			input(&n);
			sum=fun(n);
			}
		catch(char *a)
			{
				cout<<"\nInvalid input";
			}
		return 0;
	}
	
void input(int &p)
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
					if(a[i]>='0' && a[i]<='9')
						num=num*10+a[i]-'0';
					else
						throw(1);
					}
			}
		*p=num;
	}
	
int fun(int k)
	{
		int s=0;
		while(k>0)
			{s+=k;
			k--;
			}
	return s;
	}
