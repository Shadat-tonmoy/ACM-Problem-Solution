#include<bits/stdc++.h>
using namespace std;
int n,num[10000],dp[102][50000],sum;
int _fn(int i, int dif)
{
    if(i>=n) return abs(dif - (sum-dif));
    if(dp[i][dif]!=-1)
        return dp[i][dif];
    int d1,d2;
    d1 = _fn(i+1,dif+num[i]);
    d2 = _fn(i+1,dif);
    dp[i][dif]=min(d1,d2);
    return dp[i][dif];
}
int main()
{
    int i,j,k,l,ans,tc;
    while(scanf("%d",&tc)==1)
    {

        for(l=1; l<=tc; l++)
        {
            memset(dp,-1,sizeof (dp));
            scanf("%d",&n);//cin>>n;
            sum=0;
            for(i=0; i<n; i++)
            {
                scanf("%d",&num[i]);//cin>>num[i];
                sum+=num[i];
            }
            //cout<<"sum : "<<sum<<endl;
            ans = _fn(0,0);
            printf("%d\n",ans);//cout<<ans<<endl;
        }

    }
    return 0;
}
/*
50
4
374 86 264 488
8
465 192 172 430 244 203 191 150
5
1 2 3 4 5
6
12 45 34 67 99 121
7
1 90 110 145 222 290 500
4
2 8 10 17
5
2 5 11 13 19



*/
