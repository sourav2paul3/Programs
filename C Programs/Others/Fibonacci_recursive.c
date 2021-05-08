//PROGRAMM TO PRINT FIBONACCI USING RECURSIVE FUNCTION

#include <stdio.h>
int fib(int);
void main(void)
     {
     	int i,n;
     	printf("\nEnter the number of terms:");
     	scanf("%d",&n);
     	printf("\nFibonacci series is:");
     	for(i=0;i<n;i++)
     	    printf("%d,",fib(i));
     	}
int fib(int n)
     {
     	if(n==0)
     	  return(0);
     	if(n==1)
     	   return(1);
     	else
     	    return(fib(n-1)+fib(n-2));
     }
    
