#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,row,col,c=0,field=1,check=0;
    char grid[110][110];
    while(cin>>row>>col)
    {
        if(row==0 && col==0)
            break;
        for(i=0; i<row; i++)
            for(j=0; j<col; j++)
                cin>>grid[i][j];
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                c=0;
                if(grid[i][j]=='.')
                {
                    if(grid[i][j-1]=='*')
                        c++;
                    if(grid[i][j+1]=='*')
                        c++;
                    if(grid[i-1][j]=='*')
                        c++;
                    if(grid[i+1][j]=='*')
                        c++;
                    if(grid[i-1][j+1]=='*')
                        c++;
                    if(grid[i-1][j-1]=='*')
                        c++;
                    if(grid[i+1][j-1]=='*')
                        c++;
                    if(grid[i+1][j+1]=='*')
                        c++;
                    grid[i][j]='0'+c;
                }
            }
        }
        if(check==1)
            cout<<endl;
        check=1;
        printf("Field #%d:\n",field);
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        field++;
        c=0;
        memset(grid,0,sizeof grid);
    }
    return 0;
}
