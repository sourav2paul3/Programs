//PROGRAM ON FILE

#include <fstream>
#include <iostream>
using namespace std;

int main()
	{
		ofstream fout("abc.txt");
		fout<<"\nABC";
		fout<<"\n20";
		fout.close();
		ifstream fin("abc.txt");
		char a[100];
		int x;
		fin>>a;
		fin>>x;
		cout<<"\nOUTPUT\n;
		cout<<a<<" "<<x;
		return 0;
	}
