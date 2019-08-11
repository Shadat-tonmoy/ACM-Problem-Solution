	n = int(raw_input())
    list = []
    for i in range(0,n) :
        operation = raw_input().split()
        if operation[0] == 'insert' :
            index = int(operation[1])
            num = int(operation[2])
            list.insert(index,num)
        elif operation[0] == 'remove' :
            num = int(operation[1])
            list.remove(num)
        elif operation[0] == 'append' :
            num = int(operation[1])
            list.append(num)
        elif operation[0] == 'pop' :
            list.pop()
        elif operation[0] == 'sort' :
            list.sort()
        elif operation[0] == 'reverse' :
            list.reverse()
        elif operation[0] == 'print' :
            print list