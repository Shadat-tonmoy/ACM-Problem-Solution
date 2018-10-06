n1 = int(raw_input())
list1 = set(map(int,raw_input().split()))
n2 = int(raw_input())
list2 = set(map(int,raw_input().split()))
a = list1.difference(list2)
b = list2.difference(list1)
joinSet = sorted(a.union(b))
for i in joinSet:
    print(i)

