//PROGRAM TO CREATE A STACK WITHOUT DISPLAY USING ARRAY

#include <stdio.h>
#define MAX 10
struct stack
	{
		int info[MAX];
		int top;
	};
typedef struct stack STK;
void push(STK *,int);
void pop(STK *);
void main(void)
	{
		STK stk;
		int i,x;
		stk.top=-1;
		do{
			printf("\n1:Push Stack");
			printf("\n2:POP stack");
			printf("\n0:To exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
			{
				case 1: printf("\nEnter an element:");
					    scanf("%d",&x);
					    push(&stk,x);
					    break;
					    
				case 2: pop(&stk);
						break;
						
				case 0: printf("\nThe end");
						break;
						
				default :	printf("\nInvalid Choide");
			}
		}while(i!=0);
	}
	

void push(STK *p,int item)
	{
		if(p->top==MAX-1)
		{
			printf("\nStack Overflow");
			return;
		}
		p->info[++p->top]=item;
	}


void pop(STK *p)
	{
		if(p->top==-1)
		  {
		  	printf("\nStack Underflow");
		  	return;
		  }
		printf("\nPoped item is %d",p->info[p->top--]);
	}
