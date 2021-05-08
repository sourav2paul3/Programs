import string
str=input()
alphabet='abcdefghijklmnopqrstuvwxyz'
flag=True
for i in alphabet:
    for char in str:
        if char!=" ":
            char=char.lower()
            flag=True
            if char==i:
                flag=False
                break
    if flag==True:
        print('NO')
        exit(0)
print("YES")