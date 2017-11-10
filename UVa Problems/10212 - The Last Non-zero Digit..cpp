#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,a,b,c,tc,sum=0,p,ans;
    while(scanf("%lld %lld",&n,&m)==2)//cin>>n>>m)
    {

        if(m==0)
            cout<<1<<endl;
        else
        {
            ans = 1;
            for(i=n; i>=(n-m+1); i--)//for(i=(n-m+1);i<=n;i++)
            {
                ans = ans*i;
                while(ans%10==0)
                    ans = ans/10;

                ans = ans % 10000000000;

            }
            printf("%lld\n",ans%10);
            //cout<<ans%10<<endl;
        }


    }
    return 0;
}
