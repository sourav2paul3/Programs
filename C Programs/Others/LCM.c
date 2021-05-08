#include <stdio.h>
int lcm(int,int);
void main(void)
     {
     	int x,y,lc;
     	printf("\nEnter two int:");
     	scanf("%d %d",&x,&y);
     	lc=lcm(x,y);
     	printf("\nLCM of %d and %d is %d:",x,y,lc);
     }
int lcm(int x,int y)
    {
    	int i,lc;
    	lc=(x>y)?x:y;
    	while(1)
    	   {
    	   	if(lc%x==0 && lc%y==0)
    	   	   {
    	   	   	return(lc);
    	   	   	break;
    	   	   }
    	   	lc++;
    	   }
    }
