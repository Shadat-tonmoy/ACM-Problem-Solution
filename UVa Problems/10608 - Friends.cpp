#include<bits/stdc++.h>
using namespace std;
#define mx 500055
bool visited [mx];
vector <int> v[mx];
int bfs (int src)
{
    int c=1,frnt,sz,i,tp;
    //memset(visited,false,sizeof visited);
    queue <int> q;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        frnt = q.front();
        q.pop();
        sz = v[frnt].size();
        for(i=0; i<sz; i++)
        {
            tp = v[frnt][i];
            if(!visited[tp])
            {
                c++;
                visited[tp]=true;
                q.push(tp);
            }
        }
    }
    return c;
    //cout<<c<<endl;


}
/*int _find (int r)
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
        freq[u]++;
        printf("Freq[%d] : %d\n",u,freq[u]);
        if(freq[u]>maxi)
            maxi=freq[u];

    }
    printf("After union %d : %d, %d : %d\n",a,par[a],b,par[b]);
}*/

int main()
{
    int i,j,k,l,m,tc,n,x,y,a,maxi;
    scanf("%d",&tc);
    for(l=1; l<=tc; l++)
    {
        memset(visited,false,sizeof visited);
        maxi = 0;
        scanf("%d %d",&n,&m);
        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(i=1; i<=n; i++)
        {
            //cout<<visited[i]<<endl;
            if(!visited[i])
            {
                a=bfs(i);
                if(a>maxi)
                    maxi=a;
            }
        }
        if(maxi==1)
            maxi = 0;
        printf("%d\n",maxi);
        for(i=0;i<mx;i++)
            v[i].clear();
    }


}
