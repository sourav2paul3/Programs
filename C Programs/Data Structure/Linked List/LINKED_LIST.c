//PROGRAM FOR LINKED LIST

#include <stdio.h>
#include <malloc.h>
struct node
     {
     	int info;
     	struct node *next;
     };
typedef struct node ND;
void main()
    {
    	ND *start,*current,*temp;
    	start=NULL;
    	do{
    		temp=(ND *)malloc(sizeof(ND));
    		printf("\nEnter an int vale:");
    		scanf("%d",&temp->info);
    		if(start==NULL)
    		  start=current=temp;
    		else
    		    {
    		    	current->next=temp;
    		    	current=temp;
    		    }
    		fflush(stdin);
    		printf("\nWant another record?(Y/N)");
       }while(toupper(getchar())!='N');
    current->next=NULL;
    printf("\nElements are:");
    while(start!=NULL)
    {
    	printf(" %d",start->info);
    	start=start->next;
    }
}
