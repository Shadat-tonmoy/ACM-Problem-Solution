#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,ans;
    string str;
    string :: iterator it;
    while(cin>>n)
    {
        cin>>str;
        l = str.size();
        it = unique(str.begin(),str.end());
        str.resize(distance(str.begin(),it));
        k = str.size();
        ans = l - k;
        cout<<ans<<endl;

    }
    return 0;
}
