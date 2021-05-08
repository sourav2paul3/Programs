n,u,d=input().split(" ")
n=int(n)
u=int(u)
d=int(d)
balls=[int(x) for x in input().split(" ")]
inde=1
for i in range(1,len(balls)):
    if balls[i]==balls[i-1]:
        inde +=1
    if balls[i]>balls[i-1]:
        temp=balls[i-1]- balls[i]
        if temp<=u:
            inde +=1
        else:
            break
    if balls[i]<balls[i-1]:
        temp=balls[i]- balls[i-1]
        if temp>=d:
            inde +=1
        else:
            break
print(inde+1)