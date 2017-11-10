#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,tc,sz,xv;
    string src,dst,frnt,top,x,y,pth;
    map <string,int> level;
    map <string, vector <string> > data;
    map <string,int> visited;
    vector <string> path;
    queue <string> q;
    while(scanf("%d",&tc)==1)
    {
        while(tc--)
        {
            scanf("%d %d",&m,&n);//cin>>m>>n;
            for(i=0; i<m; i++)
            {
                cin>>x>>y;
                data[x].push_back(y);
                data[y].push_back(x);
            }
            for(k=1; k<=n; k++)
            {
                cin>>src>>dst;
                q.push(src);
                frnt = q.front();
                visited[src]=1;
                level[frnt]=0;
                while(!q.empty())
                {
                    frnt = q.front();
                    q.pop();
                    sz = data[frnt].size();
                    for(i=0; i<sz; i++)
                    {
                        top = data[frnt][i];
                        if(!visited[top])
                        {
                            visited[top]=1;
                            level[top]=level[frnt]+1;
                            q.push(top);
                        }
                    }
                }
                //cout<<level[dst]<<endl;
                path.push_back(dst);
                int bb = level[dst];
                for(i=1; i<=bb; i++)
                {
//                cout<<lev[i][0]<<" : "<<;
                    for(j=0; j<data[dst].size(); j++)
                    {
                        string tmp = data[dst][j];
                        if(level[tmp]==level[dst]-1)
                        {
                            path.push_back(tmp);
                            dst =  tmp;
                            break;
                        }
                    }
                }
                for(i=path.size()-1; i>=0; i--)
                    cout<<path[i][0];
                printf("\n");
                while(!q.empty())
                    q.pop();
                visited.clear();
                path.clear();
                level.clear();
            }
            if(tc!=0)
                printf("\n");
            data.clear();
        }

    }







    return 0;
}

