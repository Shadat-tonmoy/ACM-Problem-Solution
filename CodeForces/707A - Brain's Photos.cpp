#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,row,col;
    char grid[105][105];

    while(cin>>row>>col)
    {
        bool c,m,y,w,g,b;
        c=m=y=w=g=b=false;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]=='W')
                {
                    w=true;
                }
                else if(grid[i][j]=='B')
                {
                    b=true;
                }
                else if(grid[i][j]=='G')
                {
                    g=true;
                }
                else if(grid[i][j]=='C')
                {
                    c=true;

                }
                else if(grid[i][j]=='M')
                {
                    m=true;

                }
                else if(grid[i][j]=='Y')
                {
                    y=true;

                }
            }
        }
        if(c||m||y)
            cout<<"#Color"<<endl;
        else cout<<"#Black&White"<<endl;
    }


    return 0;
}
