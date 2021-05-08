#include <stdio.h>
#include <string.h>
void main(void)
	{
		char str1[100],str2[100],str3[100],i,j,k,l,flag;
		char viowel[]={'a','e','i','o','u'};
		fflush(stdin);
		gets(str1);
		fflush(stdin);
		gets(str2);
		fflush(stdin);
		gets(str3);
		i=j=0;
		while(str1[i]!='\0' || str2[j]!='\0')
			{
				if(str1[i]!='\0')
				{
				for(k=0;k<5;k++)
					if(tolower(str1[i])==viowel[k])
						{
							str1[i]='"';
							break;
						}
						i++;
				}
				if(str2[j]!='\0')
					{flag=0;
					for(l=0;l<5;l++)
						{
						if(tolower(str2[j])==viowel[l])
							{
								flag=1;
								break;
							}
						}
					if(flag==0)
						str2[j]='*';
					j++;
					}
			}
		str3[0]=toupper(str3[0]);
		str3[strlen(str3)-1]=toupper(str3[strlen(str3)-1]);
		strcat(str1,str2);
		strcat(str1,str3);
		printf("%s",str1);
	}
