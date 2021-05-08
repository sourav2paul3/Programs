#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <dos.h>
#include <string.h>
#include <dir.h>
#define DIRNAME "BILL"
#define SIZE 90
struct bill
{
	char name[100];
   float qn,rs,tp;
};
/*====================*/
int top = -1;
int stack[SIZE];
int nested_flag = 1;
void push(int item)
{

	if(top==SIZE-1)
	{
		printf("Number too big.Stack overflow.");
		printf("Press any key to exit......");
      getch();
      exit(0);

	}

	else
		stack[++top] = item;

}

void print(int num)
{

	switch(num)
	{

		case 1:
			printf("One ");
			break;

		case 2:
			printf("Two ");
			break;

		case 3:
			printf("Three ");
			break;

		case 4:
			printf("Four ");
			break;

		case 5:
			printf("Five ");
			break;

		case 6:
			printf("Six ");
			break;

		case 7:
			printf("Seven ");
			break;

		case 8:
			printf("Eight ");
			break;

		case 9: printf("Nine ");
			break;

	}

}

void print_pair(int num)
{

	switch(num)
	{

		case 1:
			switch(stack[top])
			{

				case 1:
					printf("Eleven ");
					break;

				case 2:
					printf("Twelve ");
					break;

				case 3:
					printf("Thirteen ");
					break;

				case 4:
					printf("Fourteen ");
					break;

				case 5:
					printf("Fifteen ");
					break;

				case 6:
					printf("Sixteen ");
					break;

				case 7:
					printf("Seventeen ");
					break;

				case 8:
					printf("Eighteen ");
					break;

				case 9: printf("Nineteen ");
					break;

				case 0:
					printf("Ten ");
					nested_flag = 0;
			}
			break;

		case 2:
			printf("Twenty ");
			break;

		case 3:
			printf("Thirty ");
			break;

		case 4:
			printf("Forty ");
			break;

		case 5:
			printf("Fifty ");
			break;

		case 6:
			printf("Sixty ");
			break;

		case 7:
			printf("Seventy ");
			break;

		case 8:
			printf("Eighty ");
			break;

		case 9: printf("Ninety ");
			break;

	}

}

void translate(int length)
{

	if(length==9)
	{
		print_pair(stack[top--]);

		if(stack[top+1]!=1 && nested_flag)
			print(stack[top--]);
		else
			top--;

		printf("Crores ");

	}

	if(length>=7)
	{

		if(length==8)
		{

			print(stack[top--]);
			printf("Crores ");

		}

		print_pair(stack[top--]);

		if(stack[top+1]!=1 && nested_flag)
			print(stack[top--]);

		else
			top--;

		if(stack[6]!=0||stack[5]!=0)
			printf("Lakhs ");

		if(nested_flag==0)
		      nested_flag = 1;

	}

	if(length>=5)
	{

		if(length==6)
		{

			print(stack[top--]);
			printf("Lakhs ");

		}

		print_pair(stack[top--]);

		if(stack[top+1]!=1 && nested_flag)
			print(stack[top--]);
		else
			top--;

		if(stack[4]!=0||stack[3]!=0)
			printf("Thousand ");

		if(nested_flag==0)
			nested_flag = 1;

	}

	if(length>=3)
	{

		if(length==4)
		{

			print(stack[top--]);
			printf("Thousand ");

		}

		print(stack[top--]);

		if(stack[2]!=0)
			printf("Hundered ");

		if(stack[1]==0&&stack[0]!=0)
		{

			printf("And ");
			print(stack[0]);

		}

		else if(stack[1]!=0)
		{
			printf("And ");
			print_pair(stack[top--]);

			if(stack[top+1]!=1 && nested_flag)
				print(stack[top--]);

		}

	}

	if(length==2)
	{

		print_pair(stack[top--]);

		if(stack[top+1]!=1 && nested_flag)
			print(stack[top--]);

		if(nested_flag==0)
			nested_flag = 1;

	}

	if(length==1)
		print(stack[top--]);

}
/*===================================*/
void main()
{
   char other='y';
   char s[MAXPATH];
   char drive[MAXDRIVE];
   char dir[MAXDIR];
   char file[MAXFILE];
   char ext[MAXEXT];
   int stat;
   time_t t;
   t=time(NULL);
   stat = mkdir(DIRNAME);
   _setcursortype(_NOCURSOR);
   textcolor(11);
   gotoxy(23,4);
	cprintf("D |%c%c%c%c%c%c%c%c%c  |%c%c%c%c%c  |%c        |%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(23,5);
   cprintf("  |%c       |%c   |%c    |%c        |%c",219,219,219,219,219);
   gotoxy(23,6);
   cprintf("A |%c       |%c   |%c    |%c        |%c",219,219,219,219,219);
   gotoxy(23,7);
   cprintf("  |%c       |%c   |%c    |%c        |%c",219,219,219,219,219);
   gotoxy(23,8);
   cprintf("I |%c%c%c%c%c%c%c%c%c    |%c    |%c        |%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   gotoxy(23,9);
   cprintf("  |%c       |%c   |%c    |%c        |%c",219,219,219,219,219);
   gotoxy(23,10);
   cprintf("L |%c       |%c   |%c    |%c        |%c",219,219,219,219,219);
   gotoxy(23,11);
   cprintf("  |%c       |%c   |%c    |%c        |%c",219,219,219,219,219);
   gotoxy(23,12);
   cprintf("Y |%c%c%c%c%c%c%c%c%c  |%c%c%c%c%c  |%c%c%c%c%c%c%c  |%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   textcolor(10);
   gotoxy(29,14);
   cprintf("%c %c %c A BILLING SOFTWARE %c %c %c",15,15,15,15,15,15);
   gotoxy(30,16);
   cprintf("[ DEVOLOPED BY SAIKAT PAUL ]");
   gotoxy(29,18);
   cprintf("PRESS ANY KEY TO CONTINUE %c %c %c  ",16,16,16);
   getch();
   clrscr();
   _setcursortype(_SOLIDCURSOR);
   while(other=='y'||other=='Y')
   {
   FILE *fp;
   struct bill bll[90];
   clock_t start,end;
   int i=1,j=8,k=17,l=28,m=38,n=55,o=72,b=79,a=1,xyz;
   float gt=0.0;
   char ch='y',d[25],p[25];
   textcolor(14);
   gotoxy(15,1);
   cprintf("%c %c %c BILL devoloped by SAIKAT PAUL %c %c %c",3,3,3,3,3,3);
   gotoxy(15,2);
   cprintf("      ______________________________");
   gotoxy(3,4);
   textcolor(12);
   cprintf("CURRENT DATE: %s",ctime(&t));
   textcolor(9);
   gotoxy(55,3);
   cprintf("      %c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,187);
   gotoxy(55,4);
   cprintf("DATE: %cDD.MM.YYYY",186);
   gotoxy(72,4);
   cprintf("%c",186);
   gotoxy(55,5);
   cprintf("      %c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,188);
   gotoxy(62,4);
   fflush(stdin);
   gets(d);
   strcpy(p,d);
   getcwd(s,MAXPATH);
   strcat(s,"\\BILL\\");
   fnsplit(s,drive,dir,file,ext);
   strcpy(file,d);
   strcpy(ext,".txt");
   fnmerge(s,drive,dir,file,ext);
   fp=fopen(s,"w");
   fprintf(fp,"\t\tBILL devoloped by SAIKAT PAUL\n");
   fprintf(fp,"\t\t_____________________________\n");
   fprintf(fp,"                                __________\n");
   fprintf(fp,"                               |DD.MM.YYYY|\n");
   fprintf(fp,"                         DATE: |");
   fprintf(fp,"%s|\n",p);
   fprintf(fp,"                                ---------- ");
   textcolor(0);
   textbackground(10);
   gotoxy(i,j-1);
   cprintf("      NAME        QTY/UNIT    PRICE        AMOUNT        GRAND TOTAL     Y/N   ");
   textcolor(11);
   textbackground(0);
   gotoxy(i,j);
   cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,187);
   start=clock();
   while(ch=='y'||ch=='Y')
   {
   	gotoxy(i,j+1);
      cprintf("%c%d.",186,a);
      gotoxy(k,j+1);
      cprintf("%c",186);
      gotoxy(l,j+1);
      cprintf("%c",186);
      gotoxy(m,j+1);
      cprintf("%c",186);
      gotoxy(n,j+1);
      cprintf("%c",186);
      gotoxy(o,j+1);
      cprintf("%c",186);
      gotoxy(b,j+1);
      cprintf("%c",186);
      gotoxy(i,j+2);
      cprintf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,185);
      gotoxy(i+3,j+1);
      fflush(stdin);
      gets(bll[a].name);
      gotoxy(k+2,j+1);
      scanf("%f",&bll[a].qn);
      gotoxy(l+2,j+1);
      scanf("%f",&bll[a].rs);
      bll[a].tp=bll[a].qn*bll[a].rs;
      gt=gt+bll[a].tp;
      gotoxy(m+2,j+1);
      printf("%.2f",bll[a].tp);
      gotoxy(n+2,j+1);
      printf("%.2f",gt);
      gotoxy(o+3,j+1);
      printf("");
      gotoxy(o+3,j+1);
      fflush(stdin);
      ch=getchar();
      j=j+2;
      a++;
   }
   printf("\n\n");
   fprintf(fp,"\n___________________________________________________________________");
   fprintf(fp,"\n|SL.NO.|      NAME      |  QTY/UNIT  |   AMOUNT   |  TOTAL PRICE  |");
   fprintf(fp,"\n|______|________________|____________|____________|_______________|");
   for(i=1;i<a;i++)
   {
		fprintf(fp,"\n| [%d]  |%16s|%12.0f|%12.2f|%15.2f|",i,bll[i].name,bll[i].qn,bll[i].rs,bll[i].tp);

   }
   fprintf(fp,"\n|______|________________|____________|____________|_______________|");
   fprintf(fp,"\n                     ||||||||||||||||||||||||||||");
   fprintf(fp,"\n                     GRAND TOTAL: Rs %.2f /-",gt);
   fprintf(fp,"\n                     ||||||||||||||||||||||||||||");
   fprintf(fp,"\n___________________________________________________________________");
textcolor(WHITE);
gotoxy(i,j);
printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
printf("\n\aGRAND TOTAL: Rs %.2f /-",gt);
printf("\n( ");
xyz = (int)gt;
while(xyz>0)
	{
		push(xyz%10);
		xyz = xyz/10;

	}
translate(top+1);
printf(" )");
fclose(fp);
end=clock();
printf("\nTOTAL TIME: %f SEC\n",(end-start)/CLK_TCK);
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
printf("\n\t\t    OTHER BILL (Y/N) ?  ");
fflush(stdin);
other=getchar();
clrscr();
};
clrscr();
_setcursortype(_NOCURSOR);
textcolor(10);
gotoxy(30,10);
cprintf("copyrite: SAIKAT PAUL");
gotoxy(25,12);
cprintf("        saikat2paul@yahoo.co.in");
gotoxy(25,13);
cprintf("E-mail:");
gotoxy(25,14);
cprintf("        saikat2paul@gmail.com");
gotoxy(26,16);
cprintf("PRESS ANY KEY TO EXIT %c %c %c   ",16,16,16);
getch();
}
