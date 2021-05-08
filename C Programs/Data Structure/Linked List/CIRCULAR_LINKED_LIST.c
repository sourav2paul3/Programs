//PROGRAM PROJECT ON CIRCULAR LINKED LIST

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

void insert_beg(ND **,RD);
void insert_end(ND **,RD);
void insert_before(ND **,int);
void insert_after(ND **,int);
void del_ete(ND **,int);
void display(ND *);
int count_node(ND *);

void main(void)
	{
		ND *tail;
		RD rec;
		int i,x;
		tail=NULL;
		do{
			printf("\n1:Insert at the beginning");
			printf("\n2:Insert at the end");
			printf("\n3:Insert before a particular node");
			printf("\n4:Insert after a particular node");
			printf("\n5:Delete a particular node");
			printf("\n6:Display all the nodes");
			printf("\n7:count the number of nodes");
			printf("\n0:To exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter ID:");
							scanf("%d",&rec.id);
							fflush(stdin);
							printf("\nEnter name:");
							gets(rec.name);
							insert_beg(&tail,rec);
							break;
							
					case 2: printf("\nEnter ID:");
							scanf("%d",&rec.id);
							fflush(stdin);
							printf("\nEnter name:");
							gets(rec.name);
							insert_end(&tail,rec);
							break;
							
					case 3: printf("\nEnter a particular ID:");
							scanf("%d",&x);
							insert_before(&tail,x);
							break;
							
					case 4: printf("\nEnter a particular ID:");
							scanf("%d",&x);
							insert_after(&tail,x);
							break;
							
					case 5: printf("\nEnter a particular ID:");
							scanf("%d",&x);
							del_ete(&tail,x);
							break;
							
					case 6: display(tail);
							break;
							
					case 7: x=count_node(tail);
							printf("\nNumber of nodes are:%d",x);
							break;
							
					case 0: printf("\nThe End:");
							break;
							
					default: printf("\nInvalid choice");
			}
		}while(i);
	}
	
void insert_beg(ND **ptr,RD item)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Space");
				return;
			}
		temp->info=item;
		if(*ptr==NULL)
			{
				temp->next=temp;
				*ptr=temp;
				return;
			}
		temp->next=(*ptr)->next;
		(*ptr)->next=temp;
	}
	
void insert_end(ND **ptr,RD item)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient space");
				return;
			}
		temp->info=item;
		if(*ptr==NULL)
			{
				temp->next=temp;
				*ptr=temp;
				return;
			}
		temp->next=(*ptr)->next;
		(*ptr)->next=temp;
		*ptr=temp;
	}
	
int count_node(ND *p)
	{
		int cnt=0;
		ND *current;
		if(!p)
			return(cnt);
		current=p;
		do{
			cnt++;
			current=current->next;
		}while(current!=p);
		return;
	}
	
void display(ND *p)
	{
		ND *current;
		if(!p)
			return;
		current=p->next;
		do{
			printf("\n%d\t%s",current->info.id,current->info.name);
			current=current->next;
		}while(current!=p->next);
	}
	
void del_ete(ND **ptr,int x)
	{
		ND *current,*temp;
		int flag=0;
		if(!*ptr)
			{
				printf("\nEmpty Circular Linkedlist");
				return;
			}
		current=*ptr;
		do{
			if(current->next->info.id==x)
				{
					flag=1;
					break;
				}
			current=current->next;
		}while(current!=*ptr);
		if(flag==0)
			{
				printf("\nNo node found");
				return;
			}
		temp=current->next;
		if(temp->next==current)
			*ptr=NULL;
		else
			{
				if(current==*ptr)
					*ptr=temp->next;
				current->next=temp->next;
			}
		printf("\nDelted item is %d\t%s",temp->info.id,temp->info.name);
		free(temp);
	}
	
void insert_before(ND **ptr,int x)
	{
		ND *temp,*current,*prev;
		int flag=0;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memory");
				return;
			}
		if(!*ptr)
			{
				printf("\nEnpty Circular Linked list");
				return;
			}
		current=prev=(*ptr)->next;
		do{
			if(current->info.id==x)
				{
				flag=1;
				break;
				}
			prev=current;
			current=current->next;
		}while(current!=(*ptr)->next);
		if(flag==0)
			{
				printf("\nInavlid ID");
				return;
			}
		printf("\nEnter the ID:");
		scanf("%d",&temp->info.id);
		fflush(stdin);
		printf("\nEnter name:");
		gets(temp->info.name);
		if(prev==current)
			{
				temp->next=current;
				(*ptr)->next=temp;
			}
		else
			{
				prev->next=temp;
				temp->next=current;
			}
	}
	
void insert_after(ND **ptr,int x)
	{
		ND *current,*temp,*next;
		int flag=0;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memory");
				return;
			}
		if(!*ptr)
			{
				printf("\nEnpty Circular Linked list");
				return;
			}
		current=*ptr;
		next=current->next;
		do{
			if(current->info.id==x)
			  {
				flag=1;
				break;
			  }  
			current=current->next;
			next=current->next;
		  }while(current!=*ptr);
		if(flag==0)
			{
				printf("\nInvalid ID");
				return;
			}
		printf("\nEnter the ID:");
		scanf("%d",&temp->info.id);
		fflush(stdin);
		printf("\nEnter name:");
		gets(temp->info.name);
		if(current==*ptr)
			{
				(*ptr)->next=temp;
				temp->next=next;
				*ptr=temp;
			}
		else
			{
				current->next=temp;
				temp->next=next;
			}
	}
