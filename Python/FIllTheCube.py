import math
n=input(input())
L=[]
c=0
for i in range(n):
    L.append(list(map(str,input.split())))
for j in range(n):
    for k in range(n):
        if L[j][k]=='D':
            c=c+1

print(math.floor(math.sqrt(c)))