#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,c,ans,a,b,mnts[13],sum;
    while(cin>>n)
    {
        c=0;
        sum=0;
        for(i=0; i<12; i++)
            cin>>mnts[i];
        sort(mnts,mnts+12);
        if(n==0)
            ans=0;
        else
        {
            for(i=11; i>=0; i--)
            {
                sum+=mnts[i];
                c++;
                if(sum>=n)
                    break;
            }
            if(sum>=n)
                ans=c;
            else ans=-1;
        }
        cout<<ans<<endl;



    }





    return 0;

}


