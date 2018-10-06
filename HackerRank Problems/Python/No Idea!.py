from collections import defaultdict
n,m = map(int,raw_input().split())
num = map(int,raw_input().split())
a = map(int,raw_input().split())
b = map(int,raw_input().split())
happySet = set(num).intersection(a)
sadSet = set(num).intersection(b)
freq = defaultdict(int)
for i in num:
    freq[i]+=1
happy = 0
sad = 0
for i in happySet :
    happy+=freq[i]
for i in sadSet :
    sad+=freq[i]
print(happy-sad)

