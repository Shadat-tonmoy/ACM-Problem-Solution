def isHoliday (n) :
	if n%7==0 or n%7==6 :
		return True
	else :
		return False

num = list()
tc = int(raw_input())
for i in range(1,tc+1) :
	ans = set()
	x = int(raw_input())
	n = int(raw_input())
	for j in range(0,n) :
		m = int(raw_input())
		num.insert(j,m)
	for j in range(0,n) :
		m = num[j]
		k = m
		while k<=x :
			if not isHoliday(k) :
				ans.add(k)
			k+=m
	print (len(ans))
