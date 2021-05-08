def alphabet(char):
    alpha='abcdefghijklmnopqrstwuvxyz '
    char=char.lower()
    if char in alpha:
        return True
    return False


str=input()
for i in str:
    if alphabet(i)!=True:
        print('YES',end="")
        exit(0)
print('NO',end="")