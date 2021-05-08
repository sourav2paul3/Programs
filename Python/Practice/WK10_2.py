step=int(input())
count=step%6
if count==0 or count==1 or count==3:
    print("YES",end="")
else:
    print("NO",end="")