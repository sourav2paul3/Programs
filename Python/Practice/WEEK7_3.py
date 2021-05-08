n,m=input('Enter row or column value:').split(" ")
n=int(n)
m=int(m)
matrix=[]
for i in range(n):
    for j in range(1):
        x = [int(value) for value in input('Enter elements').split(" ")]
        matrix.append(x)
for k in range(n):
    for l in range(m):
        z=matrix[k][l]
        if z!=0 and z!=1:
            print('NO',end="")
            exit(1)
print('YES',end="")