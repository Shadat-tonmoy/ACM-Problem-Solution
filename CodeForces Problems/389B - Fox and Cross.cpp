#include<bits/stdc++.h>
using namespace std;
char grid[100][100];
int n;
/*void bfs(int srcx,int srcy)
{
    int i,j,k,l,ux,uy,vx,vy;
    queue<int> q;
    q.push(srcx);
    q.push(srcy);
    while(!q.empty())
    {
        ux = q.front();
        q.pop();
        uy= q.front();
        q.pop();
        for(i=0;i<4;i++)
        {
            vx = ux+x[i];
            vy = uy+y[i];
            if((vx>=0 && vy>=0) && (vx<n && vy<n) && (grid[vx][vy]=='#'))
            {
                grid[vx][vy]='*';
                q.push(vx);
                q.push(vy);
            }

        }
    }
}*/
int main()
{
    int i,j,k,l,m,a,b,c;
    char ch;
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
                if((grid[i][j]=='#') && (grid[i][j+1]=='#') && (grid[i][j-1]=='#') && (grid[i+1][j]=='#') &&(grid[i-1][j]=='#'))
                {
                    grid[i][j]='*';
                    grid[i][j+1]='*';
                    grid[i][j-1]='*';
                    grid[i+1][j]='*';
                    grid[i-1][j]='*';
                }
            }
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }*/
        bool found = false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]=='#')
                {
                    found=true;
                    break;
                }
            }
            if(found)
                break;
        }
        if(found)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }




}

