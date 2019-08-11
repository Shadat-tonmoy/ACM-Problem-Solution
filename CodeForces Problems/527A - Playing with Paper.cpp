#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,mod,ans;
    while(cin>>a>>b)
    {
        ans = 0;
        while(a>0 && b>0)
        {
            ans+=a/b;
            mod = a%b;
            a = max(mod,b);
            b = min(mod,b);
        }
        cout<<ans<<endl;
    }






    return 0;
}
