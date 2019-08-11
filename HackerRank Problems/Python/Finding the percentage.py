n = int(raw_input())
data = {}
for i in range(0,n) :
    input = raw_input().split()
    key = input[0]
    values = map(float,input[1:])
    sum = 0
    for i in values :
        sum = sum+i
    average = sum / 3
    data[key] = average

key = raw_input()
print("%.2f") %(data[key])

