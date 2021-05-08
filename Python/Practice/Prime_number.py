#PROGRAM TO FIND PRIME NUMBER

x=int(input("Enter an int:"))
if x<=1:
    print(x,'Is Not Prime Less Than 2')
    exit(1)
else:
    for i in range(2,int(x)):
        if(x%i==0):
            print(x,"Is Not Prime Number")
            exit(1)
print(x,"Is Prime Number")