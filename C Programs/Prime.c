#include<stdio.h>
int isprime(int x)
	{int i;
		for(i=2;i<=x/2;i++)
			{
				if(x%i==0)
					return(0);
			}
		return(1);
	}
long long fib(int n,int m,int indexs)
	{
		long i,fnum,snum;
		long long sum;
		fnum=n;snum=m;
		for(i=1;i<=indexs-1;i++)
			{
				sum=fnum+snum;
				fnum=snum;
				snum=sum;
			}
		return(sum);
	}
void main(void)
	{
		int index,i,prime[1000], n1,n2;
		int primecombo[10000],j,indexp,temp,tempi,primj;
		int sprime[1000],indexs,small,large;
		scanf("%d %d",&n1,&n2);
		index=0;
		for(i=n1;i<=n2;i++)
			{
				if(isprime(i))
					{prime[index]=i;
					index++;}
			}
		indexp=indexs=0;
		for(i=0;i<index;i++)
			{
				for(j=0;j<index;j++)
					{
						if(i!=j)
							{ 	temp =prime[j];
								tempi=prime[i];
								primj=prime[j];
    							while (primj != 0) {
        							tempi *= 10;
       							 	primj /= 10;
       							 	indexp++;
    							}
								primecombo[indexp]=tempi+temp;
								if(isprime(primecombo[indexp]))
									{
									sprime[indexs]=primecombo[indexp];
									indexs++;
									}
							}
						}
					}
		small=sprime[0];
		large=sprime[indexs];
		for(i=0;i<indexs;i++)
			{
				if(sprime[i]<small)
					small=sprime[i];
				if(sprime[i]>large)
					large=sprime[i];
			}
		printf("ll%d",fib(small,large,indexs));
	}
				
				
				
				
