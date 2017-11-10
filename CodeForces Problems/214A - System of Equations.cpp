#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c;

    while (cin>>n>>m)
    {
        c=0;
        for(i=0;i*i<=n;i++)
        {
            a = i;
            b = n - (a*a);
            //cout<<a<< " " <<b<<endl;
            if( (a*a + b == n) && (a + b*b == m))
                c++;
        }
        cout<<c<<endl;

    }

    return 0;

}
