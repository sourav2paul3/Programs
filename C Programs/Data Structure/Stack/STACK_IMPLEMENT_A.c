//PROGRAM TO IMPLEMENT TWO STACK IN SINGLE ARRAY USING ARRAY

#include <stdio.h>
#define MAX 100
struct stack
{
	int info[MAX];
	int top1,top2;
};
typedef struct stack STK;
void push(STK *,int,int);
void pop(STK *,int);
void main(void)
	{
		int i,x;
		STK stk;
		stk.top1=-1;
		stk.top2=MAX;
		do{
			printf("\n1:Push onto Stack 1");
			printf("\n2:Push onto stack 2");
			printf("\n3:Pop from stack 1");
			printf("\n4:Pop form stack 2");
			printf("\n0:To Exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter an Element:");
							scanf("%d",&x);
							push(&stk,1,x);
							break;
							
					case 2: printf("\nEnter an element:");
							scanf("%d",&x);
							push(&stk,2,x);
							break;
							
					case 3: pop(&stk,1);
							break;
							
					case 4: pop(&stk,2);
							break;
							
					case 0: printf("\nThe end");
							break;
							
					default:printf("\nInvalid Choice");
				}
			}while(i!=0);
		}
		
void push(STK *p,int stack_no,int item)
	{
		if(p->top1+1==p->top2)
			{
				printf("\nStacks Overflow");
				return;
			}
		switch(stack_no)
			{
				case 1: p->info[++p->top1]=item;
						break;
						
				case 2: p->info[--p->top2]=item;
			}
	}
		
void pop(STK *p,int stack_no)
	{
		switch(stack_no)
			{
				case 1:if(p->top1==-1)
						  printf("\nStack1 Underflow");
						else
							printf("\nPopped item from stack 1 is:%d",p->info[p->top1--]);
						break;
						
				case 2:if(p->top2==MAX)
						 printf("\nSatck2 UnderFlow");
						else
							printf("\nPopped item from stack 2 is:%d",p->info[p->top2++]);
						break;
			}
	}
