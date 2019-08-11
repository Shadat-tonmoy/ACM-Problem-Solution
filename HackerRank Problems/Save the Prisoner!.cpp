#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,p,m,id,n,a,b,c,s,tc,ans;
    while(cin>>tc)
    {
        for(i=0; i<tc; i++)
        {
            cin>>p>>m>>id;
            if((m+id-1)%p==0)
                cout<<p<<endl;
            else
                cout<<(m+id-1)%p<<endl;
        }

    }


    return 0;
}
