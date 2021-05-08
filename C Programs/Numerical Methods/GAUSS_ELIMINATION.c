//PROGRAM FOR GAUSS ELIMINATION

#include <stdio.h>
#define n 3

void main(void)
	{
		int i,j,k;
		float A[20][20],c,sum=0.0,x[10];
		printf("\nElements to the argument of the matrix:");
		for(i=0;i<n;i++)
			for(j=0;j<n+1;j++)
				{
					printf("\nEnter A[%d][%d] elemnt:",i,j);
					scanf("%d",&A[i][j]);
				}
		for(j=0;j<n;j++)
			for(i=0;i<n;i++)
				{
					if(i>j)
					{
						c=A[i][j]/A[j][j];
						for(k=0;k<n+1;k++)
							A[i][k]=A[i][k]-c*A[j][k];
					}
				}
		for(i=0;i<n;i++)
			x[i]=0;
		x[n-1]=A[n-1][n]/A[n-1][n-1];
		for(i=n-2;i>=0;i--)
			{
				sum=0;
				for(j=i;j<n;j++)
					sum=sum+A[i][j]*x[j];
				x[i]=(A[i][n]-sum)/A[i][i];
			}
		printf("\nThe solution is:");
		for(i=0;i<n;i++)
			printf("\n%f",x[i]);
		}
