#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,a,b,x,y,z,ans;
    while(cin>>n>>m>>a>>b)
    {
        if(m>=n)
        {
            x = n*a;
            y = b;
            ans = min(x,y);
        }
        else
        {
            x = n*a;
            y = ((n/m)*b) + ((n%m)*a);
            z = ((n/m)+1)*b;
            if(x<=y && x<=z)
                ans = x;
            else if (y<=x && y<=z)
                ans = y;
            else ans = z;
            //cout<<x<<" "<<y<<" "<<z<<endl;

        }
        cout<<ans<<endl;

    }

    return 0;

}


