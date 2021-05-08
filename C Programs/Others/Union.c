//USE OF UNION

#include <stdio.h>
#define MAX 100
union record
      {
      	int pages;
      	float time;
	  };
typedef union record RD;
struct information
       {
       	char title[100];
       	char publisher[100];
       	char unit [20];
       	RD pagetime;
	   };
typedef struct information INFO;
void input(INFO [],int);
void output(INFO[],int);
void main(void)
     {
     	int n;
     	INFO arr[MAX];
     	printf("\nEnter the value of n:");
     	scanf("%d",&n);
     	input(arr,n);
     	output(arr,n);
	 }
void input(INFO a[],int n)
     {
     	int i;
     	for(i=0;i<n;i++)
     	   {
     	   	fflush(stdin);
     	   	printf("\nTitle:");
     	   	gets(a[i].title);
     	   	printf("\npublisher:");
     	   	gets(a[i].publisher);
     	   	fflush(stdin);
     	   	printf("\nUnit??");
     	   	gets(a[i].unit);
     	   	if(strcmpi(a[i].unit,"BOOK")==0)
     	   	   {
     	   	   	printf("\nEnter no of page:");
     	   	   	scanf("%d",&a[i].pagetime.pages);
			   }
			else
			     {
			     	printf("\nEnter playing time:");
			     	scanf("%f",&a[i].pagetime.time);
				 }
			}
	 }
void output(INFO a[],int n)
      {
      	int i;
      	for(i=0;i<n;i++)
      	   {
      	   	printf("\n %s    %s",a[i].title,a[i].publisher);
      	   	if(strcmpi(a[i].unit,"BOOK")==0)
      	   	  printf("\n  %d pages",a[i].pagetime.pages);
      	   	else
      	   	    printf("\n  %f sec",a[i].pagetime.time);
			 }
	  }
