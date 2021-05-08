email=input("Enter email:")
for i in range(len(email)):
    if email[i]=='@':
        i=i+1
        while email[i]!='.':
            print(email[i],end="")
            i=i+1