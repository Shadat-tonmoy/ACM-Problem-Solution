#include<bits/stdc++.h>
#define inf 10000000
#define MAX 20000
using namespace std;
struct data
{
    int node,w;
    bool operator < (const data& p)const
    {
        return w>p.w;
    }
};
vector <int> e[MAX];
int cost[MAX][MAX],d[MAX],n;
int dijkstra(int src,int dst)
{
    int i,j,k,l;
    bool found = false;
    data u,v;
    priority_queue<data> q;
    for(i=0; i<n; i++)
        d[i]=inf;
    u.node = src;
    u.w = 0;
    d[src]=0;
    q.push(u);
    while(!q.empty())
    {
        u = q.top();
        q.pop();
        for(i=0; i<e[u.node].size(); i++)
        {
            v.node=e[u.node][i];
            v.w=d[u.node]+cost[u.node][v.node];
            if(d[v.node]>v.w)
            {
                d[v.node]=v.w;
                q.push(v);
            }
        }
    }
    return d[dst];
}
void reset()
{
    for(int i=0; i<=n; i++)
        e[i].clear();
}
int main()
{
    int i,j,k,l,m,S,M,T,tc,x,y,w,ans;
    while(scanf("%d",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            scanf("%d %d %d %d",&n,&m,&S,&T);
            //cin>>n>>m>>S>>T;
            for(i=0; i<m; i++)
            {
                scanf("%d %d %d",&x,&y,&w);
                //cin>>x>>y>>w;
                e[x].push_back(y);
                e[y].push_back(x);
                cost[x][y]=w;
                cost[y][x]=w;
            }
            ans=dijkstra(S,T);
            if(ans==inf)
                printf("Case #%d: unreachable\n",l);
            else printf("Case #%d: %d\n",l,ans);
            reset();
            // memset(cost,-1,sizeof cost);
        }
    }

    return 0;
}
