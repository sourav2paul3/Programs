//PROGRAM FOR NON-RECURSIVE VERSION OF INORDER TRAVERSAL

#define MAX 100
struct node 
	{
		int onfo;
		struct node *left,*right;
	};
typedef struct node ND;

struct stack
	{
		ND *info[MAX];
		int top;
	};
typedef struct stack STK;

void inorder_nonrecursive(ND *p)
	{
		STK stk;
		stk.top=-1;
		while(!p=NULL)
			{
				push(&stk,p);
				if(p->left!=NULL)
					{
						p=p->left;
						continue;
					}
				while((p=pop(&stk)!=NULL)
					{
						printf(" %d",p->info);
						if(p->right!=NULL)
							{
								p=p->right;
								break;
							}
						}
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
	
void pop(STK *p)
	{
		if(p->top==-1)
			return(NULL);
		return(p->info[p->top--]);
	}
