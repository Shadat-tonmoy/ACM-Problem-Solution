#include<bits/stdc++.h>
using namespace std;
vector <int> e[1005];
map <int,int> level;
void bfs(int src)
{
    int i,top,frnt,j;
    queue<int> q;
    bool visited [1005];
    memset(visited,false,sizeof visited);
    q.push(src);
    visited[src]=true;
    top = q.front();
    level[top]=0;
    while(!q.empty())
    {
        top = q.front();
        q.pop();
        for(i=0;i<e[top].size();i++)
        {
            frnt = e[top][i];
            if(!visited[frnt])
            {
                visited[frnt]=1;
                level[frnt]=level[top]+1;
                q.push(frnt);

            }
        }
    }
}

int main()
{
    int i,j,k,l,m,n,ans,tc,cc,x,y;
    bool blank = false;
    while(scanf("%d",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%d %d",&n,&m);
            for(i=1;i<=m;i++)
            {
                scanf("%d %d",&x,&y);
                e[x].push_back(y);
                e[y].push_back(x);
            }
            bfs(0);
            if(blank)
                cout<<endl;
            blank=true;
            for(i=1;i<=n;i++)
            {
                if(level[i]!=0)
                    printf("%d\n",level[i]);

            }
            level.clear();
            for(i=0;i<1005;i++)
                e[i].clear();

        }
    }










    return 0;

}
