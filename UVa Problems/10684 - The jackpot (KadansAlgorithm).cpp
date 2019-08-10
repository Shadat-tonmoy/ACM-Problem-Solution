#include<bits/stdc++.h>
using namespace std;
#define SIZE 10000
int num[SIZE],n,ans;
void solve()
{
    int maxSoFar = 0, maxEndingHere = 0;
    for(int i=0;i<n;i++)
    {
        maxEndingHere += num[i];
        
        if(maxEndingHere>maxSoFar)
        {
            maxSoFar = maxEndingHere;
        }
        if(maxEndingHere<0)
        {
            maxEndingHere = 0;
        }
    }
    int ans = maxSoFar;
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
