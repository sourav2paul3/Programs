//SUBSTRING FUNCTION

#include <stdio.h>
#include <malloc.h>
#define MAX 50
char *substr(char [],int,int);
void main()
     {
     	int i,n;
     	char str[MAX],*sub;
     	printf("\nEnter a string:");
     	gets(str);
     	printf("\nENter the value of i and n:");
     	scanf("%d %d",&i,&n);
     	sub=substr(str,i,n);
     	printf("\nOUTPUT is %s",sub);
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
