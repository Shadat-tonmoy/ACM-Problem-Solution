def fn(n):
    if dp[n]!=-1:
        return dp[n]
    dp[n] = fn(n-2) + (fn(n-1)*fn(n-1))
    return dp[n]

max = 100
dp = dict()
t1,t2,n = map(int,raw_input().split())
dp[1]=t1
dp[2]=t2
for i in range(3,max):
    dp[i]=-1
print(fn(n))





