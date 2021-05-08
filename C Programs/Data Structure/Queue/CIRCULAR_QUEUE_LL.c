//PROGRAM FOR CIRCULAR QUEUE USING LINKED LIST

#include <stdio.h>
#include <malloc.h>
struct node 
	{
		int info;
		struct node *next;
	};
typedef struct node ND;

struct cqueue
	{
		ND *front;
		ND *rear;
	};
typedef struct cqueue CQ;

void insert(CQ *,int);
void del_ete(CQ *);

void main(void)
	{
		CQ cq;
		int i,x;
		cq.front=cq.rear=NULL;
		do{
			printf("\n1:Insert into the circular queue");
			printf("\n2:Delete from circular queue");
			printf("\n0:To exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter an elemnet:");
							scanf("%d",&x);
							insert(&cq,x);
							break;
							
					case 2: del_ete(&cq);
							break;
							
					case 0: printf("\nTHe END");
							break;
							
					default: printf("\nInvalid Choice");
				}
			}while(i);
		}
		
void insert(CQ *p,int x)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nINsufficient MEmory");
				return;
			}
		temp->info=x;
		if(p->rear==NULL)
			{
				p->front=p->rear=temp;
				temp->next=temp;
				return;
			}
		temp->next=p->front;
		p->rear->next=temp;
		p->rear=temp;
	}
	
void del_ete(CQ *p)
	{
		ND *temp;
		if(p->front==NULL)
			{
				printf("\nCircular Queue Underflow");
				return;
			}
		if(p->front==p->rear)
			{
				temp=p->front;
				p->front=p->rear=NULL;
			}
		else
			{
				temp=p->front;
				p->rear->next=temp->next;
				p->front=temp->next;
			}
		printf("\nDelete Element is %d",temp->info);
		free(temp);
	}
