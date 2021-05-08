//PROGRAM TO CALCULATE ADDITION OF TWO MATRICES

#include <iostream>
using namespace std;
const int MAX=100;
class Matrix
	{
		private:int n,m,mtx[MAX][MAX];
		
		public:Matrix(){n=m=0;}
				Matrix(int,int);
				Matrix(Matrix &);
				~Matrix(){}
				void input();
				void output();
				friend Matrix add(Matrix &,Matrix &);
	};
	
Matrix::Matrix(int a,int b)
	{
		n=a;
		m=b;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				mtx[i][j]=0;
	}
	
Matrix::Matrix(Matrix &a)
	{
			n=a.n;
			m=a.m;
			for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				mtx[i][j]=a.mtx[i][j];
	}
	
void Matrix::input()
	{
		cout<<"\nEnter the matrix elements row wise:";
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>mtx[i][j];
	}
	
void Matrix::output()
	{
		for(int i=0;i<n;i++)
			{
				cout<<"\n";
				for(int j=0;j<m;j++)
					cout<<" "<<mtx[i][j];
			}
	}
	
Matrix add(Matrix &a,Matrix &b)
	{
		Matrix matrix;
		if(a.n!=b.n&&a.n!=b.m)
			{
				cout<<"\nAddition not possible";
				return matrix;
			}
		matrix.n=a.n;
		matrix.m=a.m;
		for(int i=0;i<a.n;i++)
			for(int j=0;j<a.m;j++)
				matrix.mtx[i][j]=a.mtx[i][j]+b.mtx[i][j];
			return matrix;
	}
	
int main()
	{
		int m,n;
		cout<<"\nEnter the row and column of each matrix:";
		cin>>n>>m;
		Matrix matrix1(n,m),matrix2(n,m);
		cout<<"\nInput for 1st matrix";
		matrix1.input();
		cout<<"\nInput for 2nd matrix";
		matrix2.input();
		Matrix matrix;
		matrix=add(matrix1,matrix2);
		cout<<"\nResult is:";
		matrix.output();
		return 0;
	}
