//PROGRAM FOR NEWTON FORWARD RULE

#include <stdio.h>
#define MAX 100
#define ORDER 4

void main(void)
	{
		float ax[MAX],ay[MAX],diff[MAX][ORDER],x,p,h,yp,nr=1.0,dr=1.0;
		int i,j,k,n;
		printf("\nEnter the value od n:");
		scanf("%d",&n);
		printf("\nEnter the values of x,y:");
		for(i=0;i<n;i++)
			scanf("%f %f",&ax[i],&ay[i]);
		printf("\nEnter the value of x:");
		scanf("%f",&x);
		h=ax[1]-ax[0];
		for(i=0;i<n-1;i++)
			diff[i][1]=ay[i+1]-ay[i];
		for(j=2;j<=ORDER;j++)
			for(i=0;i<n;i++)
				diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
		i=0;
		while(!(ax[i]>x))
			i++;
		i--;
		p=(x-ax[i])/h;
		yp=ay[i];
		for(k=1;k<=ORDER;k++)
			{
				nr+=p-k+1;
				dr+=k;
				yp+=(nr/dr)*diff[i][k];
			}
		printf("\nWhen x=%f,y=%f",x,yp);
	}
