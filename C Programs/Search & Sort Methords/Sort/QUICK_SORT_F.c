// FUNCTION FOR QUICK SORT

#define MAX 100
void quick_sort(int a[],int n)
	{
		/*'a' is an array containig 'n' elemnets we want to sort that array using quick sort*/
		int lower[MAX],upper[MAX],top;
		int beg,end,loc;
		if(n<2)
			return;
		top=0;
		lower[top]=upper[top]=0;
		while(top!=-1)
			{
				beg=lower[top];
				end=uppwe[top];
				top--;
				loc=quick(a,beg,end);
				if(beg<loc-1)
					{
						top++;
						lower[top]=beg;
						upper[top]=loc-1;
					}
				if(loc+1<end)
					{
						top++;
						lower[top]=loc+1;
						upper[top]=end;
					}
			}
	}
	
int quick(int a[],int left,int right)
	{
		int loc,temp;
		loc=left;
		while(1)
			{
				while(a[loc]<=a[right] && loc!=right)
					right--;
					if(loc==right)
						return(loc);
					if(a[loc]>a[right])
						{
							temp=a[loc];
							a[loc]=a[right];
							a[right]=temp;
						}
					loc=right;
					while(a[left]<=a[loc] && left!=loc)
						left++;
						if(left==loc)
							return(loc);
						if(a[left]>a[loc])
							{
								temp=a[left];
								a[left]=a[loc];
								a[loc]=temp;
							}
						loc=left;
				}/* END OF while(1) */
		}
