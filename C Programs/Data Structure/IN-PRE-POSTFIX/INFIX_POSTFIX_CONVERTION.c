// PROGRAM FOR INFIX TO POSTFIX CONVERTION USING STACK

#include <stdio.h>
#include <string.h>
#define MAX 100
struct stack 
	{
		char info[MAX];
		int top;
	};
typedef struct stack STK;

void infix_to_postfix(char [],char []);
int precedence(char);
int isoperator(char);
void push(STK *,char);
char pop(STK *);

void main(void)
	{
		char infix[MAX],postfix[MAX];
		printf("\nEnter the infix expression:");
		scanf("%s",infix);
		infix_to_postfix(infix,postfix);
		printf("\nRequired postfix is %s",postfix);
	}
	
void push(STK *p,char item)
	{
		if(p->top==MAX-1)
			{
				printf("\nStack overflow");
				return;
			}
		p->info[++p->top]=item;
	}
	
char pop(STK *p)
	{
		if(p->top==-1)
			{
			printf("\nStack Underflow");
			return('\0');
			}
		return(p->info[p->top--]);
	}
	
int precedence(char ch)
	{
		switch(ch)
			{
				case '+':
				case '-':return(1);
				
				case '*':
				case '/':return(2);
				
				case '$':return(3);
				
				case ')':return(0);
			}
			return(-1);
	}
	
int isoperator(char ch)
	{
		return(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='$');
	}
	
void infix_to_postfix(char infix[],char postfix[])
	{
			STK stk;
			int i,l,j;
			char x;
			stk.top=-1;
			l=strlen(infix);
			push(&stk,'(');
			infix[l]=')';
			i=j=0;
			while(stk.top!=-1)
				{
					if(infix[i]=='(')
						{
						push(&stk,infix[i]);
						}
					else
					{
						if(isoperator(infix[i]))
							{
								while(precedence(stk.info[stk.top])>=precedence(infix[i]));
								postfix[j++]=pop(&stk);
							push(&stk,infix[i]);
							}
						else
							{
							if(infix[i]==')')
								{
									while((x=pop(&stk))!='(')
										postfix[j++]=x;
									}
							else
								postfix[j++]=infix[i];
							}
						}
					i++;
					}
					postfix[j]='\0';
					infix[l]='\0';
				}
