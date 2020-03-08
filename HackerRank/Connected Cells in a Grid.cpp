#include<bits/stdc++.h>
using namespace std;
bool visited[20][20];
int maxi,len,graph[20][20],n,m;
void dfs(int i,int j)
{
    visited[i][j]=1;
    if(i+1<n && graph[i+1][j]==1 && !visited[i+1][j])
    {
        len++;
        dfs(i+1,j);
    }

    if(i-1>=0 && graph[i-1][j]==1 && !visited[i-1][j])
    {
        len++;
        dfs(i-1,j);
    }
    if(i+1<n && j+1<m && graph[i+1][j+1]==1 && !visited[i+1][j+1])
    {
        len++;
        dfs(i+1,j+1);
    }
    if(i+1<n && j-1>=0 && graph[i+1][j-1]==1 && !visited[i+1][j-1])
    {
        len++;
        dfs(i+1,j-1);
    }
    if(i-1>=0 && j+1<m && graph[i-1][j+1]==1 && !visited[i-1][j+1])
    {
        len++;
        dfs(i-1,j+1);
    }
    if(i-1>=0 && j-1>=0 && graph[i-1][j-1]==1 && !visited[i-1][j-1])
    {
        len++;
        dfs(i-1,j-1);
    }
    if(j-1>=0 && graph[i][j-1]==1 && !visited[i][j-1])
    {
        len++;
        dfs(i,j-1);
    }
    if(j+1<m && graph[i][j+1]==1 && !visited[i][j+1])
    {
        len++;
        dfs(i,j+1);
    }

}
int main()
{
    int i,j,k,l,a,b,c,d;
    while(cin>>n>>m)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>graph[i][j];
            }
        }
        memset(visited,0,sizeof(visited));
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(graph[i][j]==1 && !visited[i][j])
                {
                    len = 1;
                    dfs(i,j);
                    maxi = max(maxi,len);
                }
            }
        }
        cout<<maxi<<endl;
    }

}
