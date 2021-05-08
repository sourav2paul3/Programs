//INLINE FUNCTION PROGRAM IN C++

#include <iostream>
using namespace std;
inline int fun(int a)
	{
		int s=0;
		s=s+a;
		return(s);
	}
	
inline int gun(int a,int b)
	{
		int c;
		c=a*b;
		return(c);
	}
int main(void)
	{
		int x,y,z;
		cout<<"\nEnter 3 ints:";
		cin>>x>>y>>z;
		int p=fun(x);
		int q=gun(y,z);
		cout<<"\nReslt:"<<p<<" "<<q;
		return 0;
	}
