import cmath
n = complex(raw_input())
polar = cmath.polar(n)
s = str(polar)
list = s.split()
print(list[0].strip(',').lstrip('('))
print(list[1].rstrip(')'))
