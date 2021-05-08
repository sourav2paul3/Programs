//FUNCTION OF BINARY SEARCH METHOD

int binary_search(int a[],int n,int x)
	{
		int left,right,middle;
		left=0;
		right=n-1;
		while(left<=right)
			{
				middle=(left+right)/2;
				if(a[middle]==x)
					return(middle);
				if(a[middle]>x)
					right=middle-1;
				else
					left=middle+1;
				}
			return(-1);
		}
