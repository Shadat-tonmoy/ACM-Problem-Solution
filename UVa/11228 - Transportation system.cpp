#include<bits/stdc++.h>
#define lli long long int
#define MAX 500000
using namespace std;
lli par[MAX],n;
void reset()
{
    int i;
    for(i=0;i<n;i++)
        par[i]=i;
}
struct node {
    lli u,v;
    double cost;
};
struct point{
    lli x,y;
};
bool comp(node x,node y)
{
    return x.cost<y.cost;
}
point arr[MAX];
node edge[MAX];
int _find(int r)
{
    if(par[r]==r)
        return r;
    else
    {
        return par[r]=_find(par[r]);
    }
}
double cal(lli x1,lli y1,lli x2,lli y2)
{
    double dis,x,y;
    //cout<<"Bal : "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    x=(double)(pow((x1-x2),2));
    y=(double)(pow((y1-y2),2));
    //cout<<x<<" "<<y<<endl;
    dis = sqrt(x+y);
    return dis;
}

int main()
{
    int i,j,k,l,m,tc,max_cost,c=0,city,state,x,y;
    double dis,rail_cost,road_cost;
    while(cin>>tc)
    {
        for(l=1;l<=tc;l++)
        {
            c=0;
            cin>>n>>max_cost;
            for(i=0;i<n;i++)
                cin>>arr[i].x>>arr[i].y;
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    dis = cal(arr[i].x,arr[i].y,arr[j].x,arr[j].y);
                    //cout<<dis<<endl;
                    edge[c].u = i;
                    edge[c].v = j;
                    edge[c].cost = dis;
                    c++;
                }
            }
            sort(edge,edge+c,comp);
            city=0;
            state=1;
            rail_cost=0;
            road_cost=0;
            reset();
            for(i=0;i<c;i++)
            {
                x = _find(edge[i].u);
                y = _find(edge[i].v);
                if(x!=y && edge[i].cost>max_cost)
                {
                    par[x]=y;
                    state++;
                    rail_cost+=edge[i].cost;
                }
                else if(x!=y)
                {
                    par[x]=y;
                    city++;
                    road_cost+=edge[i].cost;
                }
                //cout<<edge[i].u<<" "<<edge[i].v<<" "<<edge[i].cost<<endl;

            }
            printf("Case #%d: ",l);
            cout<<state<<" "<<round(road_cost)<<" "<<round(rail_cost)<<endl;


        }
    }


    return 0;
}
