def averageArray(array):
    num = set(array)
    length = len(num)
    summation = sum(num)
    avg = summation / float(length)
    print(avg)

n = raw_input()
input = map(int,raw_input().split(' '))
averageArray(input)