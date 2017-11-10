#include<bits/stdc++.h>
#define MAX 1005
using namespace std;
struct edge{
    int u,v,cost;
    bool operator < (const edge& p)const
    {
        return cost< p.cost;
    }

};
vector <edge> e;
vector <int> ans;
int par[MAX];
int _find(int r)
{
    if(par[r]==r)
        return r;
    else return par[r]=_find(par[r]);
}
void mst(int n)
{
    int i,j,k,l,u,v;
    for(i=0;i<n;i++)
        par[i]=i;
    sort(e.begin(),e.end());
    /*for(i=0;i<(int)e.size();i++)
    {
        cout<<e[i].u<<"-----"<<e[i].v<<" cost = "<<e[i].cost<<endl;
    }*/
    for(i=0;i<(int)e.size();i++)
    {
        u = _find(e[i].u);
        v = _find(e[i].v);
        if(u!=v)
            par[u]=v;
        else
            ans.push_back(e[i].cost);//printf("Heady Weighted Edge : %d\n",e[i].cost);
    }
}
int main()
{
    int i,j,k,l,m,n,node,ege,x,y,w;
    while(cin>>node>>ege)
    {
        if(node==0 && ege==0)
            break;
        for(i=0;i<ege;i++)
        {
            cin>>x>>y>>w;
            edge get;
            get.u = x;
            get.v = y;
            get.cost = w;
            e.push_back(get);
        }
        mst(node);
        if(ans.empty())
            printf("forest\n");
        else
        {
            for(i=0;i<ans.size();i++)
            {
                if(i==ans.size()-1)
                    printf("%d\n",ans[i]);
                else printf("%d ",ans[i]);
            }
        }
        e.clear();
        ans.clear();
        memset(par,-1,sizeof par);
    }

    return 0;
}
