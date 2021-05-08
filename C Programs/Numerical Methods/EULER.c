//PROGRAM FOR EULER EQUATION

#include <stdio.h>
float f(float x,float y)
	{
		return(x+y);
	}
	
void main(void)
	{
		int i=1;
		float x0,xn,y,h;
		printf("\nEnter the values of x,x0,y0,h:");
		scanf("%f %f %f %f",&xn,&x0,&y,&h);
		while(x0<=xn)
			{
				y=y+h*f(x0,y);
				x0=x0+h;
				printf("\nx%d=%f y%d=%f",i,x0,i,y);
				i++;
			}
		printf("\n\nResult is %f",y);
	}
