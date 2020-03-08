#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,tc,x,y,ans,x1,y1,x2,y2;
    while(cin>>tc)
    {

        for(l=1;l<=tc;l++)
        {
            cin>>x1>>y1>>x2>>y2;
            cin>>m;
            printf("Case %d:\n",l);
            for(i=0;i<m;i++)
            {
                cin>>x>>y;
                if((x>x1 && y>y1) && (x<x2 && y<y2))
                    printf("Yes\n");
                else printf("No\n");
            }


        }

    }

    return 0;
}
