//PROGRAM FOR BINARY SEARCH TREE WITH PRE,IN,POST ORDER TRAVERSAL

#include <stdio.h>
#include <malloc.h>
#include <conio.h>

struct node
	{
		int info;
		struct node *left,*right;
	};
typedef struct node ND;

void insert(ND **,int);
void del_ete(ND **,int);
void preorder(ND *);
void inorder(ND *);
void postorder(ND *);

void main(void)
	{
		ND *tree;
		int i,x;
		tree=NULL;
		do{
			printf("\n1:To insert in the binary search tree");
			printf("\n2:to delete a node");
			printf("\n3:Pre order Traversal");
			printf("\n4:In order Traversal");
			printf("\n5:Post order Traversal");
			printf("\n0:To exit");
		    printf("\nEnter the choice:");
			scanf("%d",&i);
			switch(i)
				{
					case 1: printf("\nEnter the node value:");
							scanf("%d",&x);
							insert(&tree,x);
							break;
							
					case 2: printf("\nEnter the node value to delete:");
							scanf("%d",&x);
							del_ete(&tree,x);
							break;
							
					case 3: printf("\nPreorder Traversal is:");
							preorder(tree);
							break;
							
					case 4: printf("\nInorder Traversal is");
							inorder(tree);
							break;
							
					case 5: printf("\nPostorder is:");
							postorder(tree);
							break;
							
					case 0: printf("\nThe End");
							break;
							
					default: printf("\nInvalid ID");
				}
			}while(i);
		}
		
void insert(ND **ptr,int item)
	{
		ND *temp,*current;
		temp=(ND *)malloc(sizeof(ND));
		if(!temp)
			{
				printf("\nInsufficient Memory");
				return;
			}
		temp->info=item;
		temp->left=temp->right=NULL;
		if(!*ptr)
			{
				*ptr=temp;
				return;
			}
		current=*ptr;
		while(current->info!=item)
			{
				if(current->info>item)
					if(current->left!=NULL)
						current=current->left;
					else
						{
							current->left=temp;
							return;
						}
				else
					if(current->right!=NULL)
						current=current->right;
					else
						{
							current->right=temp;
							return;
						}
			}
		printf("\nDuplication Not Allowed");
		free(temp);
	}
	
void preorder(ND *p)
	{
		if(!p)
			return;
		printf(" %d",p->info);
		preorder(p->left);
		preorder(p->right);
	}
	
void inorder(ND *p)
	{
		if(!p)
			return;
		inorder(p->left);
		printf(" %d",p->info);
		inorder(p->right);
	}
	
void postorder(ND *p)
	{
		if(!p)
			return;
		postorder(p->left);
		postorder(p->right);
		printf(" %d",p->info);
	}
	
void del_ete(ND **ptr,int item)
	{
		ND *prev,*current,*fsucc,*succ;
		prev=current=*ptr;
		while(current!=NULL)
			{
				if(current->info==NULL)
					break;
				prev=current;
				if(current->info>item)
					current=current->left;
				else
					current=current->right;
			}
		if(!current)
			{
			printf("\nInvalid ID");
			return;
			}
		if(current->left==NULL && current->right==NULL)
			{
				if(prev==current)
					*ptr=NULL;
				else
					if(prev->left==current)
						prev->left=NULL;
						
					else
						prev->right=NULL;
				printf("\ndelted Item is %d",current->info);
				free(current);
			}
		else
			{
			if(current->left!=NULL && current->right!=NULL)
				{	
				fsucc=succ=current->right;
				while(succ->left!=NULL)
					{
						fsucc=succ;
						succ=succ->left;
						
					}
				current->info=succ->info;
				if(fsucc==succ)
					current->right=succ->right;
				else
					if(succ->right!=NULL)
						fsucc->left=succ->right;
					else
						fsucc->left=NULL;
					printf("\nDelted item is %d",item);
					free(succ);
				}
			else
				{
					if(prev==current)
						if(current->left!=NULL)
							*ptr=current->left;
						else
							*ptr=current->right;
					else
						if(prev->left==current)
							if(current->left!=NULL)
								prev->left=current->left;
							else
								prev->left=current->right;
						else
							if(current->left!=NULL)
								prev->right=current->left;
							else
								prev->right=current->right;
					printf("\nDelted item is %d",current->info);
					free(current);
				}
			}
		}
