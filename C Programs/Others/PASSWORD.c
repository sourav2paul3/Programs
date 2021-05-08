#include <stdio.h>
#include <conio.h>

void main(void)
	{
		char password[4];
		int i;
		printf("\nEnter the 4 digit password:");
		for(i=0;i<4;i++)
			{
				password[i]=getch();
				putchar('*');
			}
		}
