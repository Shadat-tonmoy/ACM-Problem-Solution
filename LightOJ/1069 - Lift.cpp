#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,x,y,ans;
    while(cin>>tc)
    {

        for(l=1;l<=tc;l++)
        {
            cin>>x>>y;
            if(x<y)
            {
                ans=((y-x)*4)+19+(x*4);
            }
            else
            {
                ans=((x-y)*4)+19+(x*4);
            }
            printf("Case %d: %d\n",l,ans);
        }
    }
    return 0;
}
