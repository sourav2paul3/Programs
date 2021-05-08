//PROGRAM TO SORT FILE CONTENTS BASICALLY STUDENTS RECORD ROLL NUMBER WISE OF BINARY MODE FILE

#include <stdio.h>
#include <stdlib.h>
struct record
      {
      	int roll;
      	char name[20];
      	int marks;
      };
typedef struct record RD;
void sort_student(RD *,int);
void main(void)
     {
     	int i,n;
     	FILE *fp;
     	char fname[20];
     	RD *arr,rec;
     	printf("\nEnter the name of the file:");
     	scanf("%s",fname);
     	fp=fopen(fname,"rb+");
     	if(!fp)
     	   {
     	   	printf("\nFile open error");
     	   	exit(1);
     	   }
     	fseek(fp,0L,SEEK_END);
     	n=(int)(ftell(fp)/sizeof(RD));
     	arr=(RD *)malloc(n*sizeof(RD));
     	fseek(fp,0L,SEEK_SET);
     	i=0;
     	while(fread(&rec,sizeof(rec),1,fp)==1)
     	     {
     	  arr[i++]=rec;
     	     }
     	sort_student(arr,n);
     	fseek(fp,0L,SEEK_SET);
     	for(i=0;i<n;i++)
     	   {
     	   	rec=arr[i];
     	   	fwrite(&rec,sizeof(rec),1,fp);
     	   }
     	printf("\nContent is");
     	printf("\nRoll    Name    Marks");
     	fseek(fp,0L,SEEK_SET);
     	while(fread(&rec,sizeof(rec),1,fp)==1)
     	     {
     	     printf("\n%d %s %d",rec.roll,rec.name,rec.marks);
           }
		 fclose(fp);
     }
void sort_student(RD *a,int n)
     {
     	RD temp;
     	int i,j;
     	for(i=0;i<n-1;i++)
     	    for(j=0;j<n-i-1;j++)
     	       if(a[j].roll>a[j+1].roll)
     	          {
     	          	temp=a[j];
     	          	a[j]=a[j+1];
     	          	a[j+1]=temp;
     	          }
     }
     	
