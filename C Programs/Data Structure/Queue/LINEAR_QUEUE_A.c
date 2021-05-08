//PROGRAM TO CREATE LINEAR SIMPLE QUEUE WITH DISPLAY USING ARRAY

#include <stdio.h>
#define MAX 10
struct queue
	{
		int info[MAX];
		int front,rare;
	};
typedef struct queue Q;
void insert(Q *,int);
void del_ete(Q *);
void displaay(Q);
void main(Void)
	{
		Q q;
		int i,x;
		q.front=q.rare=-1;
		do{
			printf("\n1 to insert");
			printf("\n2 to delete");
			printf("\n3 to dosplay");
			printf("\n0 To exit");
			printf("\nEnter your choice");
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
						
				case 0: printf("\nThe end");
						break;
						
						
				default: printf("\nInvalid Choide");
			}
		}while(i!=0);
	}
	
	
void insert(Q *p,int item)
	{
		if(p->rare==MAX-1)
		 {
		 	printf("\nQueue Overflow");
		 	return;
		 }
		p->info[++p->rare]=item;
	}
	
	
void del_ete(Q *p)
	{
		if(p->front==p->rare)
		  {
		  	printf("\nQueue underflow");
		  	return;
		  }
		printf("\nDeleted elementts is %d",p->info[++p->front]
		);
	}
	
void display(Q q)
	{
		while(q.front!=q.rare)
			printf(" %d",q.info[++q.front]);
	}
