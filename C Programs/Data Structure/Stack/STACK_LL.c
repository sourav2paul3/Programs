//PROGRAM FOR STACK USING LINKED LIST

#include <stdio.h>
#include <malloc.h>
#define MAX 100

struct node
	{
		int info;
		struct node *next;
	};
typedef struct node ND;

struct stack
	{
		ND *top;
	};
typedef struct stack STK;

void push(STK *,int);
void pop(STK *);

void main(void)
	{
		int i,x;
		STK stk;
		stk.top=NULL;
		do{
			printf("\n1:To Push onto the stack");
			printf("\n2:Pop from the stack");
			printf("\n0:To Exit");
			printf("\nEnter your choice");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter an element:");
							scanf("%d",&x);
							push(&stk,x);
							break;
							
					case 2: pop(&stk);
							break;
							
					case 0: printf("\nThe End");
							break;
							
					deaful :printf("\nInvalid Choice");
				}
			}while(i!=0);
		}
		
void push(STK *stk,int item)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nStack Overflow");
				return;
			}
		temp->info=item;
		temp->next=stk->top;
		stk->top=temp;
	}
	
void pop(STK *stk)
	{
		ND *temp;
		if(stk->top==NULL)
			{
				printf("\nstack UnderFlow");
				return;
			}
		temp=stk->top;
		stk->top=temp->next;
		printf("\nDeleted element is:%d",temp->info);
		free(temp);
	}
