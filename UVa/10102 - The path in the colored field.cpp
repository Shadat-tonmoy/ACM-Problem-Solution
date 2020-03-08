#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int grid[MAX][MAX],n;
bool visited[MAX][MAX];
void reset()
{
    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            visited[i][j]=false;
}
bool isValidCell(int row, int col)
{
    return (!visited[row][col] && row>=0 && row<n && col>=0 && col<n);
}
int main()
{
    int i,j,k,l,m,ans,mini,a,b,x,y,z,tc;
    while(cin>>n)
    {
       std::vector<int> oneRows,oneCols,threeRows, threeCols;
        for(i=0;i<n;i++)
        {
            string input;
            cin>>input;
            for(j=0;j<n;j++)
            {
                int num = input[j]-'0';
                grid[i][j] = num;
                if(grid[i][j]==1)
                {
                    oneRows.push_back(i);
                    oneCols.push_back(j);
                }
                else if(grid[i][j]==3)
                {
                    threeRows.push_back(i);
                    threeCols.push_back(j);
                }
            }   
        }
        ans = 0;
        for(i=0;i<oneRows.size();i++)
        {
            int oneRow = oneRows[i];
            int oneCol = oneCols[i];
            int minimum = 99999999;
            for(j=0;j<threeRows.size();j++)
            {
                int threeRow = threeRows[j];
                int threeCol = threeCols[j];
                int diff = abs(threeRow-oneRow) + abs(threeCol-oneCol);
                minimum = min(minimum,diff);
            }
            ans = max(ans, minimum);
        }
        cout<<ans<<endl;  
    }
       
        
    
    return 0;
}
