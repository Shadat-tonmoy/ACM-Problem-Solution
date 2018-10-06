from collections import defaultdict
freq = defaultdict(int)
k = int(raw_input())
list = map(int,raw_input().split())
for i in list :
    freq[i]+=1
for i in list :
    if freq[i] == 1 :
        print i
        break

