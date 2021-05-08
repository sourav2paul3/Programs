//PROGRAM FOR STUDENT DETAILS USING INHERITENCE

#include <iostream>
#include <cstring>
#include<cstdio>
using namespace std;
class Student
	{
		private: int id;
				 char name[20];
				 char std[20];
		public:void setStudent(int id,char *name,char *std)
					{
						this->id=id;
						strcpy(this->name,name);
						strcpy(this->std,std);
					}
				void putStudent()
					{
						cout<<"\nID:"<<id
							<<"\nName:"<<name
							<<"\nStd:"<<std;
					}
	};
	
class Test:public Student
	{
		protected:int sub1,sub2;
		public:void setTest(int s1,int s2)
					{
						sub1=s1;
						sub2=s2;
					}
				void putTest()
					{
						cout<<"\nSub1:"<<sub1
							<<"\nSub2:"<<sub2;
					}
			};
			
class Result:public Test
	{
		protected:int total;
		public:void display_Result()
					{
						total=sub1+sub2;
						putStudent();
						putTest();
						cout<<"\nTotal="<<total;
					}
	};
	
int main()
	{
		Result student;
		int sub1,sub2,id;
		char name[20],std[20];
		cout<<"\nEnter the id of the student:";
		cin>>id;
		fflush(stdin);
		cout<<"\nEnter the name of student:";
		gets(name);
		cout<<"\nEnter the std os the student:";
		gets(std);
		student.setStudent(id,name,std);
		cout<<"\nEnter the subject scores:";
		cin>>sub1>>sub2;
		student.setTest(sub1,sub2);
		student.display_Result();
		return 0;
	}
