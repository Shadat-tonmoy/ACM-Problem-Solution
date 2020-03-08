#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,sum=0;
    while(cin>>tc)
    {

        for(l=1;l<=tc;l++)
        {
            sum=0;
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>m;
                if(m>0)
                    sum+=m;
            }
            printf("Case %lld: %lld\n",l,sum);

        }

    }

    return 0;
}
