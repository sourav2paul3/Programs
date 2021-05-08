//ISPALIN FUNCTION

#include<stdio.h>
#include<ctype.h>
int ispalin(char []);
void main(void)
     {
     	char a[60];
     	printf("\nENter string:");
     	gets(a);
     	if(ispalin(a))
     	  printf("\n%s is palin",a);
     	else
     	    printf("\nNot palin");
     }
int ispalin(char a[])
    {
    	int i,j;
    	i,j;
    	i=0;
    	j=0;
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
    
