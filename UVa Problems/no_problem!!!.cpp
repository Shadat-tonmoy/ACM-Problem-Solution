#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c=1,rem,ri=0;
    int p[10000],r[10000],d[10000];
    while(cin>>n)
    {
        if(n<0)
            break;
        p[0]=n;ri=0;
        for(i=1;i<=12;i++)
        {
            cin>>p[i];
        }
        for(i=1;i<=12;i++)
        {
            cin>>r[i];
        }
        for(i=1;i<=12;i++)
        {
            if(i==1)
            {
                if(p[i-1]>=r[i])
                {
                    d[i]=1;
                    p[i-1]=p[i-1]-r[i];
                    ri = ri+p[i-1]+p[i];
                }
                else
                {
                    d[i]=0;
                    ri = ri+p[i-1]+p[i];
                }
            }
            else
            {
                if(ri>=r[i])
                {
                    d[i]=1;
                    ri=ri-r[i];
                    ri=ri+p[i];
                }
                else
                {
                    d[i]=0;
                    ri = ri+p[i];
                }

            }
        }
        printf("Case %d:\n",c);
        for(i=1;i<=12;i++)
        {
            if(d[i]==1)
                printf("No problem! :D\n");
            else printf("No problem. :(\n");
        }
        c++;
    }


    return 0;
}
