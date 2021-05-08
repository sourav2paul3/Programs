n=int(input('Enter row or column value:'))
matrix=[]
for i in range(n):
    for j in range(1):
        x = [int(value) for value in input('Enter elements').split(" ")]
        matrix.append(x)
for i in range(n):
    for j in range(n):
        if j<=i:
            if j!=n-1:
                print(matrix[i][j],end=" ")
            else:
                print(matrix[i][j], end="")
        else:
            if j!=n-1:
                print('0',end=" ")
            else:
                print('0', end="")
    if(i!=n-1):
        print()