#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,z;
    while(cin>>a>>b)
    {
        c = abs(a-b);
        if(a==0 && b==0)
            cout<<"NO"<<endl;
        else if(c==0 || c==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
