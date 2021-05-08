//FUNCTION FOR HEAP SORT

void heap_sort(int a[],int n)
	{
		int j;
		for(j=1;j<n;j++)
			ins_heap(a,j,a[j+1]);
		for(j=n;j>1;j--)
			del_heap(a,j);
	}
/*'a' is an array contaaining 'n' elements & array index ranges from 1 to n */

void ins_heap(int tree[],int n,int item)
	{
		int ptr,par;
		n++;
		ptr=n;
		while(ptr>1)
			{
				par=ptr/2;
				if(item<=tree[par])
					{
						tree[ptr]=item;
						return;
					}
				tree[ptr]=tree[par];
				ptr=par;
			}
			tree[1]=item;
	}
	
void del_heap(int tree[],int m)
	{
		int temp,ptr,last,left,right;
		last=tree[m];
		m--;
		ptr=1;
		left=2;
		right=3;
		while(right<=m)
			{
				if(last>=tree[left] && last>=tree[right])
					{
						tree[ptr]=tree[left];
						ptr[left];
					}
				else
					{
						tree[ptr]=tree[right];
						ptr=right;
					}
				left=2*ptr;
				right=left+1;
			}
		if(left==m && last <=tree[left])
			{
				tree[ptr]=tree[left];
				ptr=left;
			}
		tree[ptr]=last;
	}
