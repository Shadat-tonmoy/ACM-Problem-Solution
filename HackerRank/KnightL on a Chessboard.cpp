#include<bits/stdc++.h>
using namespace std;
struct cell
{
    int x,y;
} grid[25];
int main()
{
    int i,j,k,l,m,n,a,b,c,x,y,z,xi,yi;
    while(cin>>n)
    {
        for(xi=1; xi<n; xi++)
        {
            for(yi=1; yi<n; yi++)
            {
                queue<cell> q;
                map<pair<int,int> ,int> visited,distance;
                visited[make_pair(0,0)] = 0;
                distance[make_pair(0,0)] = 0;
                grid[0].x = 0;
                grid[0].y = 0;
                q.push(grid[0]);
                while(!q.empty())
                {
                    cell frontCell = q.front();
                    q.pop();
                    x = frontCell.x;
                    y = frontCell.y;
                    //printf("\t x = %d y = %d\n",x,y);
                    if((x+xi>=0 && x+xi<n) && (y+yi>=0 && y+yi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x+xi;
                        tmpCell.y = y+yi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x+yi>=0 && x+yi<n) && (y+xi>=0 && y+xi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x+yi;
                        tmpCell.y = y+xi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x+xi>=0 && x+xi<n) && (y-yi>=0 && y-yi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x+xi;
                        tmpCell.y = y-yi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x-yi>=0 && x-yi<n) && (y+xi>=0 && y+xi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x-yi;
                        tmpCell.y = y+xi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x-xi>=0 && x-xi<n) && (y+yi>=0 && y+yi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x-xi;
                        tmpCell.y = y+yi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x+yi>=0 && x+yi<n) && (y-xi>=0 && y-xi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x+yi;
                        tmpCell.y = y-xi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x-xi>=0 && x-xi<n) && (y-yi>=0 && y-yi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x-xi;
                        tmpCell.y = y-yi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                    if((x-yi>=0 && x-yi<n) && (y-xi>=0 && y-xi<n))
                    {
                        cell tmpCell;
                        tmpCell.x = x-yi;
                        tmpCell.y = y-xi;
                        if(!visited[make_pair(tmpCell.x,tmpCell.y)])
                        {
                            q.push(tmpCell);
                            visited[make_pair(tmpCell.x,tmpCell.y)] = 1;
                            distance[make_pair(tmpCell.x,tmpCell.y)] = distance[make_pair(x,y)] + 1;
                        }
                    }
                }
                if(distance[make_pair(n-1,n-1)]==0)
                    distance[make_pair(n-1,n-1)]=-1;
                printf("%d ",distance[make_pair(n-1,n-1)]);
            }
            cout<<endl;

        }







    }

}
