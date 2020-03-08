#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c,row,col,start,x,y,ans;
    bool visited[100][100],found;
    int ins[100][100];
    char grid [100][100];
    while(cin>>row>>col>>start)
    {
        if(row==0 && col==0 && start==0)
            break;
        for(i=0;i<=100;i++)
        {
            memset(visited[i],0,sizeof visited[i]);
        }
        c=1;
        found = false;
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=col;j++)
                cin>>grid[i][j];

        }
        x=1;
        y=start;
        ins[x][y]=c;
        visited[x][y]=1;
        while(1)
        {
            if(grid[x][y]=='N')
                x--;
            else if (grid[x][y]=='S')
                x++;
            else if (grid[x][y]=='E')
                y++;
            else if (grid[x][y]=='W')
                y--;
            c++;
            if((x<1 || x>row) || (y<1 || y>col))
            {
                ans = c;
                found = true;
                break;
            }
            if(!visited[x][y])
            {
                visited[x][y]=1;
                ins[x][y]=c;
                b = ins[x][y];
            }
            else
            {
                a = ins[x][y];
                break;
            }
        }
        if(found)
        {
            printf("%d step(s) to exit\n",ans-1);
            //cout<<ans<<endl;
        }
        else
        {
            ans = (b-a)+1;
            printf("%d step(s) before a loop of %d step(s)\n",a-1,ans);
            //cout<<a<<" "<<ans<<endl;

        }


    }







    return 0;
}

