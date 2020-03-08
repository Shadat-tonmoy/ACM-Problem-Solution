#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,s,maxi;
    while(cin>>n>>k)
    {
        maxi = 0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            maxi = max(a,maxi);
        }
        if(maxi>=k)
            cout<<maxi-k<<endl;
        else cout<<0<<endl;



    }

    return 0;
}
