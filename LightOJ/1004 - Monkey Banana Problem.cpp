#include<bits/stdc++.h>
using namespace std;
#define inf 9999999999
#define lli long long int
lli grid[300][300],row,col,dp[300][300],n;
lli _fn(lli i,lli j)
{
    if((i>=1 && i<=row) && (j>=1 && j<=col))
    {
        if(i<n)
        {
            if(dp[i][j]!=-1)
                return dp[i][j];
            lli banana = -inf;
            banana = max(_fn(i+1,j)+grid[i][j],banana);
            banana = max(_fn(i+1,j+1)+grid[i][j],banana);
            //banana = max(_fn(i+1,j+1)+grid[i][j],banana);
            dp[i][j]=banana;
            return dp[i][j];
        }
        else
        {
            if(dp[i][j]!=-1)
                return dp[i][j];
            lli banana = -inf;
            banana = max(_fn(i+1,j)+grid[i][j],banana);
            //banana = max(_fn(i+1,j-1)+grid[i][j],banana);
            banana = max(_fn(i+1,j-1)+grid[i][j],banana);
            dp[i][j]=banana;
            return dp[i][j];

        }
    }
    else return 0;
}
int main()
{
    lli i,j,k,l,m,tc;
    while(scanf("%lld",&tc)==1)
    {

        for(l=1; l<=tc; l++)
        {
            memset(dp,-1,sizeof dp);
            memset(grid,0,sizeof grid);
            scanf("%lld",&n);
            col = n;
            row = (2*n)-1;
            for(i=1; i<n; i++)
            {
                for(j=1; j<=i; j++)
                {
                    scanf("%lld",&grid[i][j]);
                }

            }
            for(i=n; i<2*n; i++)
            {
                for(j=1; j<=2*n-i; j++)
                {
                    scanf("%lld",&grid[i][j]);
                }
            }
            /*for(i=1;i<=row;i++)
            {
                for(j=1;j<=col;j++)
                {
                    cout<<grid[i][j]<<" ";
                }
                cout<<endl;
            }*/
            lli ans = _fn(1,1);
            printf("Case %lld: %lld\n",l,ans);
            //cout<<ans<<endl;

        }
    }

    return 0;
}
