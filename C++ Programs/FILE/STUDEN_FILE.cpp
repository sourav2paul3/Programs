//PROGRAM ON STUDENT FILE

#include <iostream>
#include <fstream>
using namespace std;

class Student
	{
		private: int id;
				 char name[20];
				 int marks;
		public: void input()
					{
						cout<<"\nEnter ID:";
						cin>>id;
						cout<<"\nEnter name:";
						fflush(stdin);
						gets(name);
						cout<<"\nEnter marks:";
						cin>>marks;
					}
				void output()
					{
						cout<<"\n"
							<<id<<" "
							<<name<<" "
							<<marks;
					}
			};

int main()
	{
		char fname[20];
		Student obj;
		fstream buf;
		cout<<"\nEnter the file name:";
		cin>>fname;
		buf.open(fname,ios::out|ios::binary);
		do{
			cout<<"\nEnter a student record:";
			obj.input();
			buf.write((char *)&obj,sizeof(obj));
			fflush(stdin);
			cout<<"\nWant to continue?(Y/N)";
		}while(toupper(getchar())!='N');
		buf.close();
		buf.open(fname,ios::in|ios::binary);
		cout<<"\nContent of file:";
		cout<<"\nID 	NAME 	MARKS";
		while(buf.read((char *)&obj,sizeof(obj)))
			obj.output();
			buf.close();
			return 0;
		}
