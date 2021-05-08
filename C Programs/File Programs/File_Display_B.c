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
     	printf("Enter file name:");
     	scanf("%s",fname);
     	fp=fopen(fname,"r");
     	if(fp==NULL)
     	   {
     	   	printf("\nFile open error");
     	   	exit(1);
     	   }
     	printf("\nContent is");
     	while(!feof(fp))
     	     {
     	     	fread(&rec,sizeof(rec),1,fp);
     	     	printf("\n%d\t%c\t%d",rec.roll,rec.name,rec.marks);
     	     }
     	fclose(fp);
     }
