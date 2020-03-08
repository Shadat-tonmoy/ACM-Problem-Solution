#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,x,y;
    while(cin>>n)
    {
        a=0;
        b=0;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>m;
            a+=m;
        }
        for(i=0;i<n-1;i++)
        {
            cin>>m;
            b+=m;
        }

        for(i=0;i<n-2;i++)
        {
            cin>>m;
            c+=m;
        }
        x = a-b;
        y = b-c;
        cout<<x<<endl<<y<<endl;
    }
    return 0;
}
