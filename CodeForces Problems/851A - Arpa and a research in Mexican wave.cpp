#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,t;
    while(cin>>n>>k>>t)
    {
        if(t<=k)
            cout<<t<<endl;
        else if (t>k && t<=n)
            cout<<k<<endl;
        else if (t>n)
        {
            m = t-n;
            if(m!=0)
                cout<<k-m<<endl;
            else if (m==0)
                cout<<0<<endl;
        }
    }
    return 0;

}
