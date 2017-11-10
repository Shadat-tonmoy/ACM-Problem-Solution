#include<bits/stdc++.h>
using namespace std;
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
char grid[21][21];
int row,col;
int bfs (int srcx,int srcy)
{
    int i,j,ux,uy,vx,vy,c=0;
    queue<int> q;
    q.push(srcx);
    q.push(srcy);
    while(!q.empty())
    {
        ux = q.front();
        q.pop();
        uy = q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            vx = ux+x[i];
            vy = uy+y[i];
            if((vx>=0 && vx<row) && (vy>=0 && vy<col) && (grid[vx][vy]=='.'))
            {
                c++;
                q.push(vx);
                q.push(vy);
                grid[vx][vy]='*';
            }
        }
    }
    while(!q.empty())
        q.pop();
    return c;

}
int main()
{
    int i,j,k,l,m,n,tc,x,y,ans;
    while(scanf("%d",&tc)==1)
    {
        for(l=1;l<=tc;l++)
        {
            scanf("%d %d",&col,&row);
            for(i=0;i<row;i++)
            {
                for(j=0;j<col;j++)
                {
                   cin>>grid[i][j];
                   if(grid[i][j]=='@')
                   {
                       x = i;
                       y = j;

                   }
                }
            }
            ans = bfs(x,y);
            printf("Case %d: %d\n",l,ans+1);

        }
    }
    return 0;

}
