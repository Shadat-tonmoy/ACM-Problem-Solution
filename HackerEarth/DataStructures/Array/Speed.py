tc = int(input())
for l in range(0,tc):
    n = int(input())
    speeds = [int(x) for x in input().split()]
    ans = 0
    minimum = 999999999999
    for i in range(0,len(speeds)):
        if i==0:
            ans+=1
            minimum = speeds[i]
        else :
            if speeds[i]<minimum:
                ans+=1
                minimum=speeds[i]
    print (ans)
