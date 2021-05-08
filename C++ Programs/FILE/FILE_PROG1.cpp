//PROGRAM ON FILE

#include <fstream>
#include <iostream>
using namespace std;

int main()
	{
		fstream fin;
		fin.open("abc.txt",ios::out);
		char a[1000];
		do{
			cout<<"\nEnter country name:";
			cin>>a;
			fin<<a<<"\n";
			fflush(stdin);
			cout<<"\nWant to continue?";
		}while(toupper(getchar())!='N');
		fin.close();
		fin.open("abc.txt",ios::in);
		cout<<"\nContent of file:";
		while(fin)
			{
				fin.getline(a);
				cout<<"\n"<<a;
			}
		fin.close();	
		return 0;
	}
