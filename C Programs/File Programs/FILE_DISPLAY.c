
//PROGRAM TO DISPLAY FILE

#include <stdio.h>
void main(void)
     {
     	FILE *fp;
     	char fname[20],x;
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
     	     	x=getc(fp);
     	     	putchar(x);
     	     }
     	fclose(fp);
     }
     	     	
