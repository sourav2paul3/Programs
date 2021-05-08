//PROGRAM FOR PRIORITY QUEUE USING LINKED LIST

#include <stdio.h>
#include <malloc.h>

struct record
	{
		int priority;
		char name[20];
	};
typedef struct record RD;

struct node
	{
		RD info;
		struct node *next;
	};
typedef struct node ND;

struct pqueue
	{
	ND *front;
	ND *rear;
	};
typedef struct pqueue PQ;

void insert(PQ *,RD);
void del_ete(PQ *);
void display(PQ);

void main(void)
	{
		int i;
		RD rec;
		PQ pq;
		pq.front=pq.rear=NULL;
		do{
			printf("\n1:To insert to the priority queue");
			printf("\n2:To Delete the priority queue");
			printf("\n3:To Display the queue");
			printf("\n0:To Exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter Priority:");
							scanf("%d",&rec.priority);
							fflush(stdin);
							printf("\nEnter the name:");
							gets(rec.name);
							insert(&pq,rec);
							break;
							
					case 2: del_ete(&pq);
							break;
							
					case 3: display(pq);
							break;
							
					case 0: printf("\nThe end");
							break;
							
					default: printf("\nInvalid choice");
				}
			}while(i);
		}
		
void insert(PQ *p,RD item)
	{
		ND *temp,*prev,*current;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nPriority Queue Overflow");
				return;
			}
		temp->info=item;
		if(p->front==p->rear && p->front==NULL)
			{
				p->front=p->rear=temp;
				temp->next=NULL;
				return;
			}
		prev=current=p->front;
		while(current!=NULL)
			{
				if(current->info.priority>=item.priority)
				{
					prev=current;
					current=current->next;
				}
				else
					break;
			}
		if(prev==current)
			{
				temp->next=p->front;
				p->front=temp;
			}
		else
			{
				prev->next=temp;
				temp->next=current;
				if(temp->next==NULL)
					p->rear=temp;
			}
	}
	
void del_ete(PQ *p)
	{
		ND *temp;
		if(p->front==p->rear && p->front==NULL)
			{
				printf("\nPriority Queue Underflow");
				return;
			}
		temp=p->front;
		if(temp->next==NULL)
			p->front=p->rear=NULL;
		else
			p->front=temp->next;
		printf("\nDeleted element is %d\t%s",temp->info.priority,temp->info.name);
		free(temp);
	}
	
void display(PQ pq)
	{
		printf("\nNAME\t\tPRIORITY");
		while(pq.front!=NULL)
			{
				printf("\n%s\t\t%d",pq.front->info.name,pq.front->info.priority);
				pq.front=pq.front->next;
			}
		}
