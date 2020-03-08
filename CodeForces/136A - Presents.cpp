#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,b,c;
    map <int,int> data;
    map <int,int> :: iterator it;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            cin>>a;
            data[a]=i;
        }
        for(it=data.begin();it!=data.end();it++)
            cout<<it->second<<" ";
        cout<<endl;
        data.clear();
    }

    return 0;
}

