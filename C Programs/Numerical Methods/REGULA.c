//PROGRAM FOR REGULA METHOD

#include <stdio.h>
#include <math.h>

float f(float );
void regula(float *,float,float,float,float,int *);
void main(void)
	{
		int itr=0,maxitr;
		float x0,x1,x2,x3,aerr;
		printf("\nEnter the values of x0,x1,allowed error,max itr number:");
		scanf("%f %f %f %d",&x0,&x1,&aerr,&maxitr);
		regula(&x2,x0,x1,f(x0),f(x1),&itr);
		do{
			if(f(x0)*f(x2)<0)
				x1=x2;
			else
				x0=x2;
			regula(&x3,x0,x1,f(x0),f(x1),&itr);
			if(fabs(x3-x2)<aerr)
				{
					printf("\nAfter %d itr root is %f",itr,x3);
					return;
				}
				x2=x3;
		}while(itr<maxitr);
	printf("\nSol doesnot converge");
}

float f(float X)
	{
		return((X*X*X)-(2*X)-5);
	}
	
void regula(float *x,float x0,float x1,float fx0,float fx1,int *itr)
	{
		*x=x0-((x1-x0)/(fx1-fx0)/fx0);
		++(*itr);
		printf("\nIteration number %d,X=%f",*itr,*x);
	}
	
