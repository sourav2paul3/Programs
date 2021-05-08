//PROGRAM TO EVALUATE PREFIX EXPRESSION USING STACK

#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100

struct stack
	{
		int info[MAX];
		int top;;
	};
typedef struct stack STK;

int evaluate_prefix(char []);
int eval(int,int,char);
int isdigit(char);
void push(STK *,int);
int pop(STK *);

void main(void)
	{
		char prefix[MAX];
		int x;
		printf("\nEnter the prefix expression:");
		scanf("%s",&prefix);
		x=evaluate_prefix(prefix);
		printf("\nresult of the prefix expression is %d",x);
	}
	
int isdigit(char ch)
	{
		return(ch>='0' && ch<='9');
	}
	
int eval(int b,int a,char op)
	{
		switch(op)
			{
				case '+':return(a+b);
				
				case '-':return(a-b);
				
				case '*':return(a*b);
				
				case '/':return(a/b);
				
				case '$':return(pow(a,b));
			}
		return(0);
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
				return;
			}
		return(p->info[p->top--]);
	}
	
int evaluate_prefix(char a[])
	{
		int i;
		STK stk;
		i=strlen(a);
		while(i>=0)
			{
				if(isdigit(a[i]))
					push(&stk,a[i]-'0');
				else
					push(&stk,eval(pop(&stk),pop(&stk),a[i]));
				i--;
			}
		return(pop(&stk));
	}
