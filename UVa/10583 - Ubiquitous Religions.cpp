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
int main()
{
    int i,j,k,l,m,tc=1,n,x,y,a,maxi,ans,bal;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;

        bal=0;
        memset(visited,false,sizeof visited);
        maxi = 0;
        //scanf("%d %d",&n,&m);
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
                bal++;
                //cout<<"a : "<<a<<endl;
            }
        }
        //cout<<"maxi : "<<maxi<<endl;
        //ans = (n-maxi);
        printf("Case %d: %d\n",tc,bal);
        tc++;
        for(i=0;i<mx;i++)
            v[i].clear();

    }


}
