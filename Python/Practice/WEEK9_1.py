def spiral(matrix,x):
    m=n=x
    k=l=0
    cnt=0
    total=m*n
    while(k<m and l<n):
        if cnt==total:
            break
        for i in range(k,m):
            print(matrix[i][l],end=" ")
            cnt +=1
        l +=1
        if cnt==total:
            break
        for i in range(l,n):
            print(matrix[m-1][i],end=" ")
            cnt +=1
        m -=1
        if cnt==total:
            break
        if k<m:
            for i in range(m-1,k-1,-1):
                print(matrix[i][n-1],end=" ")
                cnt +=1
            n -=1
        if cnt==total:
            break
        if l<n:
            for i in range(n-1,l-1,-1):
                print(matrix[k][i],end=" ")
                cnt +=1
            k +=1


matrix=[]
n=int(input())
for i in range(n):
    for j in range(1):
        x=[int(k) for k in input().split(" ")]
        matrix.append(x)
spiral(matrix,n)