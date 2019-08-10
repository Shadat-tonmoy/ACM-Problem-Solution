#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
struct edge
{
    long long  int u,v,cost;
    bool operator < (const edge& p)const
    {
        return cost< p.cost;
    }
};
vector <edge> e;
long long int par[MAX];
int _find(int r)
{
    if(par[r]==r)
        return r;
    else return par[r]=_find(par[r]);
}
long long int mst(long long int n)
{
    sort(e.begin(),e.end());
    long long int i,j,k,l,m,u,v,s=0,c=0;
    for(i=0; i<n; i++)
        par[i]=i;
    for(i=0; i<(long long int)e.size(); i++)
    {
        u = _find(e[i].u);
        v = _find(e[i].v);
        if(u!=v)
        {
            par[u]=v;
            c++;
            s+=e[i].cost;
            //if(c==n-1)
              //  break;
        }
    }
    return s;


}
int main()
{
    long long int i,j,k,l,m,n,node,ege,x,y,w,a,b;
    bool flag = true;
    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<n-1; i++)
        {
            cin>>x>>y>>w;
            edge get;
            get.u = x;
            get.v = y;
            get.cost = w;
            e.push_back(get);
        }
        a = mst(n);
        e.clear();
        memset(par,-1,sizeof par);
        cin>>k;
        for(i=0; i<k; i++)
        {
            cin>>x>>y>>w;
            edge get;
            get.u = x;
            get.v = y;
            get.cost = w;
            e.push_back(get);
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>x>>y>>w;
            edge get;
            get.u = x;
            get.v = y;
            get.cost = w;
            e.push_back(get);
        }
        b = mst(m+k);
        if(!flag)printf("\n");
        flag=false;
        printf("%lld\n%lld\n",a,b);
        e.clear();
        memset(par,-1,sizeof par);
    }

    return 0;
}
