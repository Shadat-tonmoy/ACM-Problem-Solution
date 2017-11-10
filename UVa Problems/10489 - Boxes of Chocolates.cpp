#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,sum=0,p,ans;
    while(cin>>tc)
    {
        sum = 0;
        for(c=0;c<tc;c++)
        {
            sum=0;
            cin>>m>>n;
            for(i=0;i<n;i++)
            {
                p=1;
                cin>>k;
                for(j=0;j<k;j++)
                {
                    cin>>a;
                    p = ((p%m)*(a%m))%m;
                }
                sum+=p;
            }
            ans = sum%m;
            cout<<ans<<endl;

        }
    }
    return 0;
}
