#include<stdio.h>
void main(void)
	{
		int testcase,i,j,price[1000],coinvar,sum;
		scanf("%d",&testcase);
		for(i=0;i<testcase;i++)
		{
		scanf("%d",&price[i]);
		}
		for(i=0;i<testcase;i++)
		{
		coinvar=sum=0;
		j=1;
		while(sum<price[i])
			{
			sum=sum+j;
			coinvar++;
			j++;
			}
		if(i==testcase-1)
			printf("%d",coinvar);
		else
			printf("%d\n",coinvar);
	}
}
