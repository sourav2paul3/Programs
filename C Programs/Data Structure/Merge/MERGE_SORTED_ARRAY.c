//PROGRAM TO MERGE TWO SORTED ARRAYS

#include <stdio.h>
#define MAX 100

void merge(int [],int [],int [],int,int);
void display(int [],int);
void input(int [],int);
void main(void)
	{
		int n,m,a1[MAX],a2[MAX],result[MAX];
		printf("\nEnter the element number of array 1:");
		scanf("%d",&n);
		input(a1,n);
		printf("\nEnter the element number of array 2:");
		scanf("%d",&m);
		input(a2,m);
		merge(result,a1,a2,n,m);
		display(result,m+n);
	}
	
void display(int a[],int k)
	{
		int i;
		printf("\nArray is:");
		for(i=0;i<k;i++)
			printf(" %d",a[i]);
	}
	
void input(int a[],int n)
	{
		int i;
		printf("\nEnter the elements in sorted order:");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	}
	
void merge(int a[],int a1[],int a2[],int n,int m)
	{
		int i,j,k;
		i=j=k=0;
		while(i<n && j<m)
			{
				if(a1[i]<=a2[j])
					a[k++]=a1[i++];
				else
					a[k++]=a2[j++];
			}
		  while(j<m)
			a[k++]=a2[j++];
		  while(i<n)
			a[k++]=a1[i++];
	}
