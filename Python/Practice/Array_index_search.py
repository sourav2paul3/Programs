#PROGRAM TO FIND THE ARRAY INDEX

from array import *

arr = array('i',[])
n=int(input("Enter the size of array:"))
for i in range(n):
    x=int(input("Enter value of array:"))
    arr.append(x)
print("Array is:")
for e in arr:
    print(e,end=" ")

data=int(input("\nEnter the value for search:"))
for e in arr:
    if(e==data):
        print("The index is:",arr.index(data))
        break
else:
    print("Data not found")