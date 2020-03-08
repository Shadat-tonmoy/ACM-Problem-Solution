#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,j,k,l,m,n,p,q,r,s,t;
    int c;
    while(cin>>t)
    {
        for(j=1; j<=t; j++)
        {
            cin>>n;
            c=0;
            for(i=2; i<=n; i++)
            {
                if(n%i==0)
                {
                    c++;
                    if(c==1)
                    {
                        p=i;
                        q=n/i;
                    }
                    else if(c==2)
                    {
                        r=i;
                        s=n/i;
                        break;
                    }
                }
            }
            printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",j,n,p,q,r,s);
        }

    }

    return 0;
}
