//PROGRAM TO CREATE A FILE IN BINARY MODE OF STUDENT RECORD

#include <stdio.h>
#include <stdlib.h>

struct record 
      {
      	int roll;
      	char name[20];
      	int marks;
      };
typedef struct record RD;

void main(void)
     {
     	FILE *fp;
     	char fname[20];
     	RD rec;
     	printf("\nEnter the file name:");
     	scanf("%s",fname);
     	fp=fopen(fname,"wb+");
     	if(!fp)
     	  {
     	  	printf("\nFile open error");
     	  	exit(1);
     	  }
     	do{
     		printf("\nEnter roll:");
			 scanf("%d",&rec.roll);
			 fflush(stdin);
			 printf("\nEnter name:");
			 scanf("%s",rec.name);
			 fflush(stdin);
			 printf("\nEnter marks:");
			 scanf("%d",&rec.marks);
			 fwrite(&rec,sizeof(rec),1,fp);
			 fflush(stdin);
			 printf("\nAdd another rec?(Y/N)");
		}while(toupper(getchar())!='N');
		fclose(fp);
	  }
     
