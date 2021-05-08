a=[]
a=[int(i) for i in input().split(" ")]
x=[]
for i in a:
    x.append(i)
x.sort()
c=0
for i in range(len(x)):
    if x[i]==a[i]:
        c=c+1
print(len(x)-c)
print(x)