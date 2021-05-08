//PROGRAM TO CREATE REVERSELY  A LINKED LIST

#include <stdio.h>
#include <malloc.h>
struct node 
	{
		int info;
		struct node *next;
	};
typedef struct node ND;
void main(vodi)
	{
		ND *start,*temp;
		start=NULL;
		do{
			temp=(ND *)malloc(sizeof(ND));
			printf("\nEnter an int:");
			scanf("%d",&temp->info);
			temp->next=start;
			start=temp;
			fflush(stdin);
			printf("\nWnat another?(Y/N)");
		}while(toupper(getchar())!='N');
		printf("\nelemnets are:");
		while(start!=NULL)
			{
				printf(" %d",start->info);
				start=start->next;
			}
		}
			
			
