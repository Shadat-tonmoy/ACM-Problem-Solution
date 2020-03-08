#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,tc,sum;
    while(scanf("%lld",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            sum=0;
            scanf("%lld %lld",&n,&k);
            for(i=0;i<n;i++)
            {
                scanf("%lld",&j);
                sum+=j;
            }
            if(sum%2==1)
                printf("even\n");
            else if (sum%2==0 && k==1)
                printf("odd\n");
            else if (sum%2==0 && k!=1)
                printf("even\n");
        }
    }


    return 0;
}
