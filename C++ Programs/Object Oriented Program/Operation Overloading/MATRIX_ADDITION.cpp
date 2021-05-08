//PROGRAM FOR ADDITION OF TWO MATRICES USING OPERATION OVERLOADIN

#include <iostream>
using namespace std;
class Matrix
	{
		private:int n,m,**mat;
		public: Matrix(){n=m=0,mat=NULL;}
				Matrix(int,int);
				Matrix(Matrix &);
				~Matrix(){delete mat;}
				void input();
				void output();
				Matrix operator+(Matrix &);
	};
	
Matrix::Matrix(int a,int b)
	{
		n=a;m=b;
		mat=new int*[n];
			for(int i=0;i<n;i++)
				mat[i]=new int[m];	
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				mat[i][j]=0;
	}
	
Matrix::Matrix(Matrix &a)
	{
		n=a.n,m=a.m;
		mat=new int*[n];
			for(int i=0;i<n;i++)
				mat[i]=new int[m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				mat[i][j]=a.mat[i][j];
	}
	
void Matrix::input()
	{
		cout<<"\nEnter "<<n*m<<" elements row wise:";
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>mat[i][j];
	}
void Matrix::output()
	{
		for(int i=0;i<n;i++)
			{
				cout<<"\n";
			for(int j=0;j<m;j++)
				cout<<" "<<mat[i][j];
			}
	}
	
Matrix Matrix::operator+(Matrix &a)
	{
		if(n!=a.n && m!=a.m)
			{
				cout<<"\nAddition not possible";
				Matrix matrix;
				return matrix;
			}
		Matrix matrix(a.n,a.m);
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				matrix.mat[i][j]=mat[i][j]+a.mat[i][j];
		return matrix;
	}
	
int main()
	{
		int n,m;
		cout<<"\nEnter the row and column number of each matrix:";
		cin>>n>>m;
		Matrix m1(n,m),m2(n,m);
		cout<<"\nInput for 1st matrix:";
		m1.input();
		cout<<"\nInput for 2nd matrix:";
		m2.input();
		Matrix m3;
		m3=m1+m2;
		cout<<"\nResultand Matrix";
		m3.output();
		return 0;
	}
