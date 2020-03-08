#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,num[1000],d,sum,ans;
    while(cin>>n)
    {
        ans=0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        cin>>d>>m;
        for(i=0;i<=n-m;i++)
        {
            sum=0;

            for(j=i;j<i+m;j++)
            {
                sum+=num[j];
            }
            if(sum==d)
                ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
