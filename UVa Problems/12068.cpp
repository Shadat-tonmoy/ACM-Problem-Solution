#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{
    long long int i,l,m,n,a,b,tc,g_c_d,c,l_c_m,num[1000],sum;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            sum = 0;
            cin>>n;
            for(i=0;i<n;i++)
            {
               scanf("%lld",&num[i]);
            }
            a = num[0];
            b = num[1];
            //cout<<a<<" "<<b<<endl;
            g_c_d = gcd(a,b);
            l_c_m = a*b / g_c_d;
            //cout<<l_c_m<<endl;
            for(i=2;i<n;i++)
            {
                g_c_d = gcd(num[i],l_c_m);
                l_c_m = l_c_m * num[i]/g_c_d;            }
            //cout<<l_c_m<<endl;
            for(i=0;i<n;i++)
            {
                sum += l_c_m / num[i];
            }
            //cout<<sum<<endl;
            a = l_c_m * n;
            b = sum;
            c = gcd(a,b);
            while(c!=1)
            {
                a = a/c;
                b = b/c;
                c = gcd(a,b);
            }
            printf("Case %lld: %lld/%lld\n",l,a,b);

            //cout<<c<<endl;


        }

    }

    return 0;
}
