#include<bits/stdc++.h>
using namespace std;
int x[8]={1,0,-1,0,1,-1,-1,1};
int y[8]={0,1,0,-1,1,-1,1,-1};
int row,col;
char grid [100][100];
void bfs (int srcx,int srcy)
{
    int i,j,k,ux,uy,vx,vy;
    queue <int> q;
    q.push(srcx);
    q.push(srcy);
    while(!q.empty())
    {
        ux = q.front();
        q.pop();
        uy = q.front();
        q.pop();
        for(i=0;i<8;i++)
        {
            vx = ux + x[i];
            vy = uy + y[i];
            if((vx>=0 && vx<=row) && (vy>=0 && vy<=col) && (grid[vx][vy]=='@'))
            {
                grid[vx][vy]='*';
                q.push(vx);
                q.push(vy);
            }
        }
    }

}
int main()
{
    int i,j,k,l,m,n,c=0;
    while(cin>>row>>col)
    {
        if(row==0)
            break;
        c=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                cin>>grid[i][j];
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j]=='@')
                {
                    c++;
                    bfs(i,j);
                }
            }
        }
        cout<<c<<endl;
    }




    return 0;
}
