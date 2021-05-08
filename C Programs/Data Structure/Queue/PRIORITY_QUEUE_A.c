//PROGRAM TO IMPLEMENT A PRIORITY QUEUE

#include <stdio.h>
#define MAX 10

struct record 
	{
		char name[20];
		int priority;
	};
typedef struct record RD;

struct pqueue
	{
		RD info[MAX];
		int rear,front;
	};
typedef struct pqueue PQ;

void insert(PQ *,RD);
void del_ete(PQ *);
void main(void)
	{
		PQ pq;
		int i;
		RD rec;
		pq.front=pq.rear=-1;
		do{
			printf("\n1:Inser to the priority queue");
			printf("\n2:Delete from the priority queue");
			printf("\n0:To exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter priority:");
							scanf("%d",&rec.priority);
							fflush(stdin);
							printf("\nEnter your name:");
							gets(rec.name);
							insert(&pq,rec);
							break;
									
					case 2: del_ete(&pq);
							break;
							
					case 0: printf("\nThe End");
							break;
							
					default: printf("\nInvalid choice:");
				}
			}while(i);
		}
		
void insert(PQ *pq,RD item)
	{
		int i;
		if(pq->rear==MAX-1)
			{
				printf("\nPriority Queue is overflow");
				return;
			}
		for(i=pq->rear;i>pq->front;i--)
			{
				if(item.priority>pq->info[i].priority)
					pq->info[i+1]=pq->info[i];
				else
					break;
			}
		pq->info[i+1]=item;
		pq->rear++;
	}
	
void del_ete(PQ *pq)
	{
		RD item;
		if(pq->front==pq->rear)
			{
				printf("\nPriority queue undrflow");
				return;
			}
		item=pq->info[++pq->front];
		printf("\nDeleted item is %s %d",item.name,item.priority);
	}
	
