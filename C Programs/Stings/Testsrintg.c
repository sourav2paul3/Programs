//SUBSTRING WITH ISPALIN FUNCTION TEST

#include <stdio.h>
#include<ctype.h>
#include<string.h>
int ispalin(char *);
char *substr(char [],int,int);
void main(void)
     {  int i,j,n;
     	char *sub,str[50];
     	printf("\nEnter a string:");
     	gets(str);
     	n=strlen(str);
     	for(i=0;i<n;i++)
     	   for(j=n;j>i;j--)
     	       sub=substr(str,i,j);
     	if(ispalin(sub))
     	   printf("%s",sub);
     }
int ispalin(char *a)
    {
    	int i,j;
    	i=j=0;
    	while(a[j]!='\0')
    	      j++;
    	    j--;
    	while(i<j)
    	    {
    	    	if(a[i]!=a[j])
    	    	  return(0);
    	    	i++;
    	    	j--;
    	    }
    	return(1);
    }
char *substr(char *a,int k,int n)
     {
     	char *s;int i,j;
     	s=(char*)malloc((n+1)*sizeof(char));
     	for(j=0,i=k;a[i]!='\0' && j<n;j++,i++)
     	    s[j]=a[i];
     	s[j]='\0';
     	return(s);
	 }
