n=int(input('Enter row or column value:'))
matrix=[]
for i in range(n):
    for j in range(1):
        x = [int(value) for value in input('Enter elements').split(" ")]
        matrix.append(x)

for i in range(n):
    for j in range(n):
        if matrix[i][j]!=matrix[j][i]:
            print('NO',end=" ")
            exit(1)
print('YES')