from collections import OrderedDict
str = raw_input()
k = int(raw_input())
len = len(str)
for i in range(0,len,k) :
    tmp = str[i:i+k]
    print "".join(OrderedDict.fromkeys(tmp))
