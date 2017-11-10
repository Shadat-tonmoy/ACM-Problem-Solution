#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,r,c,grid[110][110],tmp[110][110];
    while(cin>>n>>r>>c>>b)
    {
        memset(tmp,-1,sizeof tmp);
        if(n==0 && r==0 && c==0 && b==0)
            break;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                cin>>grid[i][j];
        }
        for(k=1; k<=b; k++)
        {
            memset(tmp,-1,sizeof tmp);
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    if(i==0 && j==0)
                    {
                        if(grid[i][j]+1==grid[i][j+1] || (grid[i][j]==n-1 && grid[i][j+1]==0) )
                            tmp[i][j+1]=grid[i][j];
                        if(grid[i][j]+1==grid[i+1][j] || (grid[i][j]==n-1 && grid[i+1][j]==0))
                            tmp[i+1][j]=grid[i][j];
                    }
                    else if(i==0)
                    {
                        if((grid[i][j]+1==grid[i][j-1]) || (grid[i][j]==n-1 && grid[i][j-1]==0))
                            tmp[i][j-1]=grid[i][j];
                        if((grid[i][j]+1==grid[i][j+1]) || (grid[i][j]==n-1 && grid[i][j+1]==0))
                            tmp[i][j+1]=grid[i][j];
                        if((grid[i][j]+1==grid[i+1][j]) || (grid[i][j]==n-1 && grid[i+1][j]==0))
                            tmp[i+1][j]=grid[i][j];
                    }
                    else if(j==0)
                    {
                        if((grid[i][j]+1==grid[i-1][j]) || (grid[i][j]==n-1 && grid[i-1][j]==0))
                            tmp[i-1][j]=grid[i][j];
                        if((grid[i][j]+1==grid[i][j+1]) || (grid[i][j]==n-1 && grid[i][j+1]==0))
                            tmp[i][j+1]=grid[i][j];
                        if((grid[i][j]+1==grid[i+1][j]) || (grid[i][j]==n-1 && grid[i+1][j]==0))
                            tmp[i+1][j]=grid[i][j];
                    }
                    else
                    {
                        if((grid[i][j]+1==grid[i][j-1]) || (grid[i][j]==n-1 && grid[i][j-1]==0))
                            tmp[i][j-1]=grid[i][j];
                        if((grid[i][j]+1==grid[i-1][j]) || (grid[i][j]==n-1 && grid[i-1][j]==0))
                            tmp[i-1][j]=grid[i][j];
                        if((grid[i][j]+1==grid[i][j+1]) || (grid[i][j]==n-1 && grid[i][j+1]==0))
                            tmp[i][j+1]=grid[i][j];
                        if((grid[i][j]+1==grid[i+1][j]) || (grid[i][j]==n-1 && grid[i+1][j]==0))
                            tmp[i+1][j]=grid[i][j];
                    }
                }
            }
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {
                    if(tmp[i][j]!=-1)
                        grid[i][j]=tmp[i][j];
                }
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                if(j==c-1)
                    cout<<grid[i][j]<<endl;
                else cout<<grid[i][j]<<" ";
            }
        }
    }

    return 0;
}
