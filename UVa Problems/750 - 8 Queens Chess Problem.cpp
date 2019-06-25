#include<bits/stdc++.h>
using namespace std;
#define SIZE 8
#define NON_VISITED -1
#define VISITED 1
#define QUEEN 8
int grid[SIZE][SIZE],input_row,input_col,solution_no;
bool visited[SIZE][SIZE];
std::vector<string> outputs ;
void reset()
{
    solution_no = 0;
    outputs.clear();
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            grid[i][j] = NON_VISITED;
}
void solve(int row)
{
    if(row == input_row-1)
        solve(row+1);
    if(row==SIZE)
    {
        // printf("%d      ",++solution_no);
        string output = "";
        for(int i=0;i<SIZE;i++)
        {
            for(int j=0;j<SIZE;j++)
            {
                if(grid[j][i]==QUEEN)
                {
                    // printf("%d ",j+1);
                    output += to_string(j+1);
                    if(i!=SIZE-1)
                        output+=" ";
                }
            }
        }
        // cout<<"output is "<<output<<endl;
        outputs.push_back(output);
        return;
    }
    for(int i=0;i<SIZE;i++)
    {
        if(grid[row][i]==NON_VISITED)
        {
            // cout<<"queen at "<<row<<" "<<i<<endl;
            grid[row][i] = QUEEN;
            
            for(int j=0;j<SIZE;j++)
            {
                if(grid[row][j]==NON_VISITED)
                {
                    grid[row][j] = row;
                }
            }
            
            for(int j=0;j<SIZE;j++)
            {
                if(grid[j][i]==NON_VISITED)
                {
                    grid[j][i] = row;
                }
            }
            
            for(int j=row,k=i;j<SIZE && k<SIZE;j++,k++)
            {
                if(grid[j][k]==NON_VISITED)
                {
                    grid[j][k] = row;
                }
            }
            
            for(int j=row,k=i;j>=0 && k>=0;j--,k--)
            {
                if(grid[j][k]==NON_VISITED)
                {
                    grid[j][k] = row;
                }
            }
            
            for(int j=row,k=i;j<SIZE && k>=0;j++,k--)
            {
                if(grid[j][k]==NON_VISITED)
                {
                    grid[j][k] = row;
                }
            }
            
            for(int j=row,k=i;j>=0 && k<SIZE;j--,k++)
            {
                if(grid[j][k]==NON_VISITED)
                {
                    grid[j][k] = row;
                }
            }
            
            solve(row+1);
            
            
            grid[row][i] = NON_VISITED;
            
            for(int j=0;j<SIZE;j++)
            {
                if(grid[row][j]==row)
                {
                    grid[row][j] = NON_VISITED;
                }
            }
            
            for(int j=0;j<SIZE;j++)
            {
                if(grid[j][i]==row)
                {
                    grid[j][i] = NON_VISITED;
                }
            }
            
            for(int j=row,k=i;j<SIZE && k<SIZE;j++,k++)
            {
                if(grid[j][k]==row)
                {
                    grid[j][k] = NON_VISITED;
                }
            }
            
            for(int j=row,k=i;j>=0 && k>=0;j--,k--)
            {
                if(grid[j][k]==row)
                {
                    grid[j][k] = NON_VISITED;
                }
            }
            
            for(int j=row,k=i;j<SIZE && k>=0;j++,k--)
            {
                if(grid[j][k]==row)
                {
                    grid[j][k] = NON_VISITED;
                }
            }
            
            for(int j=row,k=i;j>=0 && k<SIZE;j--,k++)
            {
                if(grid[j][k]==row)
                {
                    grid[j][k] = NON_VISITED;
                }
            }
        }
    }
    
}

void placeFirstQueen(int row,int col)
{
    grid[row][col] = QUEEN;
    for(int j=0;j<SIZE;j++)
    {
        if(grid[row][j]==NON_VISITED)
        {
            grid[row][j] = row;
        }
    }
    
    for(int j=0;j<SIZE;j++)
    {
        if(grid[j][col]==NON_VISITED)
        {
            grid[j][col] = row;
        }
    }
    
    for(int j=row,k=col;j<SIZE && k<SIZE;j++,k++)
    {
        if(grid[j][k]==NON_VISITED)
        {
            grid[j][k] = row;
        }
    }
    
    for(int j=row,k=col;j>=0 && k>=0;j--,k--)
    {
        if(grid[j][k]==NON_VISITED)
        {
            grid[j][k] = row;
        }
    }
    
    for(int j=row,k=col;j<SIZE && k>=0;j++,k--)
    {
        if(grid[j][k]==NON_VISITED)
        {
            grid[j][k] = row;
        }
    }
    
    for(int j=row,k=col;j>=0 && k<SIZE;j--,k++)
    {
        if(grid[j][k]==NON_VISITED)
        {
            grid[j][k] = row;
        }
    }
    // cout<<"first queen place"<<row<<" "<<col<<endl;
    // for(int i=0;i<SIZE;i++)
    //     {
    //         for(int j=0;j<SIZE;j++)
    //         {
    //             printf("%5d",grid[i][j]);
    //         }
    //         cout<<endl;
    //     }
    
    
}

int main()
{
    int i,j,k,l,m,tc,z,x,y,w,a,b;
    while(cin >> tc)
    {
        for(x=1;x<=tc;x++)
        {
            cin>>input_row>>input_col;
            reset();
            placeFirstQueen(input_row-1,input_col-1);
            solve(0);
            sort(outputs.begin(),outputs.end());
            printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
            for(i=0;i<outputs.size();i++)
            {
                printf("%2d      ",i+1);
                cout<<outputs[i]<<endl;
            }
            if(x!=tc)
                cout<<endl;
        }
        
    }

    return 0;
}