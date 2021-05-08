//PROGRAM TO FILE CONTENT EVERSE

#include <stdio.h>
void rev(FILE *,int);
void main(void)
     {
     	int n,i;
     	char x,s,fname[20];
     	FILE *fp;
     	printf("\nEnter the file name:");
     	scanf("%s",fname);
     	fp=fopen(fname,"r+");
     	if(!fp)
     	   {
     	   	printf("\nFile open error:");
     	   	exit(1);
     	   }
     	printf("\nFile content is:");
     	while(!feof(fp))
     	     {
     	     	x=getc(fp);
     	     	putchar(x);
     	}
        n=ftell(fp);
        printf("\nRev file content is:");
        fseek(fp,0l,SEEK_END);
     	for(i=n;i>=0;i--)
     	    {
     	      fseek(fp,-1l,SEEK_CUR);
     	      s=getc(fp);
     	      putchar(s);
     	      fseek(fp,-1l,SEEK_CUR);
     	  }
    }

