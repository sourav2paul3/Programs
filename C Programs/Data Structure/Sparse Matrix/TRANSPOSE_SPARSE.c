//PROGRAM TO TRANSPOSE A SPARSE MATRIX

#include <stdio.h>
#define MAX 100

void input(int [][3]);
void output(int [][3]);
void transpose(int [][3],int [][3]);

void main(void)
	{
		int sparse[MAX][3],trans[MAX][3];
		input(sparse);
		transpose(sparse,trans);
		printf("\nTranspose Matrix is:");
		output(trans);
	}
	
void input(int a[][3])
	{
		int i;
		printf("\nHow many rows and column in the sparse matrix:");
		scanf("%d %d",&a[0][0],&a[0][1]);
		i=1;
		do{
			printf("\nEnter the row,column and value of a non-zero element row wise:");
			scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
			i++;
			fflush(stdin);
			printf("\nAnother Non-zero element(y/N)");
		}while(toupper(getchar())!='N');
		a[0][2]=--i;
	}
	
void output(int b[][3])
	{
		int i;
		printf("\nROW\tCOLUMN\tVALUE");
		printf("\n%d\t%d\t%d",b[0][0],b[0][1],b[0][2]);
		for(i=1;i<=b[0][2];i++)
			printf("\n%d\t%d\t%d",b[i][0],b[i][1],b[i][2]);
	}
	
void transpose(int a[][3],int t[][3])
	{
		int i,j,col;
		t[0][0]=a[0][1];
		t[0][1]=a[0][0];
		t[0][2]=a[0][2];
		i=j=0;
		for(col=0;col<a[0][1];col++)
			for(i=1;i<=a[0][2];i++)
				if(a[i][1]==col)
					{
						t[j][0]=a[i][1];
						t[j][1]=a[i][0];
						t[j][2]=a[i][2];
						j++;
					}
				}
