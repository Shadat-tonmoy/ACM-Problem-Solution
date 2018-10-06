from collections import defaultdict
n = int(raw_input())
num1 = map(int,raw_input().split())
m = int(raw_input())
num2 = map(int,raw_input().split())
freq1 = defaultdict(int)
freq2 = defaultdict(int)
for i in num1:
    freq1[i] += 1
for i in num2:
    freq2[i] += 1
output = ""
for i in freq1:
    if freq1[i] < freq2[i] :
        output = output+str(i)+" "
        #print i
print output

