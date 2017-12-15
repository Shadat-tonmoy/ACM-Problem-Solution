
data = {}
n = int(raw_input())
minimum = 9999999999
minimum2 = 9999999999
for i in range(0,n) :
    key = raw_input()
    value = float(raw_input())
    data[key] = value
    if value < minimum :
        minimum = value

#finding the second minimum value
for key,value in data.iteritems() :
    if value < minimum2 and value > minimum :
        minimum2 = value

output = []

for key,value in data.iteritems() :
    if value == minimum2 :
        output.append(key)
output.sort()

for i in output :
    print(i)