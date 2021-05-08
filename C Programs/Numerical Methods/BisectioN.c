//PROGRAM FOR BISECTION METHOD

#include <stdio.h>
#include <math.h>
float fun(int);
void bisection(float *,float,float,int *);
void main(void)
	{
		int itr=0,max;
		float x,a,b,x1,allerr;
		printf("\nEnter a,b,allowed error,max iteration number:");
		scanf("%f %f %f %d",&a,&b,&allerr,&max);
		bisection(&x,a,b,&itr);
		do{
			if(fun(a)*fun(x)<0)
				b=x;
			else
				a=x;
			bisection(&x1,a,b,&itr);
			if(fabs(x1-x)<allerr)
			{
				printf("\nAfter %d iteration root is %f",itr,x1);
				return(0);
			}
			x=x1;
		}while(itr<max);
		printf("\nThe sol. doesnot converge");
	}
	
float fun(int n)
	{
		return(n*n-3);
	}
	
void bisection(float *x,float a,float b,int *itr)
	{
		*x=(a+b)/2;
		++(*itr);
		printf("\nIteration no.=%d,X=%f",*itr,*x);
	}
