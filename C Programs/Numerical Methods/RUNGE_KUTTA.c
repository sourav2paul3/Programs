//PROGRAM FOR RUNGE KUTTA METHOD

#include <stdio.h>
float f(float,float);
void main(void)
	{
		float x0,y0,h,k,xn,x,y,k1,k2,k3,k4;
		printf("\nEnter values of x0,y0");
		scanf("%d %d %f %f",&x0,&y0,&h,&xn);
		x=x0;
		y=y0;
		while(1)
			{
				if(x==xn)
					break;
					k1=h*f(x,y);
					k2=h*f(x+h/2,y+k1/2);
					k3=h*f(x+h/2,y+k2/2);
					k4=h*f(x+h,y+k3);
					k=(k1+2*(k2+k3)+k4)/6;
					x+=h;
					y+=k;
					printf("\nwhne x=%f y=%f",x,y);
			}
		}

float f(float x, float y)
	{
		return(x+(y*y));
	}
