//PROGRAM TO SORD STUDENT RECORD ALPHABETICALLY

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
void input(char [][MAX],int);
void output(char [][MAX],int);
void sort_student(char [][MAX],int);
void main(void)
     {
     	int n;
     	char std[MAX][MAX];
     	printf("\nEnter the number of students:");
     	scanf("%d",&n);
     	input(std,n);
     	sort_student(std,n);
     	output(std,n);
	 }
void input(char a[][MAX],int k)
     {
     	int i;
     	for(i=0;i<k;i++)
     	   {
     	   	fflush(stdin);
     	   	printf("\nEnter name:");
     	   	gets(a[i]);
			}
	 }
void output(char a[][MAX],int k)
     {
     	int i;
     	for(i=0;i<k;i++)
     	   printf("\n%s",a[i]);
	 }
void sort_student(char a[][MAX],int k)
     {
     	int i,j;
     	char temp[MAX];
     	for(i=0;i<k-1;i++)
     	    for(j=0;j<k-i-1;j++)
     	      if(strcmpi(a[j],a[j+1])>0)
     	        {
     	        	strcpy(temp,a[j]);
     	        	strcpy(a[j],a[j+1]);
     	        	strcpy(a[j+1],temp);
				 }
	 }
