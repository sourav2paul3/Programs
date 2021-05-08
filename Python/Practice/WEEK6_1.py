n=int(input('Enter the number of songs:'))
songs=[int(i) for i in input().split(" ")]
paradox=int(input('Enter the initial position:'))
x=songs[paradox-1]
songs.sort()
for i in songs:
    if(x==i):
        print(i,end="")
