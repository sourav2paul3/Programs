//PROGRAM FOR TRAPIZOIDAL RULE

#include <stdio.h>

float y(float x)
	{
		return(1/(1+x*x));
	}
	
void main(void)
	{
		int i,n;
		float h,x0,s,xn;
		printf("\nEnter the values of x0,xn,n");
		scanf("%f %f %d",&x0,&xn,&n);
		h=(xn-x0)/n;
		s=y(x0)+y(xn);
		for(i=1;i<n;i++)
			s=s+2*y(x0+i*h);
		s=h/2*(s);
		printf("\nResult is %f",s);
	}
