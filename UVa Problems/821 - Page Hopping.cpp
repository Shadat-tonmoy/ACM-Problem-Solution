#include<bits/stdc++.h>
#define inf 99999
using namespace std;
int graph[200][200],node,edge,cost,dist[200][200];
set <int> nodes;
set <int> :: iterator it,it2,it3,i,j,k;
void FloyadWarshal()
{
    for(i=nodes.begin();i!=nodes.end();i++)
    {
        for(j=nodes.begin();j!=nodes.end();j++)
        {
            dist[*i][*j]=graph[*i][*j];
        }
    }
    for(k=nodes.begin();k!=nodes.end();k++)
    {
        for(i=nodes.begin();i!=nodes.end();i++)
        {
            for(j=nodes.begin();j!=nodes.end();j++)
            {
                if(dist[*i][*j]>dist[*i][*k]+dist[*k][*j])
                    dist[*i][*j]=dist[*i][*k]+dist[*k][*j];
            }
        }
    }


}

int main()
{
    int l,m,n,x,y,a,b,tc=1;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
            break;
        graph[x][y]=1;
        nodes.insert(x);
        nodes.insert(y);
        while(cin>>a>>b)
        {
            if(a==0 && b==0)
                break;
            graph[a][b]=1;
            nodes.insert(a);
            nodes.insert(b);
        }
        for(it=nodes.begin(); it!=nodes.end(); it++)
        {
            a=*it;
            for(it2=nodes.begin(); it2!=nodes.end(); it2++)
            {
                b=*it2;
                if(a==b)
                    graph[a][b]=0;
                else if(graph[a][b]!=1)
                    graph[a][b]=inf;

            }
        }
        /*cout<<nodes.size()<<endl;
        printf("\nBefore Calling Floyad Warshal : \n\n");
        for(it=nodes.begin(),l=1; it!=nodes.end(); it++,l++)
        {
            if(l==1)
                printf("%5d",*it);
            else printf("%3d",*it);
        }
        cout<<endl<<endl;
        for(it=nodes.begin(); it!=nodes.end(); it++)
        {
            printf("%3d",*it);
            for(it2=nodes.begin(); it2!=nodes.end(); it2++)
            {
                if(graph[*it][*it2]==inf)
                    printf("%3d",-1);
                else printf("%3d",graph[*it][*it2]);
            }
            cout<<endl;
        }*/
        FloyadWarshal();
        /*printf("\nAfter Calling Floyad Warshal : \n\n");
        for(it=nodes.begin(),l=1; it!=nodes.end(); it++,l++)
        {
            if(l==1)
                printf("%5d",*it);
            else printf("%3d",*it);
        }
        cout<<endl<<endl;
        for(it=nodes.begin(); it!=nodes.end(); it++)
        {
            printf("%3d",*it);
            for(it2=nodes.begin(); it2!=nodes.end(); it2++)
            {
                if(dist[*it][*it2]==inf)
                    printf("%3d",-1);
                else printf("%3d",dist[*it][*it2]);
            }
            cout<<endl;
        }*/
        int sum=0,nd=0;
        for(i=nodes.begin();i!=nodes.end();i++)
        {
            for(j=nodes.begin();j!=nodes.end();j++)
            {
                if(dist[*i][*j]!=0)
                {
                    sum+=dist[*i][*j];
                    nd++;
                }
            }
        }
        //cout<<sum<<" "<<nd<<endl;
        double ans = (double)sum/nd;
        printf("Case %d: average length between pages = %.3lf clicks\n",tc,ans);
        tc++;
        //printf("%.3lf\n",ans);
        nodes.clear();
        memset(graph,0,sizeof graph);
        memset(dist,0,sizeof dist);

    }


    return 0;
}
/*
4 6
4 3 8
4 1 20
2 3 2
3 2 5
1 2 3
2 1 2
*/
/*
4 4
1 2 5
2 3 3
3 4 1
1 4 10


*/
