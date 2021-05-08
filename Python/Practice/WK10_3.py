d=[int(x) for x in input().split(',')]
c=50
h=30
result=[]
for i in range(len(d)):
    q=round(((2*c*d[i])/h)**(0.5))
    result.append(q)
for i in range(len(d)):
    if i==len(d)-1:
        print(result[i],end="")
    else:
        print(result[i],end=",")