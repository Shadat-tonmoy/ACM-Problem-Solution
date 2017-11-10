#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,k1,k2,h,ans;
    bool first,second;
    while(cin>>n>>h)
    {
        ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a>h)
                ans+=2;
            else ans++;
        }
        cout<<ans<<endl;



    }


    return 0;
}
