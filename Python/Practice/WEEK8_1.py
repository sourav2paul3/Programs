list=[int(i) for i in input().split(" ")]
for i in range(len(list)):
    x=list[i]
    flag=False
    for j in range(i):
        if list[i]==list[j]:
            flag=True
            break
    if flag==False:
        if i!=len(list)-1:
            print(list[i],end=" ")
        else:
            print(list[i],end="")