#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,crnt,num[100000],total;
    while(scanf("%lld",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%lld",&n);
            for(i=0;i<n;i++)
                scanf("%lld",&num[i]);
            crnt = 0;
            total= 0;
            for(i=0;i<n;i++)
            {
                if(num[i]>crnt)
                {
                    total+=(num[i]-crnt);
                    crnt=num[i];
                }
                else crnt=num[i];
            }
            printf("%lld\n",total);
        }
    }
    return 0;
}
