#include<stdio.h>
#include<ctype.h>
void main(void)
	{
		int line,i,l,j,k,arr[100][100];
		char choice;
		while(1)
			{
				fflush(stdin);
				scanf("%c",&choice);
				choice=toupper(choice);
				switch(choice)
					{case 'A':scanf("%d",&line);
							  for(i=0;i<line;i++)
							  	{
							  		for(j=0;j<=i;j++)
							  		{if(i==j||j==0)
							  			arr[i][j]=1;
							  		else
							  			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
							  		printf("%d ",arr[i][j]);
							  		}
							  		printf("\n");
							  	}
							  	break;
					
					case 'B': scanf("%d",&line);
							  for(i=1;i<=line;i++)
							  	{for(j=i;j>=1;j--)
							  		{
								  if(j==1)
							  		printf("%d\n",1);
							  		
							  	 else
							  	 	{
									   if(j%2==0)
							  	 		printf("%d ",0);
							  	 	else
							  	 		printf("%d ",1);
							  	 	}
							  	 }
							  	printf("\n");
							  	}
							  	break;
					default:printf("\n Invalid choice");
				}
			}
		}
