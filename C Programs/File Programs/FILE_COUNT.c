//PROGRAM TO FIND LINE,SPACE,CHAR IN A FILE

#include <stdio.h>
void main(void)
     {
     	FILE *fp;
     	char fname[20],x;
     	int blank=0,tab=0,line=0,cr=0;
     	printf("Enter file name:");
     	scanf("%s",fname);
     	fp=fopen(fname,"r");
     	if(!fp)
     	   {
     	   	printf("\nFile open error");
     	   	exit(1);
     	   }
     	printf("\nContent is");
     	while(!feof(fp))
     	     {
     	     	x=getc(fp);
     	     	putchar(x);
     	     	cr++;
     	     	if(x==' ')
     	     	  blank++;
     	     	if(x=='\n')
     	     	   line++;
     	     	if(x=='\t')
     	     	   tab++;
     	     }
     	printf("\nNumber of char is %d",cr);
     	printf("\nNumber of space is %d",blank);
     	printf("\nNumber of tab is %d",tab);
     	printf("\nNumber of line is %d",line);
     	fclose(fp);
     }
     	     	
