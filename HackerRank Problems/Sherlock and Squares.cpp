#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,p,m,n,a,b,tc,ans,sz1,sz2,index,c;
    while(cin>>tc)
    {
        for(i=0;i<tc;i++)
        {
            cin>>a>>b;
            c=0;
            for(j=1;j<=sqrt(b);j++)
            {
                m = j*j;
                if( m>=a && m<=b )
                    c++;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
