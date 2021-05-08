#PROGRAM TO FIND A INT IS A SUM OF TWO SEMI PRIMES OR NOT

def issemiprime(n):
    x=[]
    for i in range(2,n+1):
        if (n%i==0):
            x.append(i)
    x.sort()
    c=False
    for i in range(len(x)):
        for j in range(i,len(x)):
            if isprime(x[i]) and isprime(x[j]):
                if x[i]!=x[j]:
                    if(x[i]*x[j]==n):
                        c=True
    return c

def isprime(n):
    if n<=1:
        return False
    for i in range(2,int(n)):
        if (n%i==0):
            return False
    return True

def sum(n):
    c=False
    for i in range(n+1):
        if issemiprime(i) and issemiprime(n-i):
            c=True
    return c

x='y'
while(x!='n'):
    n=int(input('Enter a Number:'))
    if(sum(n)):
        print('Yes')
    else:
        print('No')
    x=input('Another?(y/n)')
print('The End')