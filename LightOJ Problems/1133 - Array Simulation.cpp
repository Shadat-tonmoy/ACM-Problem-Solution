#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,tc,num[1000],m,n,a,b,c,d,tmp[1000],y,z;
    char cmd;
    while(scanf("%d",&tc)==1)
    {

        for(l=1; l<=tc; l++)
        {
            scanf("%d %d",&n,&m);
            for(i=0; i<n; i++)
                scanf("%d",&num[i]);
            getchar();
            for(k=1; k<=m; k++)
            {
                scanf("%c",&cmd);
                if(cmd=='S')
                {
                    scanf("%d",&d);
                    for(i=0; i<n; i++)
                        num[i]+=d;
                }
                else if(cmd=='M')
                {
                    scanf("%d",&d);
                    for(i=0; i<n; i++)
                        num[i]*=d;

                }
                else if(cmd=='D')
                {
                    scanf("%d",&d);
                    for(i=0; i<n; i++)
                        num[i]/=d;
                }
                else if(cmd=='R')
                {
                    for(i=n-1,j=0; i>=0; j++,i--)
                        tmp[j]=num[i];
                    for(i=0; i<n; i++)
                        num[i]=tmp[i];
                }
                else if(cmd=='P')
                {
                    scanf("%d %d",&y,&z);
                    swap(num[y],num[z]);
                }
                getchar();
            }
            printf("Case %d:\n",l);
            for(i=0; i<n; i++)
            {
                if(i==n-1)
                    printf("%d\n",num[i]);
                else printf("%d ",num[i]);
            }
        }

    }

    return 0;
}
