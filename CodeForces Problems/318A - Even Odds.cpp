#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int i,j,k,l,m,n,even,odd,ans;
    while(cin>>n>>k)
    {
        if(n%2==0)
        {
            even = n/2;
            odd = n/2;
        }
        else
        {
            even = n/2;
            odd = n/2+1;
        }
        if(k<=odd)
            ans = (2*k)-1;
        else ans = 2*(k-odd);
        cout<<ans<<endl;

    }
    return 0;

}


