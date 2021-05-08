//PROGRAM FOR DOUBLY LINKED LIST

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
		struct node *left,*right;
	};
typedef struct node ND;

void insert_beg(ND **,RD);
void insert_end(ND **,RD);
void del_ete(ND **,int);
void display(ND *);
void rev_dis(ND *);

void main(void)
	{
		int i,x;
		ND *start;
		RD rec;
		start=NULL;
		do{
			printf("\n1:To insert at the beginig");
			printf("\n2:To insert at the end");
			printf("\n3:Delete a particular node");
			printf("\n4:Display all the nodes");
			printf("\n5:Display all the nodes reversely");
			printf("\n0:TO exit");
			printf("\nEnter your choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter the ID:");
							scanf("%d",&rec.id);
							fflush(stdin);
							printf("\nEnter the name:");
							gets(rec.name);
							insert_beg(&start,rec);
							break;
							
					case 2: printf("\nEnter the ID:");
							scanf("%d",&rec.id);
							fflush(stdin);
							printf("\nEnter the name:");
							gets(rec.name);
							insert_end(&start,rec);
							break;
							
					case 3: printf("\nEnter the ID:");
							scanf("%d",&x);
							del_ete(&start,x);
							break;
							
					case 4: display(start);
							break;
							
					case 5: rev_dis(start);
							break;
							
					case 0: printf("\nThe End");
							break;
							
					default: printf("\nInvalid Choice");
				}
			}while(i);
	}
	
void insert_beg(ND **ptr,RD item)
	{
		ND *temp;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memory");
				return;
			}
		temp->info=item;
		temp->left=NULL;
		temp->right=*ptr;
		if(*ptr!=NULL)
			(*ptr)->left=temp;
		*ptr=temp;
	}
	
void insert_end(ND **ptr,RD item)
	{
		ND *temp,*current;;
		temp=(ND*)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memory");
				return;
			}
		temp->info=item;
		temp->right=NULL;
		if(!*ptr)
			{
				temp->left=NULL;
				*ptr=temp;
				return;
			}
		current=*ptr;
		while(current->right!=NULL)
			current=current->right;
		temp->left=current;
		current->right=temp;
	}
	
void display(ND *p)
	{
		while(!p==NULL)
			{
				printf("\n%d\t%s",p->info.id,p->info.name);
				p=p->right;
			}
	}
	
void rev_dis(ND *p)
	{
		if(!p)
		  return;
		while(p->right!=NULL)
			p=p->right;
		while(p!=NULL)
			{
				printf("\n%d\t%s",p->info.id,p->info.name);
				p=p->left;
			}
	}
	
void del_ete(ND **ptr,int x)
	{
		ND *current;
		current=*ptr;
		while(current!=NULL)
			{
				if(current->info.id==x)
					break;
				current=current->right;
			}
		if(!current)
			{
				printf("\nInvalid ID");
				return;
			}
		if(current->right!=NULL)
			current->right->left=current->left;
		if(current->left!=NULL)
			current->left->right=current->right;
		else
			*ptr=current->right;
		printf("\nDeleted item is %d\t%s",current->info.id,current->info.name);
		free(current);
	}
