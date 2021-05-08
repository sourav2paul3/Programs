#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
void main(void)
	{
		int i,j,atpos,len;
		char mail[MAX],strfr[MAX],strat[MAX];
		char gmail[]="@gmail.com";
		fflush(stdin);
		gets(mail);
		len=strlen(mail);
		for(i=0;i<len;i++)
			if(mail[i]=='@')
				{atpos=i;
				 break;
				}
		i=0;
		while(i<atpos)
			{strfr[i]=mail[i];
			i++;
			}
		strfr[i]='\0';
		i=atpos;
		j=0;
		while(i<len)
			{strat[j]=mail[i];
			i++;
			j++;
			}
		strat[j]='\0';
		if(strcmp(gmail,strat)==0)
			{
			printf("\n\"Error gmail ID\"");
			printf("\n\"%s\"",strcat(strfr,"@outlook.com"));
			}
		else{
			printf("\"%s\"",mail);
			}
	}
