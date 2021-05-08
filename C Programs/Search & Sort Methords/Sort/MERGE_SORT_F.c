//FUNCTION FOR MARGE SORT

#define MAX 100
void merge_sort(int a[],int start,int finish)
	/*a is an arry containing (finish-start+1) element*/
	{
		int size,middle;
		size=finish-start+1;
		if(size<=1)
			return;
		middle=start+size/2-1;
		merge_sort(a,start,middle);
		merge_sort(a,middle+1,finish);
		simple_sort(a,start,middle+1,finish);
	}
	
void simple_merge(int a[],int first,int second,int third)
	{
		int temp[MAX],i,j,k;
		i=first;
		j=second;
		k=0;
		while(i<second && j<=third)
			{
				if(a[i]<a[j])
					temp[k++]=a[i++];
				else
					temp[k++]=a[j++];
			}
		while(i<second)
			temp[k++]=a[i++];
		while(j<=third)
			temp[k++]=a[j++];
		for(i=0;i<k;i++)
			a[first++]=temp[i];
	}
