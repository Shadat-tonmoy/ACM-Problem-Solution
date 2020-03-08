#include<bits/stdc++.h>
using namespace std;
#define MAX 200002
struct edge
{
	long long int u,v,w;
	bool operator < ( const edge& p ) const
	{
		return w < p.w;
	}
};
long long int par[MAX];
vector <edge> e;
long long int _find(long long int r)
{
    if(par[r]==r)
        return r;
    return par[r]=_find(par[r]);
}
long long int mst (long long int n)
{
    long long int u,v,w,c=0,s=0,i;
    sort(e.begin(),e.end());
    for(i=0;i<=n;i++)
        par[i]=i;
    for(i=0;i<(int)e.size();i++)
    {
        u = _find(e[i].u);
        v = _find(e[i].v);
        if(u!=v)
        {
            par[u]=v;
            c++;
            s+=e[i].w;
            if(c==n-1)
                break;
        }
    }
    return s;
}
int main()
{
    long long int i,j,k,l,m,n,ee,nn,sum=0,x,y,w,ans;
    while(scanf("%lld %lld",&nn,&ee)==2)
    {
        sum=0;
        if(nn==0 && ee==0)
        {
            break;
        }
        for(i=1;i<=ee;i++)
        {
            scanf("%lld %lld %lld",&x,&y,&w);
            sum+=w;
            edge get;
            get.u = x;
            get.v = y;
            get.w = w;
            e.push_back(get);
        }
        m = mst(nn);
        ans = sum-m;
        printf("%lld\n",ans);
        e.clear();

    }
    return 0;
}
