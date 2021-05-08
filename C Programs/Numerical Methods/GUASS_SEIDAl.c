//PROGRAM FOR GUASS SEIDAL

#include <stdio.h>
#include <math.h>
#define ESP 0.0001
#define x1(x2,x3)((17-x2+2*(x3))/20)
#define x2(x1,x3)((-18-3*(x1)+(x3))/20)
#define x3(x1,x2)((25-2*(x1)+3*(x2))/20)

void main(void)
	{
		float x1=0,x2=0,x3=0,y1,y2,y3;
		int i=0;
		printf("\nx1\t x2\t x3");
		printf("\n%f\t %f\t %f");
		do{
			y1=x1(x2,x3);
			y2=x2(y1,x3);
			y3=x3(y1,y2);
			if(fabs(y1-x1)<ESP && fabs(y2-x2)<ESP && fabs(y3-x3)<ESP)
				{
					printf("\n x1=%f",y1);
					printf("\n x2=%f",y2);
					printf("\n x3=%f",y3);
					i=1;
				}
			else
				{
					x1=y1;
					x2=y2;
					x3=y3;
				}
			printf("\n%f\t %f\t %f",x1,x2,x3);
		}while(i);
	}
