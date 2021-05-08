str=input()
cnt=0
hole='ADOPQR'
b='B'
for i in range(len(str)):
    if str[i]==b:
        cnt=cnt+2
    if str[i] in hole:
        cnt +=1
print(cnt,end="")