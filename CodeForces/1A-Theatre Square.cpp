#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int m,n,a,c,b;
    while(cin>>m>>n>>a)
    {
        long long int c1=0;
        long long int c2=0;
        long long int temp1 = 0;
        long long int temp2 = 0;
        long long int ans;// = 0;
        if(m==n && n==a)
        {
            ans=1;
        }

        else
        {
            if(m%a==0)
                c1=m/a;
            else c1 = m/a + 1;
            if(n%a==0)
                c2=n/a;
            else c2 = n/a +1;
            ans = c1*c2;
        }
        cout<<ans<<endl;

    }

    return 0;
}
