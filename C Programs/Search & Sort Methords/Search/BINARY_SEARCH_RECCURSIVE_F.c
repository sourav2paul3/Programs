//FUNCTION FOR BINARY SEARCH RECCUSRIVE

int binary_search(int a[],int left,int right,int x)
	{
		/*a is an array containing (right-left+1) elements in sorted oreder*/
		int middle;
		if(left>right)
			return(-1);
		middle(left+right)/2;
		if(a[middle]==x)
			return(middle);
		if(a[middle]>x)
			return(binary_search(a,left,middle-1,x));
		else
			return(binary_search(a,middle+1,right,x);
	}
