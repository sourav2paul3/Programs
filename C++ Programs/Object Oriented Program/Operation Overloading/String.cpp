//PROGRAM FOR STRING

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int MAX=50;

class String
	{
		private:char *str,size;
		public: String(){str=NULL,size=0;}
				String(char *a)
				{
					size=MAX;
					str=new char[size];
					strcpy(str,a);
				}
				String(String &a)
					{
						size=a.size;
						str=new char[size];
						strcpy(str,a.str);
					}
				~String(){}
				void input()
					{
						str=new char[MAX];
						cout<<"\nEnter a string:";
						gets(str);
					}
				void output()
					{
						cout<<"\nString is:"<<str;
					}
				friend String operator+(String &,String &);
				friend int operator==(String &,String &);
				friend void operator<=(String &,String &);
			};

String operator+(String &a,String &b)
	{
		strcat(a.str,b.str);
		return a;
	}
	
void operator<=(String &a,String &b)
	{
		a.str=b.str;
	}

int operator==(String &a,String &b)
	{
		int x;
		x=strcmp(a.str,b.str);
		if(x<0 || x>0)
			return 0;
		return 1;
	}
	
int main()
	{
		int n;
		do{
			cout<<"\n1:To Concat two strings"
			    <<"\n2:To copy a string"
				<<"\n3:To compare two strings"
				<<"\n0:To exit"
				<<"\nEnter your choice:";
			cin>>n;
			switch(n)
				{
					case 1: {fflush(stdin);
							char str[MAX];
							cout<<"\nEnter 1st string:";
							gets(str);
							String str1(str);
							fflush(stdin);
							cout<<"\nEnetr another string:";
							gets(str);
							String str2(str),str3;
							str3=str1+str2;
							str3.output();
							break;
						}
							
					case 2: {fflush(stdin);
							char str[MAX];
							cout<<"\nEnter 1st string:";
							gets(str);
							String str1(str),str2;
							str2<=str1;
							str2.output();
							break;
						}
					case 3: {fflush(stdin);
							char str[MAX];
							cout<<"\nEnter 1st string:";
							gets(str);
							String str1(str);
							fflush(stdin);
							cout<<"\nEnetr another string:";
							gets(str);
							String str2(str);
							if(str1==str2)
								cout<<"\nStrings are equal";
							else
								cout<<"\nStrings arenot equal";	
							break;
						}
					case 0: cout<<"\nThe end";
							break;
					default:cout<<"\nInvalid choice";
				}
		}while(n);
	return 0;
}
