#include<bits/stdc++.h>
using namespace std;
int num[1000005];
int main()
{
    int i,j,a,k,l,m,n,t,c,u,b,maxi,sum,ans,grid[11][11];
    bool found;
    n=6;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cin>>grid[i][j];
    }
    maxi = -9999;
    for(i=0; i<=n-3; i++)
    {
        for(j=0; j<=n-3; j++)
        {

            a = grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+1][j+1]+grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
            maxi = max(a,maxi);

        }
    }
    cout<<maxi<<endl;

    return 0;
}

