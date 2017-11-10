#include<bits/stdc++.h>
using namespace std;
int dp[100][100],num[100][100],n;
int _fn(int i,int j)
{
    if(i==n)
        return num[i][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    int a=0,b=0;
    if(j==1)
    {
        a=_fn(i+1,2);
        b=_fn(i+1,3);
        dp[i][j]=num[i][j]+min(a,b);
        return dp[i][j];
    }
    else if(j==2)
    {
        a=_fn(i+1,1);
        b=_fn(i+1,3);
        dp[i][j]=num[i][j]+min(a,b);
        return dp[i][j];
    }
    else if(j==3)
    {
        a=_fn(i+1,1);
        b=_fn(i+1,2);
        dp[i][j]=num[i][j]+min(a,b);
        return dp[i][j];
    }
}
int main()
{
    int i,j,k,l,m,ans,mini,a,b,x,y,z,tc;
    while(scanf("%d",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            scanf("%d",&n);
            memset(dp,-1,sizeof dp);
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=3; j++)
                {
                    scanf("%d",&num[i][j]);
                }
            }
            mini=9999999;
            x = _fn(1,1);
            if(x<mini)
                mini=x;
            y = _fn(1,2);
            if(y<mini)
                mini=y;
            z = _fn(1,3);
            if(z<mini)
                mini=z;
            printf("Case %d: %d\n",l,mini);

        }
    }
    return 0;
}
