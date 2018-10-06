from itertools import product
l1 = list(map(int,raw_input().split()))
l2 = list(map(int,raw_input().split()))
prod = list(product(l1,l2))
res = ""
for i in prod:
    res = res + str(i) +" "
    #print i
print res