from array import *

matrix=[]
n,m=input('Enter the value of row and column:').split(" ")
n=int(n)
m=int(m)
for i in range(0,n):
    l=[]
    for j in range(0,m):
        l.append(int(input('Enter value:')))
    matrix.append(l)

for i in range(0,n):
    for j in range(0,m):
        print(matrix[i][j],end=' ')
    print()