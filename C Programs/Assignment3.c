#include <stdio.h>
void main(void)
	{
		int i,j,fterm,lterm,lines;
		scanf("%d",&lines);
		fterm=1;
		lterm=lines*lines+1;
		for(i=lines;i>0;i--)
			{for(j=1;j<=i;j++)
				{printf("%d*",fterm);
				 fterm++;
				}
			
			for(j=1;j<=i;j++)
				{
					printf("%d",lterm);
					if(j<i)
						printf("*");
					lterm++;
				}
			printf("\n");
			lterm=lterm-(i-1)*2-1;
			}
		}
