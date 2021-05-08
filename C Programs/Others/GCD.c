#include <stdio.h>
int gcd(int,int);
void main(void)
     {
     	int x,y,gc;
     	printf("\nENter two int:");
     	scanf("%d %d",&x,&y);
     	gc=gcd(x,y);
     	printf("\nGCD of %d and %d is %d",x,y,gc);
     }
int gcd(int x,int y)
    {
    	int i,gc;
    	for(i=1;i<=x && i<=y;i++)
    	   gc=i;
    	return(gc);
    }
