from collections import defaultdict
tc = int(raw_input())
for x in range(0,tc) :
    strin = raw_input()
    length = len(strin)
    ans = 0
    freq = defaultdict(int)
    for i in range(0,length) :
        for j in range(1,length+1-i):
            tmp = "".join(sorted(strin[i:i+j]))
            freq[tmp]+=1
    for i in freq :
        if freq[i] >= 2:
            k = freq[i]
            ans+= k*(k-1)/2
    print(ans)



