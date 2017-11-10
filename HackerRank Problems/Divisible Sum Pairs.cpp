#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[1000],d,sum,ans;
    while(cin>>n>>k)
    {
        ans=0;
        for(i=0;i<n;i++)
            cin>>num[i];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((num[i]+num[j])%k==0)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
