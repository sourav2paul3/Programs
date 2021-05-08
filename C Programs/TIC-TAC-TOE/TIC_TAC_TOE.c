//PROGRAM FOR TIC-TAC-TOE GAME

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include "COLOUR.h"
#include "Delay.h"
#define clrscr system("cls");

void make_board(char [][3]);
void show_board(char [][3]);
void put_mark_human1(char [][3]);
void put_mark_human2(char [][3]);
void put_mark_computer(char [][3]);
int check_win(char [][3]);
void hhgame(char [][3]);
void chgame(char [][3]);


void main(void)
	{
	char board[3][3];
	int cho;
	clrscr;
	red();
	printf("\t\t\t\t\tDeveloped By Sourav Paul");
	green();
	printf("\n\t\t\t\t\t\tTIC-TAC-TOE");
	Beep(700,300);
	blue();
	printf("\n1:Single Player");
	printf("\n2:Dual Player");
	printf("\n0:Exit");
	reset();
	printf("\nEnter your choice:");
	scanf("%d",&cho);
	do{
		switch(cho)
			{
				case 1: clrscr;
						chgame(board);
						blue();
						printf("\n1:Single Player");
						printf("\n2:Dual Game");
						printf("\n0:Exit");
						reset();
						printf("\nEnter your choice:");
						fflush(stdin);
						scanf("%d",&cho);
						break;
						
				case 2:	clrscr;
						hhgame(board);
						blue();
						printf("\n1:Single Player");
						printf("\n2:Dual Game");
						printf("\n0:Exit");
						reset();
						printf("\nEnter your choice:");
						fflush(stdin);
						scanf("%d",&cho);
						break;
						
				case 0: break;
						
				default:red();
						printf("\nInavlid Choice");
						blue();
						Beep(200,300);
						printf("\n1:Play again");
						printf("\n2:Dual Game");
						printf("\n0:Exit");
						reset();
						printf("\nEnter your choice again:");
						fflush(stdin);
						scanf("%d",&cho);
			}
		}while(cho!=0);
		clrscr;
		red();
		printf("\n\n\n      \t\t\t\t\t\tGame Over");
		printf("\n\n\n\n\n\n");
		Beep(250,100);
		reset();
		delay(1);
	}

void make_board(char board[][3])
	{
		int i,j;
		char k=65;
		for(i=0;i<3;i++)
			for(j=0;j<3;j++)
				{
				board[i][j]=k;
				k++;
				}
	}
	
void show_board(char board[][3])
	{
		red();
		printf("\t\t\t\t\t\tDeveloped By Sourav Paul");
		green();
		printf("\n\t\t\t\t\t\t\tTIC-TAC-TOE");
		printf("\n\n\n");
		cyan();
		printf("\n\t\t\t\t\t  \t|\t  \t|\t  \t");
		printf("\n\t\t\t\t\t");
		if(board[0][0]=='X')
			yellow();
		if(board[0][0]=='O')
			magenta();
		printf("%c",board[0][0]);
		cyan();
		printf("\t|\t");
		if(board[0][1]=='X')
			yellow();
		if(board[0][1]=='O')
			magenta();
		printf("%c",board[0][1]);
		cyan();
		printf("\t|\t");
		if(board[0][2]=='X')
			yellow();
		if(board[0][2]=='O')
			magenta();
		printf("%c\t",board[0][2]);
		cyan();
		printf("\n\t\t\t\t\t  \t|\t  \t|\t  \t");
		printf("\n\t\t\t\t------------------------------------------------");
		printf("\n\t\t\t\t\t  \t|\t  \t|\t  \t");
		printf("\n\t\t\t\t\t");
		if(board[1][0]=='X')
			yellow();
		if(board[1][0]=='O')
			magenta();
		printf("%c",board[1][0]);
		cyan();
		printf("\t|\t");
		if(board[1][1]=='X')
			yellow();
		if(board[1][1]=='O')
			magenta();
		printf("%c",board[1][1]);
		cyan();
		printf("\t|\t");
		if(board[1][2]=='X')
			yellow();
		if(board[1][2]=='O')
			magenta();
		printf("%c\t",board[1][2]);
		cyan();
		printf("\n\t\t\t\t\t  \t|\t  \t|\t  \t");
		printf("\n\t\t\t\t------------------------------------------------");
		printf("\n\t\t\t\t\t  \t|\t  \t|\t  \t");
		printf("\n\t\t\t\t\t");
		if(board[2][0]=='X')
			yellow();
		if(board[2][0]=='O')
			magenta();
		printf("%c",board[2][0]);
		cyan();
		printf("\t|\t");
		if(board[2][1]=='X')
			yellow();
		if(board[2][1]=='O')
			magenta();
		printf("%c",board[2][1]);
		cyan();
		printf("\t|\t");
		if(board[2][2]=='X')
			yellow();
		if(board[2][2]=='O')
			magenta();
		printf("%c\t",board[2][2]);
		reset();
	}

void put_mark_human1(char board[][3])
	{
		char ch;
		int i,j,flag;
		fflush(stdin);
		yellow();
		printf("\nEnter player1 choice:");
		reset();
		ch=toupper(getchar());
		do{
			while(ch<'A' || ch>'I')
		  {
		  	red();
			printf("\nInvalid Choice");
			fflush(stdin);
			yellow();
			Beep(200,300);
			printf("\nEnter player1 Choice again:");
			reset();
			ch=toupper(getchar());
		  }
			flag=0;
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				if(board[i][j]==ch)
					{
					board[i][j]='X';
					flag=1;
					break;
					}
				}
			if(flag==1)
				break;
			}
			if(flag==0)
				{
					red();
					printf("\nChoice is taken");
					fflush(stdin);
					yellow();
					Beep(200,300);
					printf("\nEnter another choice:");
					reset();
					ch=toupper(getchar());
				}
		}while(flag!=1);
	}
	
void put_mark_human2(char board[][3])
	{
		char ch;
		int i,j,flag;
		fflush(stdin);
		magenta();
		printf("\nEnter player2 choice:");
		reset();
		ch=toupper(getchar());
		do{
			while(ch<'A' || ch>'I')
		  {
		  	red();
			printf("\nInvalid Choice");
			fflush(stdin);
			Beep(200,300);
			magenta();
			printf("\nEnter player2 Choice again:");
			reset();
			ch=toupper(getchar());
		  }
			flag=0;
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{
				if(board[i][j]==ch)
					{
					board[i][j]='O';
					flag=1;
					break;
					}
				}
			if(flag==1)
				break;
			}
			if(flag==0)
				{
					red();
					printf("\nChoice is taken");
					fflush(stdin);
					Beep(200,300);
					magenta();
					printf("\nEnter another choice:");
					reset();
					ch=toupper(getchar());
				}
		}while(flag!=1);
	}
	
int check_win(char board[][3])
	{
		if(board[0][0]==board[0][1] && board[0][1]==board[0][2])
			return(1);
		if(board[1][0]==board[1][1] && board[1][1]==board[1][2])
			return(1);
		if(board[2][0]==board[2][1] && board[2][1]==board[2][2])
			return(1);
		if(board[0][0]==board[1][0] && board[1][0]==board[2][0])
			return(1);
		if(board[0][1]==board[1][1] && board[1][1]==board[2][1])
			return(1);
		if(board[0][2]==board[1][2] && board[1][2]==board[2][2])
			return(1);
		if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
			return(1);
		if(board[2][0]==board[1][1] && board[1][1]==board[0][2])
			return(1);
		else
			return(-1);
	}
	
void hhgame(char board[][3])
	{
	int player,x,p=1;
	make_board(board);
	show_board(board);
	Beep(200,200);
	do{	
		player=0;
		if(p<=9)
		  {
		   put_mark_human1(board);
		   clrscr;
		   show_board(board);
		   player++;
		   p++;
		   x=check_win(board);
		   if(x==1)
		     {
		      green();
		      printf("\nPlayer%d win",player);
		      reset();
		      Beep(500,200);
		      break;
		     }
		 }
		if(p<=9)
		  {
		   put_mark_human2(board);
		   clrscr;
		   show_board(board);
		   player++;
		   p++;
		   x=check_win(board);
		  if(x==1)
		   {
		   	green();
		    printf("\nPlayer%d win",player);
		    reset();
		    Beep(500,200);
		    break;
		   }
		 }
		}while(p<=9);
	if(x!=1)
	{
		printf("\nMatch Draw");
		Beep(300,300);	
	}
	}

void put_mark_computer(char board [][3])
	{
		char temp;
		int flag,i,j,n;
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{	
						flag=0;
						if(board[i][j]!='X' && board[i][j]!='O')
							{
							temp=board[i][j];
							board[i][j]='O';
							n=check_win(board);
							if(n==1)
								{	
								board[i][j]='O';
								flag=1;
								break;
								}
							else
								board[i][j]=temp;
							}
					}
					if(n==1)
						break;
			}
		if(flag!=1)
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{	
						flag=0;
						if(board[i][j]!='X' && board[i][j]!='O')
							{
							temp=board[i][j];
							board[i][j]='X';
							n=check_win(board);
							if(n==1)
								{	
								board[i][j]='O';
								flag=1;
								break;
								}
							else
								board[i][j]=temp;
							}
					}
					if(n==1)
						break;
			}
		}
		if(flag!=1)				
		do{
			flag=0;
			srand(time(0));
			n=(rand()%(65-75+1))+65;
			for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
				{if(board[i][j]==n)
					{
					board[i][j]='O';
					flag=1;
					break;
					}
				}
				if(flag==1)
					break;
				}
			}while(flag!=1);
		}
		
void chgame(char board[][3])
	{
	int x,p=1;
	make_board(board);
	show_board(board);
	Beep(200,200);
	do{
		if(p<=9)
		  {
		   put_mark_human1(board);
		   clrscr;
		   show_board(board);
		   p++;
		   x=check_win(board);
		   if(x==1)
		     {
		      green();
		      printf("\nPlayer1 win");
		      reset();
		      Beep(500,200);
		      break;
		     }
		 }
		if(p<=9)
		  {
		   put_mark_computer(board);
		   clrscr;
		   show_board(board);
		   p++;
		   x=check_win(board);
		  if(x==1)
		   {
		   	green();
		    printf("\nComputer win");
		    reset();
		    Beep(500,200);
		    break;
		   }
		 }
		}while(p<=9);
		if(x!=1)
		{
		printf("\nMatch Draw");
		Beep(300,300);
		}
	}
	
