//PROGRAM TO CREATE A STACK WITH DISPLAY USING ARRAY

#include <stdio.h>
#define MAX 100
struct stack
	{
		int info[MAX];
		int top;
	};
typedef struct stack STK;
void push(STK *,int);
void pop(STK *);
void display(STK);
void rev_display(STK);
void main(void)
	{
		STK stk;
		int i,x;
		stk.top=-1;
		do{
			printf("\n1:Push Stack");
			printf("\n2:POP stack");
			printf("\n3:Display Stack");
			printf("\n4:Display Stack Reversely");
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
						
				case 3: display(stk);
						break;
						
				case 4: rev_display(stk);
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
	
	
void display(STK a)
	{	
	    printf("\nStack:");
		while(a.top!=-1)
			printf(" %d",a.info[a.top--]);
	}
	
	
void rev_display(STK a)
	{
		int i;
		printf("\nRev stack:");
		for(i=0;i<=a.top;i++)
			printf(" %d",a.info[i]);
	}
