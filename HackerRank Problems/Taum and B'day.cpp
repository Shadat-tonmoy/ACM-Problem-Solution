#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,l,p,m,n,a,tc,ans,black,white,blackPrice,whitePrice,convertPrice;
    while(cin>>tc)
    {
        for(i=0;i<tc;i++)
        {
            cin>>black>>white>>blackPrice>>whitePrice>>convertPrice;
            ans = min(black*blackPrice,black*whitePrice + black*convertPrice) +
                    min(white*whitePrice, white*blackPrice + white*convertPrice);
            cout<<ans<<endl;
        }
    }
    return 0;
}
