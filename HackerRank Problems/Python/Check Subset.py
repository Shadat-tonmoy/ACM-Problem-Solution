test = int(raw_input())
for l in range(0,test) :
    n1 = int(raw_input())
    set1 = set(map(int,raw_input().split()))
    n2 = int(raw_input())
    set2 = set(map(int,raw_input().split()))
    intersectionSet = set1.intersection(set2)
    print intersectionSet == set1

