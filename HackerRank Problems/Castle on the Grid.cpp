#include<bits/stdc++.h>
#define MAX 100005
using namespace std;
struct node
{
    int x=-1;
    int y=-1;
};
int main()
{
    int i,j,k,l,m,n,c,t,d,x,y,startX,startY,endX,endY;
    char grid[150][150],ch;
    while(cin>>n)
    {
        queue<node> q;
        map< pair<int,int>,bool> visited;
        map< pair<int,int>,int> level;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>ch;
                grid[i][j]=ch;
            }
        }
        cin>>startX>>startY>>endX>>endY;
        node myNode;
        myNode.x = startX;
        myNode.y = startY;
        q.push(myNode);
        while(!q.empty())
        {
            //cout<<q.size()<<endl;
            node frontNode = q.front();
            q.pop();
            x = frontNode.x;
            y = frontNode.y;
            //printf("Front Node x y %d %d\n",x,y);
            visited[make_pair(x,y)] = true;
            node currentNode;
            for(i=x+1; i<n; i++)
            {
                //printf("inside x y %d %d and %c\n",i,y,grid[i][y]);

                if(!visited[make_pair(i,y)] && grid[i][y]=='.')
                {
                    currentNode.x = i;
                    currentNode.y = y;
                    visited[make_pair(i,y)]=true;
                    q.push(currentNode);
                    level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                }
                else if(grid[i][y]=='X')
                {
                    //printf("breaking....\n");
                    break;
                }
            }
            //printf("Current Node (Down) 1 %d %d\n",currentNode.x,currentNode.y);
            /*if(currentNode.x!=-1 && currentNode.y!=-1)
            {
                q.push(currentNode);
                level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                //printf("For leveling...%d %d Front is %d %d\n",i,y,frontNode.x,frontNode.y);
                //cout<<"L"<<endl;
            }*/
            currentNode.x=-1;
            currentNode.y=-1;
            for(i=x-1; i>=0; i--)
            {
                if(!visited[make_pair(i,y)] && grid[i][y]=='.')
                {
                    currentNode.x = i;
                    currentNode.y = y;
                    visited[make_pair(i,y)]=true;
                    q.push(currentNode);
                    level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                    //printf("Updating to True for %d %d\n",i,y);
                }
                else if(grid[i][y]=='X')
                    break;
            }
            //printf("Current Node (UP) 2 %d %d for frontNode %d %d\n",currentNode.x,currentNode.y,frontNode.x,frontNode.y);
            //printf("Values %d %d\n",currentNode.x,currentNode.y);
            /*if(currentNode.x!=-1 && currentNode.y!=-1)
            {
                q.push(currentNode);
                level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                //cout<<"LUFFING"<<endl;
                //printf("Values %d %d\n",currentNode.x,currentNode.y);
                //break;
            }*/

            currentNode.x=-1;
            currentNode.y=-1;
            for(i=y+1; i<n; i++)
            {

                if(!visited[make_pair(x,i)] && grid[x][i]=='.')
                {
                    currentNode.x = x;
                    currentNode.y = i;
                    visited[make_pair(x,i)]=true;
                    q.push(currentNode);
                    level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                }
                else if(grid[x][i]=='X')
                    break;
            }
            //printf("Current Node (Right) 3 %d %d\n",currentNode.x,currentNode.y);
            /*if(currentNode.x!=-1 && currentNode.y!=-1)
            {
                q.push(currentNode);
                level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                //cout<<"L"<<endl;
            }*/

            currentNode.x=-1;
            currentNode.y=-1;
            for(i=y-1; i>=0; i--)
            {

                if(!visited[make_pair(x,i)] && grid[x][i]=='.')
                {
                    currentNode.x = x;
                    currentNode.y = i;
                    visited[make_pair(x,i)]=true;
                    q.push(currentNode);
                    level[make_pair(x,i)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                    //cout<<"L"<<endl;
                }
                else if(grid[x][i]=='X')
                    break;
            }
            //printf("Current Node (Left) 4 %d %d\n",currentNode.x,currentNode.y);
            /*if(currentNode.x!=-1 && currentNode.y!=-1)
            {
                q.push(currentNode);
                level[make_pair(currentNode.x,currentNode.y)] = level[make_pair(frontNode.x,frontNode.y)]+1;
                //cout<<"L"<<endl;
            }*/
        }
        /*for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d %d level is %d\n",i,j,level[make_pair(i,j)]);
            }
        }*/
        cout<<level[make_pair(endX,endY)]<<endl;








    }


}












