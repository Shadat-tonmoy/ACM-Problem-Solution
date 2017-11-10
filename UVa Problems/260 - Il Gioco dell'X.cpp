#include<bits/stdc++.h>
#define MAX 201
using namespace std;
char grid[MAX][MAX];
bool found_white=false;
bool found_black=false;
bool visited[MAX][MAX];
int n;
void dfs_for_white(int i,int j)
{
    if(found_white)
    {
        //cout<<"found white"<<endl;
        return;
    }
    if(grid[i][j]=='b')
    {
        //cout<<"found black for "<<i<<" "<<j<<endl;
        return;
    }
    if(i>n-1 || i<0 || j>n-1 || j<0)
    {
        //cout<<"out of range for "<<i<<" "<<j<<endl;
        return;
    }
    if(grid[i][j]=='w' && j==n-1)
    {
        //cout<<"found white for "<<i<<" "<<j<<endl;
        found_white=true;
        return;
    }
    if(!visited[i][j])
    {
        visited[i][j]=1;
        dfs_for_white(i,j+1);
        dfs_for_white(i+1,j+1);
        dfs_for_white(i-1,j);
        dfs_for_white(i+1,j);
        dfs_for_white(i,j-1);
        dfs_for_white(i-1,j-1);
        return;
    }
}
/*void dfs_for_black(int i,int j)
{
    if(found_black)
    {
        //cout<<"found white"<<endl;
        return;
    }
    if(grid[i][j]=='w')
    {
        //cout<<"found black for "<<i<<" "<<j<<endl;
        return;
    }
    if(i>n-1 || i<0 || j>n-1 || j<0)
    {
        //cout<<"out of range for "<<i<<" "<<j<<endl;
        return;
    }
    if(grid[i][j]=='b' && i==n-1)
    {
        //cout<<"found white for "<<i<<" "<<j<<endl;
        found_black=true;
        return;
    }
    if(!visited[i][j])
    {
        visited[i][j]=1;
        dfs_for_black(i,j+1);
        dfs_for_black(i+1,j+1);
        dfs_for_black(i-1,j);
        dfs_for_black(i+1,j);
        return;
    }
}*/
int main()
{
    int i,j,k,l,m,tc=1,x,y,node,edge,max_node,ans;
    while(cin>>n)
    {
        if(n==0)
            break;
        memset(visited,0,sizeof visited);
        found_white=false;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                cin>>grid[i][j];
        for(i=0; i<n; i++)
        {
            if(grid[i][0]=='w' && !found_white)
            {
                //cout<<"dfs will be called"<<endl;
                dfs_for_white(i,0);
            }

        }
        if(found_white)
            printf("%d W\n",tc);
        else printf("%d B\n",tc);
        tc++;
        /*memset(visited,0,sizeof )
        for(i=0; i<n; i++)
        {
            if(grid[i][0]=='b' && !found_black)
            {
                //cout<<"dfs will be called"<<endl;
                dfs_for_black(i,0);
            }

        }*/
        //cout<<found_black<<endl;


    }

    return 0;
}
/*4
bbwb
wwbw
bbwb
bwww
4
bbwb
wwbw
bwwb
wwbb
*/
