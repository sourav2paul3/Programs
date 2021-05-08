//PROGRAM TO EVALUATE A POSTFIX EXPRESSION

#include <stdio.h>
#include <math.h>
#define MAX 100

struct stack
	{
		int info[MAX];
		int top;
	};
typedef struct stack STK;

int evaluate_postfix(char []);
int isdigit(char);
int eval(int,int,char);
void push(STK *,int);
int pop(STK *);

void main(void)
	{
		int x;
		char postfix[MAX];
		printf("\nEnter the postfix expression:");
		scanf("%s",&postfix);
		x=evaluate_postfix(postfix);
		printf("\nResult of the postfix expression :%s is %d",postfix,x);
	}
	
int isdigit(char ch)
	{
		return(ch>='0' && ch<='9');
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
	
int pop(STK *p)
	{
		if(p->top==-1)
			{
				printf("\nStack Underflow");
				return(0);
			}
		return(p->info[p->top--]);
	}
	
int evaluate_postfix(char a[])
	{
		int i;
		STK stk;
		stk.top=-1;
		i=0;
		while(a[i]!='\0')
			{
				if(isdigit(a[i]))
				push(&stk,a[i]-'0');
				else
					push(&stk,eval(pop(&stk),pop(&stk),a[i]));
				i++;
			}
			return(pop(&stk));
	}
	
int eval(int a,int b,char op)
	{
		switch(op)
			{
				case '+' :return(b+a);
				case '-' :return(b-a);
				case '*' :return(b*a);
				case '/' :return(b/a);
				case '$' :return(pow(b,a));
			}
			return(0);
		}
