#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,p,home[100],away[100];
    while(cin>>n)
    {
        int ans=0;
        for(i=0; i<n; i++)
            cin>>home[i]>>away[i];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i!=j && home[i]==away[j])
                    ans++;
            }
        }
        cout<<ans<<endl;
    }

return 0;
}

