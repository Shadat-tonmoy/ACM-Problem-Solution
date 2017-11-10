#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,c,ans,a,b;
    while(cin>>n>>m)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            if(5-a>=m)
                c++;
        }
        ans = c/3;
        cout<<ans<<endl;



    }





    return 0;

}


