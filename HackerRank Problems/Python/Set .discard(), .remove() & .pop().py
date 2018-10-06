n = int(raw_input())
num = set(map(int,raw_input().split()))
ins = int(raw_input())
for i in range(0,ins) :
    operation = raw_input().split()
    op = operation[0]
    if op == "pop" :
        num.pop()
    elif op == "remove" :
        num.remove(int(operation[1]))
    elif op == "discard" :
        num.discard(int(operation[1]))

print(sum(num))


