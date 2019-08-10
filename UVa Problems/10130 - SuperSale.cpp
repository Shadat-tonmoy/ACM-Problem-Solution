#include<bits/stdc++.h>
using namespace std;
int capacity,n,weight[1001],price[1001],dp[1001][1001];
int knapsack(int i,int w)
{
    if(i==n+1)
    {
        return 0;
    }
    if(dp[i][w]!=-1)
    {
        return dp[i][w];
    }
    int p1=0,p2=0;
    //printf("capacity is %d weigth of %d th is %d\n",capacity,i,weight[i]);
    if(w+weight[i]<=capacity)
    {
        p1 = price[i] + knapsack(i+1,w+weight[i]);
        //printf("Profit 1 is %d\n",p1 );
    }
    p2 = knapsack(i+1,w);
    //printf("Profit 2 is %d\n",p2);
    dp[i][w]=max(p1,p2);
    return dp[i][w];


}
int main()
{
    int i,j,k,l,m,tc,w,sum;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>n;
            for(i=1; i<=n; i++)
            {
                cin>>price[i]>>weight[i];
            }
            cin>>m;
            sum=0;
            for(i=1; i<=m; i++)
            {
                cin>>capacity;
                memset(dp,-1,sizeof dp);
                //cout<<"capacity : "<<capacity<<endl;
                int ans = knapsack(1,0);
                sum+=ans;
            }
            cout<<sum<<endl;

        }
    }


    return 0;
}
/*
2
3
72 17
44 23
31 24
1
26


*/
