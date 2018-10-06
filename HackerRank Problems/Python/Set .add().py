n = int(raw_input())
country = set()
for i in range(0,n) :
    name = raw_input().rstrip()
    country.add(name)
print len(country)