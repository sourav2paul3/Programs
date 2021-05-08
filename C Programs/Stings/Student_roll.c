//PROGRAM TO SORT STUDENTS RECORD ACCORDING TO ROLL

#include <stdio.h>
#define MAX 100
struct student
       {
       	int roll;
       	char name[20];
       	int marks;
	   };
typedef struct student STD;
void input(STD[],int);
void output(STD[],int);
void sort_student(STD[],int);
void main()
     {
     	STD std[MAX];
     	int n;
     	printf("\nEnter the number of students:");
     	scanf("%d",&n);
     	input(std,n);
     	sort_student(std,n);
     	output(std,n);
	 }
void input(STD a[],int n)
     {int i;
     for(i=0;i<n;i++)
        {
        	printf("\nEnter your roll number:");
        	scanf("%d",&a[i].roll);
        	fflush(stdin);
        	printf("\nEnter your name:");
        	gets(a[i].name);
        	printf("\nEnter your marks:");
        	scanf("%d",&a[i].marks);
		}
	 }
void output(STD a[],int n)
     {
     	int i;
     	printf("\nRoll    Name    Marks");
     	for(i=0;i<n;i++)
     	   printf("\n%d    %s    %d",a[i].roll,a[i].name,a[i].marks);
	 }
void sort_student(STD a[],int n)
     {
     	int i,j;
     	STD temp;
     	 for(i=0;i<n-1;i++)
     	      {
     	   for(j=0;j<n-i-1;j++)
     	      {
     	      if(a[j].roll>a[j+1].roll)
     	         {
     	         	temp=a[j];
     	         	a[j]=a[j+1];
     	         	a[j+1]=temp;
				  }
		}
	}
}

