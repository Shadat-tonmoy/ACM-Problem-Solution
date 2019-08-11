#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,n,p,q,c=0;
    while(cin>>n)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>p>>q;
            if(q-p>=2)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
