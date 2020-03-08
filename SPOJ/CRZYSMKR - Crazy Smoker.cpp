#include<bits/stdc++.h>
using namespace std;
long long int BigMod (long long int a, long long int b, long long int m)
{
    if(b==0)
        return 1;
    else if(b%2==0)
    {
        long long int half = BigMod(a,b/2,m);
        return (half*half)%m;
    }
    else
    {
        long long int part1 = a%m;
        long long int part2 = BigMod(a,b-1,m);
        return ((part1*part2)%m);
    }
}
int main()
{
    long long int i,j,k,l,m,n,a,b,c,ans,tc,d;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            cin>>n;
            a = BigMod(34,n,11);
            b = (8*(n%11))%11;
            c = 32%11;
            //cout<<a<<" "<<b<<" "<<c<<endl;
            //cout<<a%11<<" "<<b%11<<" "<<c%11<<endl;
            ans = (11-(a%11+b%11+c%11)%11)%11;
            cout<<ans<<endl;
        }


    }






    return 0;
}
