#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k,l,m,n,a,b,c,d,x,y,z,tc,ans,len,t,row,col,ar,ac,br,bc,cr,cc,hr,hc,ta,tb,initNodes[10000];
    char str[10000],grid[100][100],ch;
    while(cin>>tc)
    {
        for(x=1; x<=tc; x++)
        {
            cin>>k>>n>>m;
            vector<int> graph[10005],reachable[10005];
            set<int> commonReach;
            queue<int> q;
            for(i=0;i<k;i++)
                cin>>initNodes[i];
            for(i=0;i<m;i++)
            {
                cin>>a>>b;
                graph[a].push_back(b);
            }
            /*for(i=1;i<=n;i++)
            {
                printf("Connected with node %d--->\n",i);
                for(j=0;j<graph[i].size();j++)
                {
                    printf("%d, ",graph[i][j]);
                }
                printf("\n");
            }*/
            int miniLen = 99999999;
            int startIndex = -1;
            for(y=0;y<k;y++)
            {
                //printf("Starting from %d\n",initNodes[y]);
                bool visited[1005] = {false};
                q.push(initNodes[y]);
                visited[initNodes[y]]=true;
                reachable[initNodes[y]].push_back(initNodes[y]);
                while(!q.empty())
                {
                    int frontNode = q.front();
                    //printf("Front Node %d\n",frontNode);
                    for(i=0;i<graph[frontNode].size();i++)
                    {
                        if(!visited[graph[frontNode][i]])
                        {
                            //printf("Non-Visited Node %d\n",graph[frontNode][i]);
                            visited[graph[frontNode][i]] = true;
                            q.push(graph[frontNode][i]);
                            reachable[initNodes[y]].push_back(graph[frontNode][i]);

                        }
                    }
                    q.pop();
                }
            }
            //printf("Minimum Size %d\n",startIndex);
            ans = 0;
            for(y=1;y<=n;y++)
            {
                int found = 0;
                for(i=0;i<k;i++)
                {
                    for(j=0;j<reachable[initNodes[i]].size();j++)
                    {
                        int reach = reachable[initNodes[i]][j];
                        if(reach==y)
                        {
                            found++;;
                            //printf("Found %d at %d\n",y,initNodes[i]);
                            break;
                        }
                    }
                }
                if(found==k)
                    ans++;
            }
            printf("Case %d: %d\n",x,ans);

        }


    }
    return 0;
}
/*1
2 4 4
2
3
1 2
1 4
2 3
3 4*/

