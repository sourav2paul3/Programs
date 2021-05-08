//PROGRAM TO CREATE A CIRCULAR QUEUE USING ARRAY WITH DISPLAY

#include <stdio.h>
#define MAX 100
#define TRUE 1
#define FALSE 0
struct cqueue 
	{
		int info[MAX];
		int front,rear;
		int flag;
	};
typedef struct cqueue CQ;
void insert(CQ *,int);
void del_ete(CQ *);
void display(CQ);
void rev_diplay(CQ);
void main(void)
	{
		int i,x;
		CQ cq;
		cq.front=cq.rear=0;
		cq.flag=FALSE;
		do{
			printf("\n1:Insert into circular Queue");
			printf("\n2:To delete from circular Queue");
			printf("\n3:Display circular Queue");			
			printf("\n4:Display reverse circular Queue");
			printf("\n0:To Exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter an element:");
							scanf("%d",&x);
							insert(&cq,x);
							break;
							
					case 2: del_ete(&cq);
							break;
							
					case 3: display(cq);
							break;
							
					case 4: rev_display(cq);
							break;
							
					case 0: printf("\nThe End");
							break;
							
					default: printf("\nInvalid Choice");
				}
			}while(i!=0);
		}
		
		
void insert(CQ *p,int item)
	{
		if(p->front==p->rear && p->flag==TRUE)
			{
			 printf("\nCircluar Queue Overflow");
			 return;
		    }
		p->info[p->rear]=item;
		p->rear=(p->rear+1)%MAX;
		p->flag=TRUE;
	}
	
	
void del_ete(CQ *p)
	{
		if(p->front==p->rear && p->flag==FALSE)
			{
				printf("\nCircular Queue underflow");
				return;
			}
		printf("\nDeleted element is %d",p->info[p->front]);
		p->front=(p->front+1)%MAX;
		p->flag=FALSE;
	}
	
	
void display(CQ p)
	{	
		printf("\nCircular Queue:");
		while(!(p.front==p.rear && p.flag==FALSE))
			{
			printf(" %d",p.info[p.front]);
			p.front=(p.front+1)%MAX;
			p.flag=FALSE;
		}
	}
	
void rev_display(CQ p)
	{
		printf("\nRev Circular Queue:");
		while(!(p.front==p.rear && p.flag==FALSE))
			{
				p.rear=p.rear-1;
				if(p.rear<0)
					p.rear=MAX-1;
				printf(" %d",p.info[p.rear]);
				p.flag=FALSE;
			}
		}
