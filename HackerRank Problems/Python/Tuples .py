n = int(raw_input())
integer_list = map(int,raw_input().split())
tuple = tuple(integer_list)
ans = hash(tuple)
print ans
