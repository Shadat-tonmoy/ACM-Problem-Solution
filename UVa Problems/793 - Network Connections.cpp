#include<bits/stdc++.h>
using namespace std;
int par[100005];
int _find(int r)
{
    if(par[r]==r)
        return r;
    return par[r]=_find(par[r]);
}
void _union (int a,int b)
{
    int u,v;
    u = _find(a);
    v = _find(b);
    if(u!=v)
    {
        par[v]=u;
    }

}
int main()
{
    int i,j,k,l,m,tc,n,x,y,unsc,sc;
    char cmd;
    bool blank = false;
    while(scanf("%d",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            unsc = 0;
            sc = 0;
            scanf("%d",&n);
            getchar();
            for(i=1; i<=n; i++)
                par[i]=i;
            while ((cmd = getchar ()) && isalpha (cmd))
            {
                scanf("%d %d",&x,&y);
                getchar();
                if(cmd=='c')
                {
                    _union(x,y);
                }
                else
                {
                    if(_find(x)==_find(y))
                    {
                        sc++;
                    }
                    else
                    {
                        unsc++;
                    }


                }
            }
            if(blank)
                printf("\n");
            blank=true;
            printf("%d,%d\n",sc,unsc);


        }
    }

}
