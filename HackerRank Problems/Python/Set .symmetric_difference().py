n1 = int(raw_input())
set1 = set(map(int,raw_input().split()))
n2 = int(raw_input())
set2 = set(map(int,raw_input().split()))
symetricDiffer = set1.symmetric_difference(set2)
print(len(symetricDiffer))