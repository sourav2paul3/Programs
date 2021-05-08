low,high=input().split(' ')
low=int(low)
high=int(high)
arr=[]
index=0;
for i in range(low,high+1):
    arr[index]=i
    index=index+1
n=int(input())
count=0
for i in arr:
    if (arr[i]*n)%2==0:
       count=count+1

for i in arr:
    for j