#include<bits/stdc++.h>
using namespace std;
#define pi 2 * acos (0.0)
int main()
{
    int i,j,k,l,m,n,a,b,tc;
    double r,a_s,a_c,ans;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            cin>>r;
            a_s = 4*r*r;
            a_c = pi*r*r;
            //cout<<a_s<<" "<<a_c<<endl;
            ans = (a_s-a_c)+10e-9;
            printf("Case %d: %.2lf\n",l,ans);
        }
    }
    return 0;
}
