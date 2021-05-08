//PROGRAM TO MAKE HISTOGRAM

#include<stdio.h>
void main()
     {
     	int N[20];
     	int grp,i,j,k,x;
     	printf("\nEnter the grp number:");
     	scanf("%d",&x);
     	for(i=0;i<x;i++)
     	   {
     	    printf("\nENter grp %d emplyoee number:",i+1);
     	    scanf("%d",&grp);
     	    N[i]=grp;
     	    printf("%d",N[i]);
     	}
     	printf("\n");
     	printf("|\n");
     	for(i=0;i<x;i++)
     	   {
     	   	for(j=1;j<=3;j++)
     	   	   {if(j==2)
     	   	      printf("GRP %d",i+1);
     	   	    else
     	   	        printf("|");
     	   	    for(k=0;k<=N[i];k++)
     	   	        printf("*");
     	   	    if(j==2)
     	   	       printf("%d\n",N[i]);
     	   	    else
     	   	        printf("\n");
				   }
				printf("|\n");
			}
	 }
