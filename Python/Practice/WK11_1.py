n,m=input().split(" ")
n=int(n)
m=int(m)
marks=[int(x) for x in input().split(" ")]
marks.sort()
print(marks)
print(marks[m-1]-marks[0])