#include<bits/stdc++.h>
using namespace std;
int dp[1005][55],make,n;
int coin[55];
map <int,int> freq;
int _fn(int am,int i)
{
    if(i>n)
    {
        if(am==make)
        {
            //cout<<"returned if : "<<i<<endl;
            return 1;
        }

        return 0;

    }
    if(am>make)
        return 0;
    if(am==make)
        return 1;
    if(dp[am][i]!=-1)
        return dp[am][i];
    int a=0;
    for(int j=1; j<=freq[i]; j++)
    {
        if(am+coin[i]*j<=make)
        {
            a+=_fn(am+coin[i]*j,i+1)%100000007;
        }
        else break;
    }
    a+=_fn(am,i+1)%100000007;
    //b = _fn(i+1,am);
    dp[am][i]=a%100000007;
    //cout<<"a : "<<a<<" "<<"b : "<<b<<" i "<<i<<" am "<<am<<" "<<dp[i][am]<<endl;
    //printf("dp[%d][%d] : %d\n",i,am,dp[am][i]);
    return dp[am][i]%100000007;
    //taken.clear();
    //cout<<"returned finally "<<a+b<<endl;
}
using namespace std;
int main()
{
    int i,j,k,l,ans,tc,t;
    while(scanf("%d",&tc)==1)
    {
        for(t=1; t<=tc; t++)
        {
            scanf("%d %d",&n,&make);
            memset(dp,-1,sizeof dp);
            for(i=0; i<n; i++)
                scanf("%d",&coin[i]);
            for(i=0; i<n; i++)
                scanf("%d",&freq[i]);
            ans=0;
            ans = _fn(0,0)%100000007;
            printf("Case %d: %d\n",t,ans);
            freq.clear();
        }
    }
    return 0;
}
/*
5
5 8 11 15 18
18

*/
