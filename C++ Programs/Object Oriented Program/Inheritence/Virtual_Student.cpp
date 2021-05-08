//PROGRAM TO STORE STUDENT DATA USING VIRTUAL

#include <iostream>
using namespace std;

class Student
	{
		protected: int roll;
				 char name[20];
				 
		public:void setStudent()
					{
						cout<<"\nEnter roll number:";
						cin>>roll;
						cout<<"\nEnter name:";
						cin>>name;
					}
				void putStudent()
					{
						cout<<"\nRoll:"<<roll
							<<"\nName:"<<name;
					}
	};
	
class Test:virtual public Student
	{
		protected: int marks1,marks2;
		
		public: void setTest()
					{
						cout<<"\nEnter marks of 2 sub:";
						cin>>marks1>>marks2;
					}
				void putTest()
					{
						cout<<"\nSub 1:"<<marks1
							<<"\nSub 2:"<<marks2;
					}
	};
	
class Sports:virtual public Student
	{
		protected: int score;
		
		public:void setScore()
					{
						cout<<"\nEnter score:";
						cin>>score;
					}
				void putScore()
					{
						cout<<"\nScore is:"<<score;
					}
	};

class Result:public Test,public Sports
	{
		protected: int total;
		public:void input()
					{
					setStudent();
					setTest();
					setScore();
					total=marks1+marks2+score;
					}
				void output()
					{
						putStudent();
						putTest();
						putScore();
						cout<<"\nTotal marks is:"<<total;
					}
	};
	
int main()
	{
		Result std;
		std.input();
		std.output();
		return 0;
	}
