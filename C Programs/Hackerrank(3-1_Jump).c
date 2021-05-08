#include <stdio.h>

void fun(int x1,int v1,int x2,int v2);

void main(void)
	{
		int x1,v1,x2,v2;
		scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
		fun(x1,v1,x2,v2);
	}
	
void fun(int x1,int v1,int x2,int v2)
	{
		if(v1>v2 && ((x2-x1)%(v1-v2)==0))
			printf("Yes");
		else
			printf("NO");
	}
