#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
main()
{
    long long int i,j,k,l,m,n,c,x,ans,tc;
    scanf("%lld",&tc);//cin>>tc;
    for(i=1; i<=tc; i++)
    {
        scanf("%lld %lld",&m,&n);
        //cin>>m>>n;
        x = gcd(m,n);
        ans = (m+n)/x;
        printf("Case %lld: %lld\n",i,ans);
        //cout<<ans<<endl;

    }


    return 0;
}

