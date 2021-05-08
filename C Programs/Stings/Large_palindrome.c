//PROGRAM TO FIND LARGEST PALINDROME IN A STRING

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char *substr(char [],int,int);
int ispalin(char []);
void main(void)
     {
     	int i,j,k,n,x;
     	char str[MAX],arr[MAX][MAX],temp[MAX];
     	printf("\t\t\t\t\t\t Developed by Sourav Paul");
		printf("\nEnter a string:");
     	gets(str);
     	n=strlen(str);
     	k=0;
     	for(i=0;i<n;i++)
     	   for(j=n;j>i;j--)
     	       {
     	       	if(ispalin(substr(str,i,j)))
     	       	   {strcpy(arr[k],substr(str,i,j));
     	       	   k++;
     	           }
     	       }
     	for(i=0;i<k-1;i++)
     	    for(j=0;j<k-i-1;j++)
     	   	   if(strlen(arr[j])>strlen(arr[j+1]))
                {
			     strcpy(temp,arr[j]);
			     strcpy(arr[j],arr[j+1]);
			     strcpy(arr[j+1],temp);
		        }
		printf("\nLargest palindrome is %s",arr[k-1]);
	}
int ispalin(char a[])
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
     	char *s;
     	int i,j;
     	s=(char*)malloc((n+1)*sizeof(char));
     	for(j=0,i=k;a[i]!='\0' && j<n;j++,i++)
     	    s[j]=a[i];
     	s[j]='\0';
     	return(s);
     }
