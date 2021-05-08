//PROGRAM TO CONVERT INFIX INTO PREFIX

#include <stdio.h>
#include <string.h>
#define MAX 100

struct stack
	{
		char info[MAX];
		int top;
	};
typedef struct stack STK;

void infx_to_prefix(char [],char []);
void push(STK *,char);
char pop(STK *);
int precedence(char);
int isoperator(char);

void main(void)
	{
		char infix[MAX],prefix[MAX];
		printf("\nEnter the infix expression:");
		scanf("%s",infix);
		infix_to_prefix(infix,prefix);
		printf("\nRequired Prefix expression is:%s",prefix);
	}
	
void infix_to_prefix(char infix[],char prefix[])
	{
		STK stk;
		int i,j,l;
		char x;
		stk.top=-1;
		strrev(infix);
		l=strlen(infix);
		infix[l]='(';
		push(&stk,')');
		i=j=0;
		while(stk.top!=-1)
			{
				if(infix[i]==')')
					push(&stk,infix[i]);
				else
					if(isoperator(infix[i]))
						{
							while(precedence(stk.info[stk.top]>precedence(infix[i])))
								prefix[j++]=pop(&stk);
							push(&stk,infix[i]);
						}
					else
						if(infix[i]==')')
							{
								while((x=pop(&stk))!=')')
									prefix[j++]=x;
							}
						else
							prefix[j++]=infix[i];
					i++;
			}
		prefix[j]='\0';
		strrev(prefix);
		infix[l]='\0';
		strrev(infix);
	}
	
void push(STK *p,char item)
	{
		if(p->top==MAX-1)
			{
				printf("\nStack Overflow");
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
	
int isoperator(char ch)
	{
		return(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='$');
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
