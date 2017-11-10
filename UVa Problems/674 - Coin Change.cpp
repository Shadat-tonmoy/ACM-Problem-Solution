#include<bits/stdc++.h>
int dp[6][8000],make,n;
int coin[]={50,25,10,5,1};
int _fn(int i,int am)
{
    if(i>=5)
    {
        if(am==0)
            return 1;
        else return 0;
    }
    if(dp[i][am]!=-1)
        return dp[i][am];
    int a=0,b=0;
    if(am-coin[i]>=0)
        a = _fn(i,am-coin[i]);
    b = _fn(i+1,am);
    return dp[i][am] = a+b;
}
using namespace std;
int main()
{
    int i,j,k,l,ans;
    memset(dp,-1,sizeof dp);
    while(cin>>make)
    {
        ans=0;
        ans = _fn(0,make);
        cout<<ans<<endl;
    }
    return 0;
}
/*
5
5 8 11 15 18
18

*/
