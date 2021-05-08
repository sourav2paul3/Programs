def vowel(char):
    vw='aeiou'
    for ch in vw:
        if char==ch:
            return True
    return False

str=input()
for i in range(len(str)):
    if str[i]==" ":
        print(str[i],end="")
    if str[i]!=' ':
        if(vowel(str[i])):
            if vowel(str[i-1])!=True:
                print(str[i],end="")
        else:
            print(str[i],end="")