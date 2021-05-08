//PROGRAM TO CREAT A FILE OF STUDENT RECORD

#include <stdio.h>
#include <stdlib.h>
void main(void)
     {
     	FILE *fp;
     	int roll,marks;
     	char fname[20],name[20];
     	printf("\nEnter the file name:");
     	scanf("%s",fname);
     	fp=fopen(fname,"w+");
     	if(!fp)
     	  {
     	  	printf("\nFile open error");
     	  	exit(1);
     	  }
     	do{
     		printf("\nEnter roll:");
			 scanf("%d",&roll);
			 fflush(stdin);
			 printf("\nEnter name:");
			 scanf("%s",name);
			 fflush(stdin);
			 printf("\nEnter marks:");
			 scanf("%d",&marks);
			 fflush(stdin);
			 fprintf(fp,"%d %s %d\n",roll,name,marks); 
			 printf("\nAdd another rec?(Y/N)");
		}while(toupper(getchar())!='N');
		fclose(fp);
	  }
     
