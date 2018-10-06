str = raw_input()
substr = raw_input()
lenA = len(str)
lenB = len(substr)
c = 0
for i in range(0,lenA) :
    if str[i:i+lenB] == substr :
        c = c+1
print (c)

