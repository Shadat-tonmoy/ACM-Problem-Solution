#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,ans,r,c,row,col,grid[10][10];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    row = abs(r-3);
    col = abs(c-3);
    ans = row+col;
    cout<<ans<<endl;



    return 0;
}
