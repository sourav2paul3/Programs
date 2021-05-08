def fib(n):
    a=0
    b=1
    if n==0 or n<=0:
        print('Invalid input')
    else:
        if n==1:
            print(0)
        else:
            print(a,end=" ")
            print(b,end=" ")
            for i in range(2,n):
                c=a+b
                a,b=b,c
                print(c,end=" ")

n=int(input('Enter N:'))
print('Fibbonaci Series is')
fib(n)