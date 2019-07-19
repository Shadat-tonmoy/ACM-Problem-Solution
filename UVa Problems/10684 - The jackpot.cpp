#include<bits/stdc++.h>
using namespace std;
#define SIZE 10000
int num[SIZE],n,ans;
void solve()
{
    ans = 0;
    int memo[SIZE],sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
        memo[i] = sum;
        ans = max(ans,sum);
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int left = i, right = j;
            int x = memo[right] - memo[left-1];
            ans = max(ans,x);
        }
    }
    if(ans>0)
    {
        printf("The maximum winning streak is %d.\n",ans);
    }
    else printf("Losing streak.\n");
}
int main()
{
    int i,j,k,l,m;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(k=0;k<n;k++)
        {
            cin>>num[k];
        }
        solve();
    }
}
