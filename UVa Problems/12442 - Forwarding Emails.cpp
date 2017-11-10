#include<bits/stdc++.h>
#define MAX 500000
using namespace std;
bool visited[MAX],visited2[MAX];
int graph[MAX];
int dfs(int src)
{
    int c=0;
    visited2[src]=1;
    int cnt = graph[src];
    if(!visited2[cnt])
    {
        c = dfs(cnt)+1;
    }
    visited[src]=1;
    visited2[src]=0;
    //printf("Src is : %d c is : %d\n",src,c);
    return c;
}
int main()
{
    int i,j,k,l,m,n,tc,x,y,node,edge,max_node,ans;
    while(cin>>tc)
    {
        for(l=1; l<=tc; l++)
        {
            memset(visited,0,sizeof visited);
            int maxi = -1;
            cin>>edge;
            for(i=0; i<edge; i++)
            {
                cin>>x>>y;
                graph[x]=y;
            }
            /*for(i=1; i<=edge; i++)
            {
                cout<<i<<"--->";
                for(j=0; j<graph[i].size(); j++)
                    cout<<graph[i][j]<<" ";
                cout<<endl;
            }*/
            for(i=1; i<=edge; i++)
            {
                if(!visited[i])
                    ans = dfs(i);
                if(ans>maxi)
                {
                    maxi=ans;
                    max_node = i;
                }
                //cout<<"for : "<<i<<" "<<ans<<endl;
            }
            printf("Case  %d:  %d\n",l,max_node);
        }
    }

    return 0;
}
