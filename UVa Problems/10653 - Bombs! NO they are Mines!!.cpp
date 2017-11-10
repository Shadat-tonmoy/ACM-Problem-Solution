#include<bits/stdc++.h>
using namespace std;
int mat[10000][10000],visited[10000][10000],cost[10000][10000],row,col;
int x[4]={-1,0,0,1};
int y[4]={0,1,-1,0};
void bfs (int sx,int sy)
{
    int i,j,k,ux,uy,vx,vy;
    queue <int> q;
    q.push(sx);
    q.push(sy);
    visited[sx][sy]=1;
    cost[sx][sy]=0;
    while(!q.empty())
    {
        ux = q.front();
        q.pop();
        uy = q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            vx = ux + x[i];
            vy = uy + y[i];
            if((vx>=0 && vx<=row) && (vy>=0 && vy<=col) && (cost[vx][vy]==0))
            {
                if((mat[vx][vy]==0) && (visited[vx][vy]==0))
                {
                    visited[vx][vy]=1;
                    cost[vx][vy]=cost[ux][uy]+1;
                    q.push(vx);
                    q.push(vy);
                }
            }
        }
    }
}
int main()
{
    int i,j,k,l,m,n,a,b,c,r,srcx,srcy,destx,desty;
    while(cin>>row>>col)
    {
        if(row==0 && col==0)
            break;
        memset(cost,0,sizeof cost);
        memset(visited,0,sizeof visited);
        memset(mat,0,sizeof mat);
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>r>>k;
            for(j=0;j<k;j++)
            {
                cin>>c;
                mat[r][c]=1;
            }
        }
        cin>>srcx>>srcy>>destx>>desty;
        bfs(srcx,srcy);
        printf("%d\n",cost[destx][desty]);

    }




    return 0;
}
