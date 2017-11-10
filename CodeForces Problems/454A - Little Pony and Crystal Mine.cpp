#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,z,d,star;
    while(cin>>n)
    {
        for(i=1;i<=n/2;i++)
        {
            d = 2*i-1;
            star = n-d;
            for(j=0;j<star/2;j++)
                cout<<"*";
            for(j=0;j<d;j++)
                cout<<"D";
            for(j=0;j<star/2;j++)
                cout<<"*";
            cout<<endl;
        }
        for(i=1;i<=n;i++)
            cout<<"D";
        cout<<endl;
        for(i=n/2;i>=1;i--)
        {
            d = 2*i-1;
            star = n-d;
            for(j=0;j<star/2;j++)
                cout<<"*";
            for(j=0;j<d;j++)
                cout<<"D";
            for(j=0;j<star/2;j++)
                cout<<"*";
            cout<<endl;
        }
    }
    return 0;
}
