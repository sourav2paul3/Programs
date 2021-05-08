//PROGRAM TO IMPLEMENT A QUEUE

#include <iostream>
using namespace std;

class Queue
	{
		private:int *q,front,rear,max;
		public: Queue(){q=NULL,front=rear=-1,max=0;}
				Queue(int a)
					{
						max=a;
						front=rear=-1;
						q=new int[max];
					}
				~Queue(){}
				void insert(int a)
					{
						if(rear==max-1)
							{
								cout<<"\nQueue overflow";
								return;
							}
						q[++rear]=a;
					}
				void del_ete()
					{
						if(front==rear)
							{
								cout<<"\nQueue Underflow";
								return;
							}
						cout<<"\nDeleted element is:"<<q[++front];
					}
			};
			
int main()
	{
		cout<<"\nEnter the max number of array:";
		int n;
		cin>>n;
		Queue que(n);
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
							que.insert(k);
							break;
							
					case 2: que.del_ete();
							break;
							
					case 0: cout<<"\nThe End";
							break;
							
					deafult: cout<<"\nInvalid choice";
				}
			}while(n);
		return 0;
	}
