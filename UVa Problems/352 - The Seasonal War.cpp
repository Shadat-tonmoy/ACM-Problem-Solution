#include<bits/stdc++.h>
using namespace std;
char grid [30][30];
int x[8]= {1,0,-1,0,1,-1,-1,1};
int y[8]= {0,1,0,-1,1,-1,1,-1};
int n;
void bfs(int srcx,int srcy)
{
    int i,j,k,l,m,ux,uy,vx,vy;
    queue<int> q;
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
            if((vx>=0 && vx<n) && (vy>=0 && vy<n) && (grid[vx][vy]=='1'))
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
    int i,j,k,l,m,c=0,tc=1;
    while(cin>>n)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    c++;
                    bfs(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",tc++,c);
    }

    return 0;
}
