#include<bits/stdc++.h>
#define MAX 205
using namespace std;
int m,d,dp[MAX][MAX][20],num[MAX],n;
int knapsack(int i,int sum,int c)
{
    if(c==m && sum==0)
        return 1;
    if(c==m && sum!=0)
        return 0;
    if(i==n)
        return 0;

    if(dp[i][sum][c]!=-1)
        return dp[i][sum][c];
    dp[i][sum][c]=knapsack(i+1,(sum+num[i])%d,c+1) + knapsack(i+1,sum%d,c);
    return dp[i][sum][c];
}
int main()
{
    int i,j,k,l,tc=1,x,q,ans;
    while(scanf("%d %d",&n,&q)==2)
    {
        if(n==0 && q==0)
            break;
        for(i=0; i<n; i++)
            scanf("%d",&num[i]);
        printf("SET %d:\n",tc);
        tc++;
        for(i=1; i<=q; i++)
        {
            scanf("%d %d",&d,&m);
            memset(dp,-1,sizeof dp);
            ans = knapsack(0,0,0);
            printf("QUERY %d: %d\n",i,ans);


        }
    }


    return 0;
}
