num = set(map(int,raw_input().split()))
n = int(raw_input())
flag = False
for i in range(0,n) :
    setA = set(map(int,raw_input().split()))
    interSectionSet = num.intersection(setA)
    if interSectionSet == setA and len(interSectionSet) < len(num) :
        flag = True
    else :
        flag = False
        break
print(flag)

