#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
double x[100],y[100];
double cal(double x1,double y1,double x2,double y2)
{
    double cost;
    cost = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    //printf("%lf %lf %lf %lf : ",x1,y1,x2,y2);
    //cout<<cost<<endl;
    return cost;
}
struct edge
{
    double u,v,w;
    bool operator < (const edge& p ) const
    {
        return w < p.w;
    }

};
int par[MAX];
vector <edge> e;
int _find (int r)
{
    if(par[r]==r)
        return r;
    return par[r]=_find(par[r]);

}
double mst(int n)
{
    sort(e.begin(),e.end());
    int u,v,c=0,i;
    double s=0;
    for(i=1; i<=n; i++)
        par[i]=i;
    for(i=0; i<(int)e.size(); i++)
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
main()
{
    int i,j,k,l,m,node,edge,w,tc,blank=0;
    double cost;
    while(scanf("%d",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            scanf("%d",&node);
            for(i=0; i<node; i++)
                scanf("%lf %lf",&x[i],&y[i]);
            for(i=0; i<node-1; i++)
            {
                for(j=i+1; j<node; j++)
                {
                    //printf("%lf %lf %lf %lf\n",x[i],y[i],x[j],y[j]);
                    cost = cal(x[i],y[i],x[j],y[j]);
                    //printf("%lf\n",cost);
                    struct edge get;
                    get.u = (double)i;
                    get.v = (double)j;
                    get.w = cost;
                    e.push_back(get);

                }
            }
            cost = mst(node);
            if(blank!=0)
                printf("\n");
            blank++;
            printf("%.2lf\n",cost);
            e.clear();
            memset(par,0,sizeof par);

        }
    }


    return 0;
}





