#include<bits/stdc++.h>
using namespace std;
long long int high[100000],low[100000],contain[100000],num[100000];
int main()
{
    long long int i,j,k,l,m,n,a,b,c,ans,dif;
    while(cin>>n>>k)
    {
        for(i=1;i<=n;i++)
        {
            cin>>num[i];
        }
        for(i=1;i<=n;i++)
        {
            low[i]=1;
            high[i]=i;
            contain[i]=(i*(i+1))/2;
        }
        for(i=1;i<=n;i++)
        {
            if(contain[i]>=k)
            {
                //cout<<"contain : "<<contain[i]<<" low : "<<low[i]<<" high : "<<high[i]<<endl;
                dif = contain[i]-k;
                ans = num[high[i]-dif];
                break;
            }
        }
        cout<<ans<<endl;


    }


    return 0;
}
