//PROGRAM FOR SIMSON'S 1/3rd RULE

#include <stdio.h>

float y(float x)
	{
		return(1/(1+x*x));
	}
	
void main(void)
	{
		int i,n;
		float h,x0,s,xn;
		printf("\nEnter the values of x0,xn,n:");
		scanf("%f %f %n",&x0,&xn,&n);
		h=(xn-x0)/n;
		s=y(x0)+y(xn);
		for(i=1;i<n;i++)
			{
				if(i%2!=0)
					s=s+4*y(x0+i*h);
				else
					s=s+2*y(x0+i*h);
			}
		printf("\nResult is %f",h/3*(s));
	}
		
