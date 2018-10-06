n = int(raw_input())
set1 = set(map(int,raw_input().split()))
m = int(raw_input())
for i in range(0,m) :
    op,opN = raw_input().split()
    if op == "intersection_update" :
        set2 = set(map(int,raw_input().split()))
        set1.intersection_update(set2)
    elif op == "update" :
        set2 = set(map(int,raw_input().split()))
        set1.update(set2)
    elif op == "symmetric_difference_update" :
        set2 = set(map(int,raw_input().split()))
        set1.symmetric_difference_update(set2)
    elif op == "difference_update" :
        set2 = set(map(int,raw_input().split()))
        set1.difference_update(set2)
print (sum(set1))

