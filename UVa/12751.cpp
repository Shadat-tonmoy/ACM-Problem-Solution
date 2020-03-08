#include<iostream>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,x,t,t_mass,sum,ans;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            sum=0;
            cin>>n>>k>>x;
            t_mass = (n*(n+1)/2);
            for(j=1;j<=k;j++)
            {
                sum = sum+x;
                x++;
            }
            ans = t_mass - sum;
            cout<<"Case "<<i<<": "<<ans<<endl;
        }
    }


    return 0;
}
