//PROGRAM TO IMPLEMENT A STACK USING CONSTRUCTOR

#include <iostream>
using namespace std;
const int MAX=10;
class Stack
	{
		private:int *a,top,max;
		
		public:Stack()
				{
				a=NULL;
				max=0;
				top=-1;
				}
				Stack(int n)
					{
						max=n;
						a=new int [max];
						top=-1;
					}
				~Stack(){}
				void pop()
					{
						if(top==-1)
							{
							cout<<"\nStack Underflow";
							return ;
							}
						cout<<"\nPopped element is:"<<a[top--];
					}
				void push(int n)
					{
						if(top==max-1)
							{
								cout<<"\nStack Overflow";
								return;
							}
						a[++top]=n;
					}
			};
			
int main()
	{
		cout<<"\nEnter the max number of array:";
		int n;
		cin>>n;
		Stack stk(n);
		do{
			cout<<"\n1:To push onto the stack"
				<<"\n2:To pop from the stack"
				<<"\n0:To exit"
				<<"\nEnter your choice:";
			cin>>n;
			switch(n)
				{
					case 1:cout<<"\nEnter an int:";
							int k;
							cin>>k;
							stk.push(k);
							break;
							
					case 2: stk.pop();
							break;
							
					case 0: cout<<"\nThe End";
							break;
							
					deafult: cout<<"\nInvalid choice";
				}
			}while(n);
		return 0;
	}
