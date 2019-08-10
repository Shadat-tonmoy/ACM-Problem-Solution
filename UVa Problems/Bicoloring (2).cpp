#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,k,l,m,n,node,edge,x,y,a,b,top,q_front,source,color[250],s,flag;
    vector <int> e[250];
    queue <int> q;
    while(cin>>node)
    {
        if(node==0)
            break;
        cin>>edge;
        memset(color,-1,sizeof color);
        for(i=1; i<=edge; i++)
        {
            cin>>x>>y;
            e[x].push_back(y);
            e[y].push_back(x);
        }
        source = e[1][0];
        q.push(source);
        top = q.front();
        color[top] = 1;
        flag=0;
        while(!q.empty())
        {
            s = e[top].size();
            for(i=s-1; i>=0; i--)
            {
                int conn = e[top].at(i);
                if(color[conn]==-1)
                {
                    if(color[top]==1)
                    {
                        color[conn]=0;
                        flag=0;
                        q.push(conn);
                    }
                    else if(color[top]==0)
                    {
                        color[conn]=1;
                        flag=0;
                        q.push(conn);
                    }
                }
                else
                {
                    if(color[top]==color[conn])
                    {
                        flag=1;
                        break;
                    }
                    else flag=0;
                }
            }
            if(flag==1)
                break;
            q.pop();
            top=q.front();
        }
        if(flag==1)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else if(flag==0)
        {
            cout<<"BICOLORABLE."<<endl;
        }
        while(!q.empty())
            q.pop();
        memset(e,0,sizeof e);
    }
    return 0;
}
