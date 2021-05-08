#include <stdio.h>
int isprime(int x)
	{int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0)
			return 0;
		return 1;
	}
void main(void)
	{
		int i,n,prime,count=1,t1=0,t2=1,nxt;
		scanf("%d",&n);
		if(n==1 || n==3)
			printf("1");
		if(n==2)
			printf("2");
		if(n>3)
			{
				if(n%2==0)
				{
				i=2;
				while(count<=n/2)
					{
						if(isprime(i))
							{
							prime=i;
							count++;
							}
						i++;
					}
				printf("%d",prime);
				}
				else
					{
					for(i=1;i<=n/2;i++)
						{nxt=t1+t2;
						t1=t2;
						t2=nxt;
						}
					printf("%d",nxt);
					}
			}
	}
