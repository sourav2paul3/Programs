#include <stdio.h>
#include <string.h>
void main(void)
	{
		int i,flag=0,result;
		char number[1000];
		gets(number);
		for(i=0;i<strlen(number);i++)
			if(number[i]=='0')
				{
				flag=1;
				break;
				}
		if(flag==0)
			{
			result=1;
			for(i=0;i<strlen(number);i++)
				result=result*(number[i]-'0');
			}
		else
			{
				result=0;
				for(i=0;i<strlen(number);i++)
					result=result+(number[i]-'0');
				}
		printf("%d",result);
	}
