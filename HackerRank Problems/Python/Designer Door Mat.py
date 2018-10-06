n,m = map(int,raw_input().split())# str = ".|."
# for i in range(1,n+1) :
#     if i<=n/2 :
#         tmp = str*(2*i-1)
#         print(tmp.center(m,'-'))
#     elif i==n/2 + 1 :
#         print("WELCOME".center(m,'-'))
#     else :
#         j = (n/2+1) - (i-(n/2+1))
#         tmp = str*(2*j-1)
#         print(tmp.center(m,'-'))
str = ".|."
for i in xrange(1,n,2) :
    print((str*i).center(m,'-'))
print("WELCOME".center(m,'-'))
for i in xrange(n-2,-1,-2) :
    print((str*i).center(m,'-'))

