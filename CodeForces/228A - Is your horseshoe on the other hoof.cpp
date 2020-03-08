#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n;
    set<int>data;
    for(i=0;i<4;i++)
    {
        cin>>n;
        data.insert(n);
    }
    m = 4 - data.size();
    cout<<m<<endl;

return 0;

}


