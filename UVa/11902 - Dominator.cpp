#include<bits/stdc++.h>
using namespace std;
vector<int> graph[105];
int avoid;
bool found = false;
bool visited[105];
bool visited2[105];
bool trace[105][105];
char output[105][105];
void dfs(int src,int dst)
{
    //cout<<"src : "<<src<<" dst : "<<dst<<endl;
    if(found)
    {
        //cout<<"already found"<<endl;
        return;
    }

    if(src==dst)
    {
        //cout<<"found for "<<src<<" "<<endl;
        found = true;
        return;
    }
    if(src==avoid)
    {
        //cout<<"avoid"<<endl;
        return;
    }
    int i,j,k,node;
    for(i=0; i<graph[src].size(); i++)
    {
        node = graph[src][i];
        if(!visited[node])
        {
            //cout<<"not visited : "<<node<<endl;
            visited[node]=1;
            dfs(node,dst);
        }
    }

}
void dfs2(int src)
{
    if(visited2[src])
    {
        //cout<<"already visited "<<src<<endl;
        return;
    }
    visited2[src]=1;
    trace[0][src]=1;
    for(int i=0; i<graph[src].size(); i++)
    {
        int node = graph[src][i];
        //cout<<"node : "<<node<<endl;
        //cout<<"not visited node : "<<node<<endl;
        dfs2(node);
    }

}
int main()
{
    int i,j,k,l,m,n,node,edge,src,dst,tc;
    while(scanf("%d",&tc)==1)
    {
        for(l=1; l<=tc; l++)
        {
            scanf("%d",&node);//cin>>node;
            for(i=0; i<node; i++)
            {
                for(j=0; j<node; j++)
                {
                    scanf("%d",&n);//cin>>n;
                    if(n==1)
                        graph[i].push_back(j);
                }
            }
            /*for(i=0; i<node; i++)
            {
                cout<<i<<"----->";
                for(j=0; j<graph[i].size(); j++)
                {
                    cout<<graph[i][j]<<" ";
                }
                cout<<endl;
            }*/
            memset(trace,0,sizeof trace);
            memset(visited2,0,sizeof visited2);
            dfs2(0);
            /*for(i=0; i<node; i++)
            {
                cout<<0<<"----->"<<i<<"   "<<trace[0][i]<<endl;
            }*/
            /*while(cin>>src>>dst)
            {
                memset(visited,0,sizeof visited);
                found=false;
                dfs(src,dst);
                cout<<found<<endl;
            }*/
            for(i=0; i<node; i++)
            {
                for(j=0; j<node; j++)
                {
                    found=false;
                    memset(visited,0,sizeof visited);
                    src = 0;
                    dst = j;
                    avoid = i;
                    if(avoid==0)
                    {
                        if(trace[src][dst])
                        {
                            output[i][j]='Y';
                        }
                        else output[i][j]='N';
                    }
                    else if(avoid==dst)
                    {
                        if(trace[src][dst])
                        {
                            output[i][j]='Y';
                        }
                        else output[i][j]='N';
                    }
                    else if(trace[src][dst])
                    {
                        dfs(src,dst);
                        if(found)
                            output[i][j]='N';
                        else output[i][j]='Y';
                    }
                    else
                    {
                        output[i][j]='N';
                        //cout<<"else "<<endl;
                    }
                }
            }
            printf("Case %d:\n",l);
            for(i=0; i<node; i++)
            {
                if(i==0)
                {
                    printf("+");//cout<<"+";
                    for(k=1; k<=(2*node)-1; k++)
                        printf("-");//cout<<"-";
                    printf("+\n");//cout<<"+"<<endl;
                }
                for(j=0; j<node; j++)
                {
                    if(j==0)
                        printf("|");//cout<<"|";
                    cout<<output[i][j]<<"|";
                }
                printf("\n+");//cout<<endl;
                //cout<<"+";
                for(k=1; k<=(2*node)-1; k++)
                    printf("-");//cout<<"-";
                printf("+\n");
            }
            for(i=0; i<=node; i++)
                graph[i].clear();

        }
        /*while(cin>>src>>dst>>avoid)
        {
        found=false;
        memset(visited,0,sizeof visited);
        dfs(src,dst);
        cout<<found<<endl;

        }*/

    }

    return 0;
}

/*
5
0 1 1 0 0
0 0 0 1 0
0 0 0 1 0
0 0 0 0 1
0 0 0 0 0

5
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
0 0 0 0 0
1 1 0 0 1
*/
