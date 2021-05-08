//PROGRAMM FOR NON-RECURSIVE VERSION OF PRE-ORDERD TRAVERSAL

#define MAX 100
struct node
	{
		int info;
		struct node *left,*right;
	};
typedef struct node ND;

struct stack
	{
		ND *info[MAX];
		int top;
	}
typedef struct stack STK;

void preorder_nonrecursive(ND *p)
	{
		STk stk;
		stk.top=-1;
		while(!p=NULL)
			{
				printf("\n %d",p->info);
				if(p->right!=NULL)
					push(&stk,p->right);
				if(p->left!=NULL)
					p=p->left;
				else
					p=pop(&stK);
				}
			}
			
void push(STK *p,ND *item)
	{
		if(p->top==MAX-1)
			{
				printf("\nStack Overflow");
				return;
			}
		p->info[++p->top]=item;
	}
	
ND *pop(STK *p)
	{
		if(p->top==-1)
			return(NULL);
		return(p->info[p->top--]);
	}
