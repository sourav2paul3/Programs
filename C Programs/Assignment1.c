#include <Stdio.h>
void main(void)
	{
		int arr[100],n,m,i,j,k,l,ans[100],large,small,dup;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		k=0;
		for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
					{
						if(arr[i]==arr[j])
							{ans[k++]=arr[i];
							for(l=j;l<n;l++)
								arr[l]=arr[l+1];
							n--;
							}
						else
							small=arr[i];
					}
			}
		m=k;
		large=ans[0];
		for(i=0;i<m;i++)
			{printf("%d ",ans[i]);
			if(ans[i]>large)
				large=ans[i];
			}
		printf("\n");
		for(i=0;i<n;i++)
			{dup=0;
			for(j=0;j<m;j++)
				{if(arr[i]==ans[j])
					{dup=1;
					break;
				}
				}
				if(dup==0)
					{printf("%d ",arr[i]);
					if(small>arr[i])
						small=arr[i];
					}				
				}
		printf("\n%d",large+small);
	}
