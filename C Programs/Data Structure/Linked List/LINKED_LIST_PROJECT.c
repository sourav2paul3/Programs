//PROGRAM TO OPERATE A LINKED LIST

#include <stdio.h>
#include <malloc.h>

struct record
	{
		int id;
		char name[20];
	};
typedef struct record RD;

struct node
	{
		RD info;
		struct node *next;
	};
typedef struct node ND;

void insert_begin(ND **,RD);
void insert_end(ND **,RD);
void insert_before(ND **,int);
void insert_after(ND *,int);
void del_ete(ND **,int);
int count_node(ND *);
ND *search(ND *,int);
void display(ND *);
void reverse_display(ND *);
void physical_reverse(ND **);

void main(void)
	{
		int i,x;
		ND *start;
		RD rec;
		start=NULL;
		do{
			printf("\n1:Insert at the begining");
			printf("\n2:Insert at end of the linked list");
			printf("\n3:Insert before a particular node");
			printf("\n4:Insert after a particular node");
			printf("\n5:Delete a particular node");
			printf("\n6:count the no. of nodes");
			printf("\n7:Search for a particular node");
			printf("\n8:Display the node");
			printf("\n9:Display the node in reverse way");
			printf("\n10:Physically reverse the linked list");
			printf("\n0:To exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter id:");
							scanf("%d",&rec.id);
							fflush(stdin);
							printf("\nEnter name:");
							gets(rec.name);
							insert_begin(&start,rec);
							break;
							
					case 2: printf("\nEnter id:");
							scanf("%d",&rec.id);
							fflush(stdin);
							printf("\nEnter name:");
							gets(rec.name);
							insert_end(&start,rec);
							break;
							
					case 3: printf("\nEnter id:");
							scanf("%d",&x);
							insert_before(&start,x);
							break;
							
					case 4: printf("\nEnter id:");
							scanf("%d",&x);
							insert_after(start,x);
							break;
							
					case 5: printf("\nEnter a id");
							scanf("%d",&x);
							del_ete(&start,x);
							break;
							
					case 6: x=count_node(start);
							printf("\nNo. of total count is:%d",x);
							break;
							
					case 7: printf("\nEnter id:");
							scanf("%d",&x);
							if(search(start,x)!=NULL)
								printf("\nRecord found");
							else
								printf("\nRecord not found");
							break;
							
					case 8: display(start);
							break;
							
					case 9: reverse_display(start);
							break;
							
					case 10:physical_reverse(&start);
							break;
							
					case 0: printf("\nThe end");
							break;
							
					deafult:printf("\nInvalid Choice");
				}
			}while(i);
		}
		
		
void insert_begin(ND **ptr,RD item)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memory");
				return;
			}
		temp->info=item;
		temp->next=*ptr;
		*ptr=temp;
	}
	
void insert_end(ND **ptr,RD item)
	{
	ND *temp,*current;
	temp=(ND *)malloc(sizeof(ND));
	if(!temp)
		{
		printf("\nInsufficient Memeory");
		return;
	}
	temp->info=item;
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

void insert_before(ND **ptr,int x)
	{
		ND *temp,*prev,*current;
		prev=current=*ptr;
		while(current!=NULL)
			{
				if(current->info.id==x)
					break;
				prev=current=*ptr;
				current=current->next;
			}
			if(!current)
				{
					printf("\nInvalid ID %d",x);
					return;
				}
			temp=(ND *)malloc(sizeof(ND));
			if(!temp)
				{
					printf("\nInsufficient Memory");
					return;
				}
			printf("\nEnter id:");
			scanf("%d",&temp->info.id);
			fflush(stdin);
			printf("\nEnter name:");
			gets(temp->info.name);
			temp->next=current;
			if(prev==current)
				*ptr=temp;
			else
				prev->next=temp;
	}
	
void insert_after(ND *p,int x)
	{
		ND *temp;
		while(p!=NULL)
			{
				if(p->info.id==x)
					break;
			    p=p->next;
			}
		if(!p)
			{
				printf("\nInvalid id %d",x);
				return;
			}
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
			printf("\nInsufficient Memory");
			return;
		}
		printf("\nEnter id:");
		scanf("%d",&temp->info.id);
		fflush(stdin);
		printf("\nEnter name:");
		gets(temp->info.name);
		temp->next=p->next;
		p->next=temp;
	}
	
void del_ete(ND **ptr,int x)
	{
		ND *prev,*current;
		prev=current=*ptr;
		while(current!=NULL)
			{
				if(current->info.id==x)
					break;
				prev=current;
				current=current->next;
			}
			if(!current)
				{
					printf("\nInvalid ID:");
					return;
				}
			if(prev==current)
				*ptr=current->next;
			else
				prev->next=current->next;
			printf("\nDeleted item %d  %s",current->info.id,current->info.name);
			free(current);
	}
	
int count_node(ND *p)
	{
		int count=0;
		while(p!=NULL)
			{
				count++;
				p=p->next;
			}
		return(count);
	}
	
ND *search(ND *p,int x)
	{
		while(p!=NULL)
			{
				if(p->info.id==x)
					return(p);
				p=p->next;
			}
		return(NULL);
	}
	
void display(ND *p)
	{
		printf("\nLinked List elements:");
		while(p!=NULL)
			{
				printf("\nID:%d,NAME:%s",p->info.id,p->info.name);
				p=p->next;
			}
	}
	
void reverse_display(ND *p)
	{
	if(!p)
		return;
	reverse_display(p->next);
	printf("\nID:%d,Name:%s",p->info.id,p->info.name);
}

void physical_reverse(ND **ptr)
	{
		ND *p,*q,*r;
		if(ptr==NULL||(*ptr)->next==NULL)
			return;
		p=NULL;
		q=*ptr;
		r=q->next;
		while(r!=NULL)
			{
				q->next=p;
				p=q;
				q=r;
				r=r->next;
			}
		q->next=p;
		*ptr=q;
	}
