//PROGRAM FOR NEWTON RAPHSON 

#include <stdio.h>
#include <math.h>

float f(float x);
float df(float x);

void main(void)
	{
		int itr,maxitr;
		float h,x0,x1,aerr;
		printf("\nEnter the values of x0,allowed error,maxitr:");
		scanf("%f %f %d",&x0,&aerr,&maxitr);
		for(itr=1;itr<=maxitr;itr++)
			{
				h=f(x0)/df(x0);
				x1=x0-h;
				if(fabs(h)<aerr)
					{
						printf("\nAfter %d iteration root is %f",itr,x1);
						return;
					}
				x0=x1;
			}
			printf("\nIteration number isn't sufficient");
	}
	
float f(float x)
	{
		return((x*x*x*x)-x-10);
	}
	
float df(float x)
	{
		return((4*x*x*x)-1);
	}
