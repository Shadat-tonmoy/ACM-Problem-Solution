#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
vector <int> e[MAX];
vector <int> node;
map<int,int> deg;
set<int> st;
set<int> :: iterator it;
bool visited[MAX];
int color[MAX];
void reset()
{
    deg.clear();
    st.clear();
    node.clear();
    for(int i=0; i<MAX; i++)
    {
        if(!e[i].empty())
            e[i].clear();
        else break;
    }


}
void bfs(int src)
{
    int i,j,top,frnt;
    queue<int> q;
    q.push(src);
    top = q.front();
    visited[top]=1;
    color[top]=0;
    while(!q.empty())
    {
        top = q.front();
        q.pop();
        for(i=0; i<e[top].size(); i++)
        {
            frnt = e[top][i];
            if(!visited[frnt])
            {
                visited[frnt]=1;
                color[frnt]=1;
            }
        }
    }
}

int main()
{
    int i,j,k,l,m,n,tc,x,y,one,zero,ans;
    while(scanf("%d",&tc)==1)
    {

        for(l=1; l<=tc; l++)
        {
            memset(visited,0,sizeof visited);
            one = 0;
            zero = 0;
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
                scanf("%d %d",&x,&y);
                e[x].push_back(y);
                e[y].push_back(x);
                st.insert(x);
                st.insert(y);
                deg[x]++;
                deg[y]++;
            }
            for(it=st.begin(); it!=st.end(); it++)
                node.push_back(*it);
            for(i=0; i<node.size(); i++)
            {
                for(j=i+1; j<node.size(); j++)
                {
                    if(deg[node[i]]<deg[node[j]])
                        swap(node[i],node[j]);
                }
            }
            for(i=0; i<node.size(); i++)
            {
                if(!visited[node[i]])
                    bfs(node[i]);
                //else break;
                //cout<<node[i]<<" -> "<<deg[node[i]]<<endl;

            }
            for(i=0; i<node.size(); i++)
            {
                //cout<<node[i]<<" -> "<<color[node[i]]<<endl;
                if(color[node[i]]==0)
                    zero++;
                else one++;
            }
            ans = max(zero,one);
            printf("Case %d: %d\n",l,ans);
            reset();


        }
    }



    return 0;
}
