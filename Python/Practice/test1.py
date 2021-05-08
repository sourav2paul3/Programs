n,u,d=map(int,input().split(" "))

balls=list(map(int,input().split()))
sc=0
inde=0
for i in range(n-1):
    if balls[i]==balls[i+1]:
        inde =i+1
    elif balls[i]<balls[i+1]:
        temp=balls[i+1]- balls[i]
        if temp<=u:
            inde =i+1
        else:
            break
    else:
        temp=balls[i]- balls[i+1]
        if temp<=d:
            inde =i+1
        else:
            if sc==0:
                idx=i+1
                sc =sc+1
            else:
                break
print(inde+1,end="")