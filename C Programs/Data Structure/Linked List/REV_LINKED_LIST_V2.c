//PROGRAM TO REVERSE A LINKED LIST 

#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <dos.h>
struct node 
	{
		int info;
		struct node *next;
	};
typedef struct node ND;
void display(ND *);
ND *rev(ND *);
ND *create(void);
void main(void)
     {
     	ND *start;
     	start=NULL;
     	printf("\t\t\t\t\t   Developed by Sourav Paul");
     	start=create();
     	printf("\nLinked list is:");
     	display(start);
     	start=rev(start);
     	printf("\nRev linked list is:");
     	display(start);
     }
ND *create(void)
    {
    ND *start,*current,*temp;
    	start=NULL;
    	do{
    		temp=(ND *)malloc(sizeof(ND));
    		printf("\nEnter an int value:");
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
    return(start);
}
void display(ND *start)
	{
		while(start!=NULL)
    {
    	printf(" %d",start->info);
    	start=start->next;
    }
}
ND *rev(ND *start)
     {
     	ND *n1,*n2,*n3;
     	n1=start;
     	n2=n1->next;
     	n3=n2->next;
     	n1->next=NULL;
     	n2->next=n1;
     	while(n3!=NULL)
     		{
     			n1=n2;
     			n2=n3;
     			n3=n3->next;
     			n2->next=n1;
     		}
     		start=n2;
     		return(start);
     	}
