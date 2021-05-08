str=input()
capital=0
small=0
for i in range(len(str)):
    if str[i].isupper():
        capital +=1
    if str[i].islower():
        small +=1
print(capital,small,end="")