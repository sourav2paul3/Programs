// ADDITION OF TWO POLLYNOMIAL

#include <Stdio.h>
#include <malloc.h>
struct record
	{
		int exp;
		float coef;
	};
typedef struct record RD;

struct node
	{
		RD info;
		struct node *next;
	};
typedef struct node ND;

void create_poly(ND **);
void display(ND *);
void insert(ND **,RD);
ND *add(ND *,ND *);
ND *create_node(void);

void main(void)
	{
		ND *poly1,*poly2,*poly;
		poly1=poly2=NULL;
		printf("\nInput 1st Polynomial");
		create_poly(&poly1);
		printf("\nInput 2nd Polynomial");
		create_poly(&poly2);
		poly=add(poly1,poly2);
		printf("\nResultant Polynomial");
		display(poly);
	}
	
ND *create_node(void)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memmory");
			}
			return(temp);
	}
	
void display(ND *p)
	{
	printf("\nExp\tCOEF");
	while(p!=NULL)
		{
		printf("\n%d\t%f",p->info.exp,p->info.coef);
		p=p->next;
		}
	}
	
void create_poly(ND **ptr)
	{
		ND *temp,*current;
		do{
			temp=create_node();
			printf("\nEnter Exp & coeff:");
			scanf("%d %f",&temp->info.exp,&temp->info.coef);
			if(!*ptr)
				*ptr=current=temp;
			else
				{
					current->next=temp;
					current=temp;
				}
			fflush(stdin);
			printf("\nADD another term?(Y/N)");
		}while(toupper(getchar())!='N');
		current->next=NULL;
	}
	
ND *add(ND *p,ND *q)
	{
		ND *r=NULL;
		RD rec;
		while(p!=NULL && q!=NULL)
			{
				if(p->info.exp>q->info.exp)
					{
						insert(&r,p->info);
						p=p->next;
					}
				else
					if(p->info.exp<q->info.exp)
						{
							insert(&r,q->info);
							q=q->next;
						}
					else
						{
							rec.coef=p->info.coef+q->info.coef;
							if(rec.coef!=0.0)
								{
									rec.exp=p->info.exp;
									insert(&r,rec);
								}
							p=p->next;
							q=q->next;
						}
				}
			while(p!=NULL)
				{
					insert(&r,p->info);
					p=p->next;
				}
			while(q!=NULL)
				{
					insert(&r,q->info);
					q=q->next;
				}
			return(r);
		}
		
void insert(ND **ptr,RD rec)
	{
		ND *temp,*current;
		temp=create_node();
		temp->info=rec;
		temp->next=NULL;
		if(!*ptr)
			{
				*ptr=temp;
				return;
			}
		current=*ptr;
		while(current->next!=NULL)
			current=current->next;
		current->next=temp;
	}
