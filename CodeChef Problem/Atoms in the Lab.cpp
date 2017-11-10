#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,t;
    while(scanf("%lld",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%lld %lld %lld",&n,&k,&m);
            t=0;
            while(n<=m/k)
            {
                n = n * k;
                //cout<<"n is "<<n<<endl;
                t++;
            }
            printf("%lld\n",t);
        }
    }


    return 0;
}
