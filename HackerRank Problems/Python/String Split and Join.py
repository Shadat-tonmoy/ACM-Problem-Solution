str = raw_input()
operation = raw_input().split()
index = int(operation[0])
value = operation[1]
str = str[:index]+value+str[index+1:]
print(str)