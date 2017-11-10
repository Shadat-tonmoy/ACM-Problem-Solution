#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,ans,a,b,x,y,z;
    while(cin>>a>>b)
    {
        x = min(a,b);
        y = max(a,b);
        z = (y-x)/2;
        cout<<x<<" "<<z<<endl;
    }


    return 0;

}


