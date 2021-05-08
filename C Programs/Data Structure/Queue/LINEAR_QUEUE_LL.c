//PROGRAM FOR QUEUE USING LINKED LIST

#include <stdio.h>
#include <malloc.h>

struct node
	{
		int info;
		struct node *next;
	};
typedef struct node ND;

struct queue
	{
		ND *front;
		ND *rear;
	};
typedef struct queue Q;

void insert(Q *,int);
void del_ete(Q *);
void display(Q);
void main(void)
	{
		int i,x;
		Q q;
		q.front=q.rear=NULL;
		do{
			printf("\n1:To insert in Queue");
			printf("\n2:Delete from the Queue");
			printf("\n3:To Display the Queue");
			printf("\n0:To exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter an element:");
							scanf("%d",&x);
							insert(&q,x);
							break;
							
					case 2: del_ete(&q);
							break;
							
					case 3: display(q);
							break;
							
					case 0:printf("\nThe End");
							break;
							
					default :printf("\nInvalid Choice");
				}
			}while(i);
		}
		
void insert(Q *q,int item)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nQueue Overflow");
				return;
			}
		temp->info=item;
		temp->next=NULL;
		if(q->rear==NULL)
			q->front=q->rear=temp;
		else
		{
			q->rear->next=temp;
			q->rear=temp;
		}
	}
	
void del_ete(Q *q)
	{
		ND *temp;
		if(q->front==NULL)
			{
				printf("\nQueue Underflow");
				return;
			}
		temp=q->front;
		q->front=temp->next;
		if(q->front==NULL)
			q->rear=NULL;
		printf("\nDeleted item is %d",temp->info);
		free(temp);
	}
	
void display(Q a)
	{
		printf("\nQueue is:");
		while(a.front!=NULL)
			{
				printf(" %d",(a.front)->info);
				a.front=(a.front)->next;
			}
		}
