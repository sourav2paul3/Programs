//ADDITION OF TWO SPARSE MATRIX

#include <stdio.h>
#define MAX 100

void input(int [][3]);
void output(int [][3]);
void add(int [][3],int [][3],int [][3]);

void main(void)
	{
		int sparse1[MAX][3],sparse2[MAX][3],sparse[MAX][3];
		int m,n;
		printf("\nHow many rows and columns of each matrix:");
		scanf("%d %d",&m,&n);
		sparse1[0][0]=m;
		sparse1[0][1]=n;
		sparse2[0][0]=m;
		sparse2[0][1]=n;
		printf("\nInput first sparse matrix:");
		input(sparse1);
		printf("\nInput 2nd sparse matrix");
		input(sparse2);
		add(sparse1,sparse2,sparse);
		printf("\nResultant sparse matrix is:");
		output(sparse);
	}
	
void input(int a[][3])
	{
		int i=1;
		do{
			printf("\nEnter row,column value of non-zero value row wise:");
			scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
			i++;
			printf("\nAnother non-zero element?(Y/N)");
			fflush(stdin);
			}while(toupper(getchar())!='N');
			a[0][2]=--i;
	}
	
void output(int a[][3])
	{
		int i;
		printf("\nRow\tColumn\tValue");
		for(i=0;i<=a[0][2];i++)
			printf("\n%d\t%d\t%d",a[i][0],a[i][1],a[i][2]);
	}

void add(int a[][3],int b[][3],int c[][3])
	{
	int i,j,k,temp;
	c[0][0]=a[0][0];
	c[0][1]=a[0][1];
	i=j=k=1;
	while(i<=a[0][2] && j<=b[0][2])
		{
		if(a[i][0]<b[j][0])
		{
			c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2];
			k++;
			i++;
		}
		else
			if(a[i][0]>b[j][0])
				{
					c[k][0]=b[j][0];
					c[k][1]=b[j][1];
					c[k][2]=b[j][2];
					j++;
					k++;
				}
			else
				{
				if(a[i][1]<b[j][1])
					{
						c[k][0]=a[i][0];
						c[k][1]=a[i][1];
						c[k][2]=a[i][2];
						i++;
						k++;
					}
				else
					if(a[i][1]>b[j][1])
						{
							c[k][0]=b[j][0];
							c[k][1]=b[j][1];
							c[k][2]=b[k][2];
							j++;
							k++;
						}
					else
						{
							temp=a[i][2]+b[j][2];
							if(temp!=0)
								{
									c[k][0]=a[i][0];
									c[k][1]=a[j][1];
									c[k][2]=temp;
									k++;
								}
							i++;
							j++;
						}
				}
		}
	while(i<=a[0][2])
		{
			c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2];
			k++;
			i++;
		}
	while(j<=b[0][2])
		{
			c[k][0]=b[j][0];
			c[k][1]=b[j][1];
			c[k][2]=b[j][2];
			k++;
			j++;
		}
		c[0][2]=--k;
	}
