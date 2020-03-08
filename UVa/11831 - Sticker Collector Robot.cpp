#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,k,l,m,n,row,col,a,b,c,x,y;
    char grid[150][150],ori,ins;
    while(cin>>row>>col>>n)
    {
        if(row==0 && col==0 && n==0)
            break;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]=='O')
                {
                    ori='O';
                    x = i;
                    y = j;
                }
                else if(grid[i][j]=='L')
                {
                    ori='L';
                    x = i;
                    y = j;
                }
                else if(grid[i][j]=='N')
                {
                    ori='N';
                    x = i;
                    y = j;
                }
                else if(grid[i][j]=='S')
                {
                    ori='S';
                    x = i;
                    y = j;
                }
            }
        }
        //cout<<"initial "<<x<<" "<<y<<" "<<ori<<endl;
        c=0;
        for(i=0; i<n; i++)
        {
            //cout<<i<<endl;
            cin>>ins;
            // cout<<ins<<endl;
            if(ins=='F')
            {
                //cout<<i<<" "<<ori<<" ";
                if((ori=='O') && (grid[x][y-1]!='#') && (y-1<col && y-1>=0))
                {
                    y--;
                    //cout<<"FOR O : "<<x<<" "<<y<<endl;
                }
                else if(ori=='L' && grid[x][y+1]!='#' && (y+1<col && y+1>=0))
                {
                    y++;
                     //cout<<"FOR L : "<<x<<" "<<y<<endl;
                }
                else if(ori=='N' && grid[x-1][y]!='#' && (x-1<row && x-1>=0))
                {
                    x--;
                     //cout<<"FOR N : "<<x<<" "<<y<<endl;
                }
                else if(ori=='S' && grid[x+1][y]!='#' && (x+1<row && x+1>=0))
                {
                    x++;
                     //cout<<"FOR S : "<<x<<" "<<y<<endl;
                }
                if(grid[x][y]=='*')
                {
                    //cout<<i<<" ";
                    //cout<<x<<" "<<y<<" "<<grid[x][y]<<endl;
                    grid[x][y]='p';
                    c++;
                }

            }
            else if (ins=='D')
            {
                if(ori=='N')
                    ori ='L';
                else if (ori=='S')
                    ori = 'O';
                else if (ori=='O')
                    ori = 'N';
                else if (ori=='L')
                    ori = 'S';

                //cout<<"chngd for D :"<<ori<<endl;
            }
            else if (ins=='E')
            {
                if(ori=='N')
                    ori ='O';
                else if (ori=='L')
                    ori = 'N';
                else if (ori=='O')
                    ori = 'S';
                else if (ori=='S')
                    ori = 'L';

                //cout<<"chngd for E :"<<ori<<endl;
            }
        }
        cout<<c<<endl;
    }


    return 0;
}
