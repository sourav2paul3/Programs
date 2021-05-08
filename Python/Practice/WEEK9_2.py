str=input()
temp=insr=0
for i in range(len(str)):
    if str[i].isdigit():
        if str[i-1].isdigit():
            insr=(10*insr)+int(str[i])
        else:
            insr=int(str[i])
        if insr>temp:
            temp=insr
print(temp)