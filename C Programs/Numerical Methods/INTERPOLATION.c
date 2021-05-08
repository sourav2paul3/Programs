//PROGRAM FOR INTERPOLATION

#include <stdio.h>
#define MAX 100

void main(void)
	{
		float ax[MAX],ay[MAX],nr,dr,x,y=0;
		int i,j,n;
		printf("\nEnter the value of n:");
		scanf("%d",&n);
		printf("\nEnter the set of valules:");
		for(i=0;i<n;i++)
			{
				printf("\nEnter %dth value of ax[%d] and ay[%d]:",i,i,i);
				scanf("%f %f",&ax[i],&ay[i]);
			}
		printf("\nEnter the value of x at which y will be calculated:");
		scanf("%f",&x);
		for(i=0;i<n;i++)
			{
				nr=dr=1;
				for(j=0;j<n;j++)
					if(j!=i)
						{
							nr*=x-ax[j];
							dr*=ax[i]-ax[j];
						}
					y+=(nr/dr)*ay[i];
			}
		printf("\nX=%f\tY=%f",x,y);
	}
